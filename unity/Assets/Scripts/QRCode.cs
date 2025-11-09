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

            // Get anchor ID once for this iteration
            var id = anchor.Uuid;

            // Get a pose first (needed for anchor to be fully initialized)
            if (!anchor.TryGetComponent(out OVRLocatable locatable))
                continue;

            await locatable.SetEnabledAsync(true, 0);

            // Try to get QR code size from OVRBounded2D component (after enabling locatable)
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

            // Calculate scale factor - use most recent detected size if available
            float scaleFactor = 1.0f;
            float qrSizeForScale = 0f;
            if (hasSize && qrSizeMeters > 0f)
            {
                // Use the size we just detected this frame
                qrSizeForScale = qrSizeMeters;
                scaleFactor = qrSizeMeters / _prefabReferenceSize;
                float originalScaleFactor = scaleFactor;
                scaleFactor = Mathf.Clamp(scaleFactor, 0.0000001f, 10000.0f); // Safety clamp with much wider range
                Debug.Log($"[QR SCALING] Calculated scale: {scaleFactor:F6} (original: {originalScaleFactor:F6}, QR: {qrSizeMeters:F4}m / Prefab: {_prefabReferenceSize:F4}m)");
            }
            else if (_anchorSizes.TryGetValue(id, out float storedSize) && storedSize > 0f)
            {
                // Fallback to previously stored size if detection failed this frame
                qrSizeForScale = storedSize;
                scaleFactor = storedSize / _prefabReferenceSize;
                scaleFactor = Mathf.Clamp(scaleFactor, 0.0001f, 100.0f);
                Debug.Log($"[QR SCALING] Using stored size for scale: {scaleFactor:F6} (QR: {storedSize:F4}m / Prefab: {_prefabReferenceSize:F4}m)");
            }
            else
            {
                Debug.LogWarning($"[QR SCALING] No size available for anchor {id}. Using default scale 1.0");
            }

            if (!_instances.TryGetValue(id, out var go))
            {
                go = Instantiate(prefab, worldPos, worldRot);
                go.name = string.IsNullOrEmpty(payloadText) ? $"QR_{id}" : $"QR_{SanitizeName(payloadText)}_{id}";
                
                // Disable any cameras in the spawned object to prevent view switching
                DisableCamerasInObject(go);
                
                // Always apply scale if we have a valid size
                if (qrSizeForScale > 0f)
                {
                    go.transform.localScale = Vector3.one * scaleFactor;
                    Debug.Log($"Applied scale factor {scaleFactor:F3} to QR object (QR size: {qrSizeForScale}m, prefab ref: {_prefabReferenceSize}m)");
                }
                
                _instances.Add(id, go);
                Debug.Log($"QR detected: \"{payloadText}\" ({id})");
            }
            else
            {
                go.transform.SetPositionAndRotation(worldPos, worldRot);
                
                // Always update scale if we have a valid size and it differs from current scale
                if (qrSizeForScale > 0f)
                {
                    float currentScale = go.transform.localScale.x;
                    if (Mathf.Abs(currentScale - scaleFactor) > 0.001f)
                    {
                        go.transform.localScale = Vector3.one * scaleFactor;
                        Debug.Log($"Updated scale factor from {currentScale:F3} to {scaleFactor:F3} for existing QR object (QR size: {qrSizeForScale}m)");
                    }
                }
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
            _anchorSizes.Remove(id); // Clean up size tracking
        }

        HashSetPool<Guid>.Release(active);
        ListPool<Guid>.Release(toRemove);
    }

    private static string GetPayloadString(OVRMarkerPayload payload)
    {
        try
        {
            if (payload.PayloadType == OVRMarkerPayloadType.StringQRCode)
                return payload.AsString(); // SDK-provided string accessor

            // Fallback to bytes
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
            
            // For spheres/balls, use diameter (largest dimension)
            // For flat objects on QR codes, use X or Z
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
            // Get bounds in local space by temporarily instantiating
            GameObject temp = Instantiate(prefab);
            temp.transform.position = Vector3.zero;
            temp.transform.rotation = Quaternion.identity;
            temp.transform.localScale = Vector3.one;
            
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
        
        // Default: assume 1 Unity unit = 1 meter
        Debug.LogWarning($"[QR SCALING] Could not determine prefab reference size, using default 1.0 meters");
        return 1.0f;
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
