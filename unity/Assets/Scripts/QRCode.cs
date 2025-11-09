using System;
using System.Collections.Generic;
using System.Text;
using UnityEngine;

public class QRCodeSpawner : MonoBehaviour
{
    [Header("Prefab to place at each detected QR code")]
    public GameObject prefab;

    [Header("References")]
    public OVRCameraRig cameraRig; // assign in Inspector

    private OVRAnchor.Tracker _tracker;
    private readonly List<OVRAnchor> _scratch = new List<OVRAnchor>();
    private readonly Dictionary<Guid, GameObject> _instances = new Dictionary<Guid, GameObject>();

    [SerializeField] private float fetchInterval = 0.1f;
    private float _timer;

    private float _prefabReferenceSize = 1.0f;
    private readonly Dictionary<Guid, float> _anchorSizes = new Dictionary<Guid, float>();

    [Header("Spawn Animation Offsets")]
    [SerializeField] private Vector3 startPositionOffset = Vector3.zero;
    [SerializeField] private Vector3 endPositionOffset = Vector3.zero;

    [Tooltip("Rotation offsets in Euler angles (degrees)")]
    [SerializeField] private Vector3 startRotationOffset = Vector3.zero;
    [Tooltip("Rotation offsets in Euler angles (degrees)")]
    [SerializeField] private Vector3 endRotationOffset = Vector3.zero;

    [Tooltip("Scale multiplier at animation start (1.0 = no change)")]
    [SerializeField] private float startScaleOffset = 1.0f;
    [Tooltip("Scale multiplier at animation end (1.0 = no change)")]
    [SerializeField] private float endScaleOffset = 1.0f;

    [Tooltip("Seconds for the spawn animation. 0 = place at end offsets immediately")]
    [SerializeField] [Min(0f)] private float animationDuration = 0.75f;

    [Header("Interaction Settings")]
    [SerializeField] private bool requireHandSwipeToAnimate = false;
    [Tooltip("If true, arena waits at start position until user swipes through it")]

    private struct AnimState { public float startTime; }
    private readonly Dictionary<Guid, AnimState> _animStates = new Dictionary<Guid, AnimState>();
    
    private enum AnimationState
    {
        WaitingForSwipe,  // Spawned, waiting for interaction
        Animating,        // Animation in progress
        Completed         // Animation finished
    }
    private readonly Dictionary<Guid, AnimationState> _animationStates = new Dictionary<Guid, AnimationState>();

    private struct PoseCache
    {
        public Vector3 worldPos;
        public Quaternion worldRot;
        public float baseScale; // QR size derived uniform scale before animated multiplier
    }
    private readonly Dictionary<Guid, PoseCache> _lastPose = new Dictionary<Guid, PoseCache>();

    private async void Awake()
    {
        if (cameraRig == null) cameraRig = FindFirstObjectByType<OVRCameraRig>();

        if (!OVRAnchor.TrackerConfiguration.QRCodeTrackingSupported)
        {
            Debug.LogWarning("QR code tracking not supported on this device or OS.");
            enabled = false;
            return;
        }

        _tracker = new OVRAnchor.Tracker();

        var config = new OVRAnchor.TrackerConfiguration
        {
            QRCodeTrackingEnabled = true,
            KeyboardTrackingEnabled = false
        };

        var ok = await _tracker.ConfigureAsync(config);
        if (!ok)
        {
            Debug.LogError("Failed to configure tracker.");
            enabled = false;
            return;
        }

        // Calculate prefab reference size for scaling
        if (prefab != null)
        {
            _prefabReferenceSize = GetPrefabReferenceSize(prefab);
            Debug.Log($"Prefab reference size calculated: {_prefabReferenceSize} meters");
        }
        else
        {
            Debug.LogWarning("Prefab is null, using default reference size of 1.0 meters");
        }
    }

    private void OnDestroy() => _tracker?.Dispose();

    private async void Update()
    {
        if (_tracker == null) return;

        _timer += Time.deltaTime;
        if (_timer < fetchInterval) return;
        _timer = 0f;

        _scratch.Clear();
        var result = await _tracker.FetchTrackablesAsync(_scratch);
        if (!result.Success) return;

        var active = HashSetPool<Guid>.Get();

        foreach (var anchor in _scratch)
        {
            // Get the QR payload component
            if (!anchor.TryGetComponent(out OVRMarkerPayload payload))
                continue;

            var id = anchor.Uuid;

            // Get a pose component
            if (!anchor.TryGetComponent(out OVRLocatable locatable))
                continue;

            await locatable.SetEnabledAsync(true, 0);

            // Try to get QR code size from OVRBounded2D component
            float qrSizeMeters = 0f;
            bool hasSize = TryGetQrSizeFromBounded2D(anchor, out qrSizeMeters);
            if (hasSize)
            {
                _anchorSizes[id] = qrSizeMeters;
                Debug.Log($"[QR SCALING] QR code size detected: {qrSizeMeters:F4} meters (anchor: {id})");
            }
            else
            {
                Debug.LogWarning($"[QR SCALING] Failed to detect QR code size for anchor {id}. OVRBounded2D may not be available.");
            }

            if (!locatable.TryGetSpatialAnchorPose(out var trackingPose))
                continue;

            if (!trackingPose.Position.HasValue || !trackingPose.Rotation.HasValue)
                continue;

            // Unwrap nullable pose
            var trackingPos = trackingPose.Position.Value;
            var trackingRot = trackingPose.Rotation.Value;

            // Convert tracking-space to world
            var trackingSpace = cameraRig.trackingSpace;
            var worldPos = trackingSpace.TransformPoint(trackingPos);
            var worldRot = trackingSpace.rotation * trackingRot;

            // Decode payload text
            string payloadText = GetPayloadString(payload);

            active.Add(id);

            // Calculate base scale factor from QR size and prefab reference
            float baseScale = 1.0f;
            if (hasSize && qrSizeMeters > 0f)
            {
                float originalScaleFactor = qrSizeMeters / _prefabReferenceSize;
                baseScale = Mathf.Clamp(originalScaleFactor, 0.0000001f, 10000.0f);
                Debug.Log($"[QR SCALING] Calculated base scale: {baseScale:F6} (original: {originalScaleFactor:F6}, QR: {qrSizeMeters:F4}m / Prefab: {_prefabReferenceSize:F4}m)");
            }
            else if (_anchorSizes.TryGetValue(id, out float storedSize) && storedSize > 0f)
            {
                float originalScaleFactor = storedSize / _prefabReferenceSize;
                baseScale = Mathf.Clamp(originalScaleFactor, 0.0001f, 100.0f);
                Debug.Log($"[QR SCALING] Using stored base scale: {baseScale:F6} (QR: {storedSize:F4}m / Prefab: {_prefabReferenceSize:F4}m)");
            }
            else
            {
                Debug.LogWarning($"[QR SCALING] No size available for anchor {id}. Using default base scale 1.0");
            }

            // Cache the latest world pose and base scale so LateUpdate can animate smoothly every frame
            _lastPose[id] = new PoseCache
            {
                worldPos = worldPos,
                worldRot = worldRot,
                baseScale = baseScale
            };

            // Determine current animation t for this anchor at fetch time
            float tAtFetch = 1f;
            bool isAnimating = _animStates.TryGetValue(id, out var st) && animationDuration > 0f;
            if (isAnimating)
            {
                float u = (Time.time - st.startTime) / animationDuration;
                if (u >= 1f)
                {
                    tAtFetch = 1f;
                    _animStates.Remove(id);
                    isAnimating = false;
                }
                else
                {
                    tAtFetch = SmoothStep01(u);
                }
            }
            else if (!_instances.ContainsKey(id))
            {
                // New instance: start at beginning of animation
                tAtFetch = animationDuration > 0f ? 0f : 1f;
            }
            else if (_animationStates.TryGetValue(id, out var animState) && 
                     animState == AnimationState.WaitingForSwipe)
            {
                // Waiting for swipe: stay at start position
                tAtFetch = 0f;
            }

            // Interpolate offsets for this fetch tick
            Vector3 posOffset = Vector3.Lerp(startPositionOffset, endPositionOffset, tAtFetch);
            Vector3 rotOffset = new Vector3(
                Mathf.LerpAngle(startRotationOffset.x, endRotationOffset.x, tAtFetch),
                Mathf.LerpAngle(startRotationOffset.y, endRotationOffset.y, tAtFetch),
                Mathf.LerpAngle(startRotationOffset.z, endRotationOffset.z, tAtFetch)
            );
            float scaleMul = Mathf.Lerp(startScaleOffset, endScaleOffset, tAtFetch);

            if (!_instances.TryGetValue(id, out var go))
            {
                // First time seen, instantiate at current offsets
                ApplyOffsets(worldPos, worldRot, baseScale, posOffset, rotOffset, scaleMul,
                             out Vector3 finalPos, out Quaternion finalRot, out Vector3 finalScale);

                go = Instantiate(prefab, finalPos, finalRot);
                go.name = string.IsNullOrEmpty(payloadText) ? $"QR_{id}" : $"QR_{SanitizeName(payloadText)}_{id}";

                DisableCamerasInObject(go);
                go.transform.localScale = finalScale;

                _instances.Add(id, go);

                // Determine animation behavior
                if (requireHandSwipeToAnimate && animationDuration > 0f)
                {
                    // Add swipe detector and wait for interaction
                    var swipeDetector = go.AddComponent<ArenaSwipeDetector>();
                    swipeDetector.OnSwipeDetected += () => OnArenaSwipeDetected(id);
                    _animationStates[id] = AnimationState.WaitingForSwipe;
                    Debug.Log($"QR detected: \"{payloadText}\" ({id}) - Waiting for hand swipe");
                }
                else if (animationDuration > 0f)
                {
                    // Start animation immediately (original behavior)
                    _animStates[id] = new AnimState { startTime = Time.time };
                    _animationStates[id] = AnimationState.Animating;
                    Debug.Log($"QR detected: \"{payloadText}\" ({id}) - Animation started");
                }
                else
                {
                    // No animation, go straight to end position
                    _animationStates[id] = AnimationState.Completed;
                    Debug.Log($"QR detected: \"{payloadText}\" ({id}) - No animation");
                }
            }
            else
            {
                // If not animating, keep the object in sync on fetch ticks
                if (!isAnimating)
                {
                    ApplyOffsets(worldPos, worldRot, baseScale, posOffset, rotOffset, scaleMul,
                                 out Vector3 finalPos, out Quaternion finalRot, out Vector3 finalScale);

                    go.transform.SetPositionAndRotation(finalPos, finalRot);

                    Vector3 currentScale = go.transform.localScale;
                    if ((currentScale - finalScale).magnitude > 0.001f)
                    {
                        go.transform.localScale = finalScale;
                    }
                }
                // If animating, LateUpdate will drive smooth per-frame interpolation using cached pose
            }
        }

        // Cleanup
        var toRemove = ListPool<Guid>.Get();
        foreach (var kvp in _instances)
            if (!active.Contains(kvp.Key))
                toRemove.Add(kvp.Key);

        foreach (var id in toRemove)
        {
            Destroy(_instances[id]);
            _instances.Remove(id);
            _anchorSizes.Remove(id);
            _animStates.Remove(id);
            _lastPose.Remove(id);
            _animationStates.Remove(id);
        }

        HashSetPool<Guid>.Release(active);
        ListPool<Guid>.Release(toRemove);
    }
    
    private void OnArenaSwipeDetected(Guid anchorId)
    {
        if (_animationStates.TryGetValue(anchorId, out var state) && 
            state == AnimationState.WaitingForSwipe)
        {
            // Start animation now!
            _animStates[anchorId] = new AnimState { startTime = Time.time };
            _animationStates[anchorId] = AnimationState.Animating;
            
            Debug.Log($"[QR SPAWNER] Swipe detected! Starting animation for anchor {anchorId}");
        }
    }

    // Smooth per-frame animation of position, rotation and scale using the most recent cached pose
    private void LateUpdate()
    {
        if (animationDuration <= 0f) return;
        if (_animStates.Count == 0) return;

        // Collect ids to finish after loop without modifying during enumeration
        List<Guid> finished = null;

        foreach (var kvp in _animStates)
        {
            Guid id = kvp.Key;
            
            // Skip if waiting for swipe
            if (_animationStates.TryGetValue(id, out var animState) && 
                animState == AnimationState.WaitingForSwipe)
                continue;
            
            if (!_instances.TryGetValue(id, out var go)) continue;
            if (!_lastPose.TryGetValue(id, out var pose)) continue;

            float u = (Time.time - kvp.Value.startTime) / animationDuration;
            if (u >= 1f)
            {
                // Snap to end once and mark finished
                Vector3 posOffsetEnd = endPositionOffset;
                Vector3 rotOffsetEnd = endRotationOffset;
                float scaleMulEnd = endScaleOffset;

                ApplyOffsets(pose.worldPos, pose.worldRot, pose.baseScale,
                             posOffsetEnd, rotOffsetEnd, scaleMulEnd,
                             out Vector3 finalPosEnd, out Quaternion finalRotEnd, out Vector3 finalScaleEnd);

                go.transform.SetPositionAndRotation(finalPosEnd, finalRotEnd);
                go.transform.localScale = finalScaleEnd;

                if (finished == null) finished = new List<Guid>();
                finished.Add(id);
                continue;
            }

            float t = SmoothStep01(u);

            Vector3 posOffset = Vector3.Lerp(startPositionOffset, endPositionOffset, t);
            Vector3 rotOffset = new Vector3(
                Mathf.LerpAngle(startRotationOffset.x, endRotationOffset.x, t),
                Mathf.LerpAngle(startRotationOffset.y, endRotationOffset.y, t),
                Mathf.LerpAngle(startRotationOffset.z, endRotationOffset.z, t)
            );
            float scaleMul = Mathf.Lerp(startScaleOffset, endScaleOffset, t);

            ApplyOffsets(pose.worldPos, pose.worldRot, pose.baseScale,
                         posOffset, rotOffset, scaleMul,
                         out Vector3 finalPos, out Quaternion finalRot, out Vector3 finalScale);

            go.transform.SetPositionAndRotation(finalPos, finalRot);
            go.transform.localScale = finalScale;
        }

        if (finished != null)
        {
            for (int i = 0; i < finished.Count; i++)
                _animStates.Remove(finished[i]);
        }
    }

    private static float SmoothStep01(float x)
    {
        x = Mathf.Clamp01(x);
        return x * x * (3f - 2f * x);
    }

    private static string GetPayloadString(OVRMarkerPayload payload)
    {
        try
        {
            if (payload.PayloadType == OVRMarkerPayloadType.StringQRCode)
                return payload.AsString();

            var bytes = new byte[payload.ByteCount];
            var written = payload.GetBytes(bytes);
            return Encoding.UTF8.GetString(bytes, 0, written);
        }
        catch
        {
            return string.Empty;
        }
    }

    private static string SanitizeName(string s)
    {
        foreach (var c in System.IO.Path.GetInvalidFileNameChars())
            s = s.Replace(c, '_');
        return s;
    }

    private bool TryGetQrSizeFromBounded2D(OVRAnchor anchor, out float sizeMeters)
    {
        sizeMeters = 0f;

        if (!anchor.TryGetComponent(out OVRBounded2D bounded2D))
        {
            Debug.LogWarning("[QR SCALING] OVRBounded2D component not found on anchor");
            return false;
        }

        if (bounded2D.IsNull)
        {
            Debug.LogWarning("[QR SCALING] OVRBounded2D component is null");
            return false;
        }

        if (!bounded2D.IsEnabled)
        {
            Debug.LogWarning("[QR SCALING] OVRBounded2D component is not enabled");
            return false;
        }

        try
        {
            Rect boundingBox = bounded2D.BoundingBox;
            Debug.Log($"[QR SCALING] BoundingBox retrieved: width={boundingBox.width:F4}, height={boundingBox.height:F4}, x={boundingBox.x:F4}, y={boundingBox.y:F4}");

            // QR codes are square, use average of width and height as side length
            sizeMeters = (boundingBox.width + boundingBox.height) / 2f;

            if (sizeMeters > 0f)
            {
                Debug.Log($"[QR SCALING] Calculated QR size: {sizeMeters:F4} meters");
                return true;
            }
            else
            {
                Debug.LogWarning($"[QR SCALING] Calculated size is invalid: {sizeMeters:F4}");
                return false;
            }
        }
        catch (InvalidOperationException ex)
        {
            Debug.LogWarning($"[QR SCALING] Failed to get BoundingBox from OVRBounded2D: {ex.Message}");
            return false;
        }
    }

    private void DisableCamerasInObject(GameObject obj)
    {
        Camera[] cameras = obj.GetComponentsInChildren<Camera>(true);
        if (cameras.Length > 0)
        {
            Debug.LogWarning($"[QR SPAWNER] Found {cameras.Length} camera(s) in spawned object '{obj.name}'. Disabling to prevent view switching.");
            foreach (Camera cam in cameras)
            {
                cam.enabled = false;
                Debug.Log($"[QR SPAWNER] Disabled camera on '{cam.gameObject.name}'");
            }
        }
    }

    private float GetPrefabReferenceSize(GameObject prefab)
    {
        if (prefab == null) return 1.0f;

        // Try MeshFilter first
        MeshFilter meshFilter = prefab.GetComponent<MeshFilter>();
        if (meshFilter != null && meshFilter.sharedMesh != null)
        {
            Vector3 boundsSize = meshFilter.sharedMesh.bounds.size;
            Debug.Log($"[QR SCALING] Mesh bounds size: x={boundsSize.x:F4}, y={boundsSize.y:F4}, z={boundsSize.z:F4}");

            float referenceSize = Mathf.Max(boundsSize.x, boundsSize.y, boundsSize.z);
            if (referenceSize > 0f)
            {
                Debug.Log($"[QR SCALING] Using mesh reference size: {referenceSize:F4} meters");
                return referenceSize;
            }
        }

        // Fallback: check all Renderers in local space
        Renderer[] renderers = prefab.GetComponentsInChildren<Renderer>();
        if (renderers.Length > 0)
        {
            GameObject temp = Instantiate(prefab);
            temp.transform.position = Vector3.zero;
            temp.transform.rotation = Quaternion.identity;
            // keep authored localScale to measure as authored

            Bounds combinedBounds = new Bounds(Vector3.zero, Vector3.zero);
            bool boundsInitialized = false;

            foreach (Renderer r in temp.GetComponentsInChildren<Renderer>())
            {
                if (!boundsInitialized)
                {
                    combinedBounds = r.bounds;
                    boundsInitialized = true;
                }
                else
                {
                    combinedBounds.Encapsulate(r.bounds);
                }
            }

            Destroy(temp);

            if (boundsInitialized)
            {
                Vector3 boundsSize = combinedBounds.size;
                Debug.Log($"[QR SCALING] Renderer bounds size: x={boundsSize.x:F4}, y={boundsSize.y:F4}, z={boundsSize.z:F4}");
                float referenceSize = Mathf.Max(boundsSize.x, boundsSize.y, boundsSize.z);
                if (referenceSize > 0f)
                {
                    Debug.Log($"[QR SCALING] Using renderer reference size: {referenceSize:F4} meters");
                    return referenceSize;
                }
            }
        }

        Debug.LogWarning($"[QR SCALING] Could not determine prefab reference size, using default 1.0 meters");
        return 1.0f;
    }

    private void ApplyOffsets(
        Vector3 qrWorldPos,
        Quaternion qrWorldRot,
        float baseScale,
        Vector3 posOffset,
        Vector3 rotOffsetEuler,
        float scaleMul,
        out Vector3 finalPos,
        out Quaternion finalRot,
        out Vector3 finalScale)
    {
        Quaternion offsetRotQuat = Quaternion.Euler(rotOffsetEuler);
        finalRot = qrWorldRot * offsetRotQuat;

        // Position offset in QR local space
        finalPos = qrWorldPos + qrWorldRot * posOffset;

        // Combine base scale with animated scale multiplier
        float combinedScale = Mathf.Clamp(baseScale * scaleMul, 1e-7f, 10000f);
        finalScale = Vector3.one * combinedScale;
    }

    // Tiny pools to avoid GC churn
    static class HashSetPool<T>
    {
        static readonly Stack<HashSet<T>> Pool = new Stack<HashSet<T>>();
        public static HashSet<T> Get() => Pool.Count > 0 ? Pool.Pop() : new HashSet<T>();
        public static void Release(HashSet<T> set) { set.Clear(); Pool.Push(set); }
    }
    static class ListPool<T>
    {
        static readonly Stack<List<T>> Pool = new Stack<List<T>>();
        public static List<T> Get() => Pool.Count > 0 ? Pool.Pop() : new List<T>();
        public static void Release(List<T> list) { list.Clear(); Pool.Push(list); }
    }
}