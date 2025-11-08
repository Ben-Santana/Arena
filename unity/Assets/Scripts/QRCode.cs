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

    private async void Awake()
    {
        if (cameraRig == null) cameraRig = FindObjectOfType<OVRCameraRig>();

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

            // Get a pose
            if (!anchor.TryGetComponent(out OVRLocatable locatable))
                continue;

            await locatable.SetEnabledAsync(true, 0);

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

            var id = anchor.Uuid;
            active.Add(id);

            if (!_instances.TryGetValue(id, out var go))
            {
                go = Instantiate(prefab, worldPos, worldRot);
                go.name = string.IsNullOrEmpty(payloadText) ? $"QR_{id}" : $"QR_{SanitizeName(payloadText)}_{id}";
                _instances.Add(id, go);
                Debug.Log($"QR detected: \"{payloadText}\" ({id})");
            }
            else
            {
                go.transform.SetPositionAndRotation(worldPos, worldRot);
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
