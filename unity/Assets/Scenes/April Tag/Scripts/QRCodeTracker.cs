using System.Collections.Generic;
using UnityEngine;
using Meta.XR.MRUtilityKit;

/// <summary>
/// Minimal QR code tracker that spawns a user-selectable prefab when QR codes are detected.
/// This script uses MRUK's trackable events which must be bound in the Unity Inspector.
/// </summary>
public class QRCodeTracker : MonoBehaviour
{
    [SerializeField]
    [Tooltip("The prefab to spawn when a QR code is detected. Set this in the Inspector.")]
    private GameObject prefabToSpawn;

    // Dictionary to track spawned objects for each detected trackable
    private Dictionary<MRUKTrackable, GameObject> _spawnedObjects = new Dictionary<MRUKTrackable, GameObject>();

    /// <summary>
    /// Called when a new trackable (QR code) is detected by MRUK.
    /// This method must be bound in the Unity Inspector: MRUK Component > Scene Settings > Tracker Configuration > On Trackable Added
    /// </summary>
    /// <param name="trackable">The detected trackable object containing position and rotation data</param>
    public void OnTrackableAdded(MRUKTrackable trackable)
    {
        // Validate that a prefab has been assigned in the Inspector
        if (prefabToSpawn == null)
        {
            Debug.LogWarning("[QRCodeTracker] No prefab assigned! Please assign a prefab in the Inspector.");
            return;
        }

        // Check if we've already spawned an object for this trackable
        if (_spawnedObjects.ContainsKey(trackable))
        {
            Debug.LogWarning($"[QRCodeTracker] Trackable {trackable.name} already has a spawned object.");
            return;
        }

        // Instantiate the prefab as a child of the trackable's transform
        // This ensures the prefab automatically follows the QR code's position and rotation
        GameObject spawnedObject = Instantiate(prefabToSpawn, trackable.transform);
        
        // Store the spawned object in our dictionary for later cleanup
        _spawnedObjects[trackable] = spawnedObject;

        Debug.Log($"[QRCodeTracker] QR Code detected (Type: {trackable.TrackableType}), spawning prefab at position {trackable.transform.position}");
    }

    /// <summary>
    /// Called when a trackable (QR code) is no longer detected by MRUK.
    /// This method must be bound in the Unity Inspector: MRUK Component > Scene Settings > Tracker Configuration > On Trackable Removed
    /// </summary>
    /// <param name="trackable">The trackable object that was lost</param>
    public void OnTrackableRemoved(MRUKTrackable trackable)
    {
        // Check if we have a spawned object for this trackable
        if (!_spawnedObjects.ContainsKey(trackable))
        {
            Debug.LogWarning($"[QRCodeTracker] No spawned object found for trackable {trackable.name}");
            return;
        }

        // Get the spawned object and destroy it
        GameObject spawnedObject = _spawnedObjects[trackable];
        if (spawnedObject != null)
        {
            Destroy(spawnedObject);
        }

        // Remove from our tracking dictionary
        _spawnedObjects.Remove(trackable);

        Debug.Log($"[QRCodeTracker] QR Code lost, removing prefab");
    }

    /// <summary>
    /// Clean up all spawned objects when this component is disabled or destroyed
    /// </summary>
    private void OnDisable()
    {
        // Clean up all spawned objects
        foreach (var kvp in _spawnedObjects)
        {
            if (kvp.Value != null)
            {
                Destroy(kvp.Value);
            }
        }
        _spawnedObjects.Clear();
    }
}

