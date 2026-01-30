using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using Newtonsoft.Json;

public class CarReplayController : MonoBehaviour
{
    [Header("Setup")]
    [SerializeField] private TextAsset carsJsonFile;
    [SerializeField] private GameObject carPrefab; 

    [Header("Parent Transform")]
    [SerializeField] private Transform replayParent; // Set this to the Arena transform

    [Header("Team Colors")]
    [SerializeField] private Material team0Material; // Orange
    [SerializeField] private Material team1Material; // Blue

    [Header("Scale Settings")]
    [SerializeField] private float positionScale = 1.0f; // Let Arena handle scaling via parent transform

    [Header("Rotation Offset")]
    [SerializeField] private Vector3 rotationOffset = Vector3.zero; // Rotation offset in degrees (X, Y, Z)
    [Tooltip("Apply rotation offset to all cars in Euler angles (degrees)")]

    [Header("Debug")]
    [SerializeField] private bool autoPlay = true;
    [SerializeField] private bool showDebugInfo = true;
    [SerializeField] private bool loopReplay = true;  // Enable infinite looping (default OFF because ts was genuinely looping even when I turn it off in unity editor which is so stupid)

    [Header("Replay Control")]
    [SerializeField] private BallReplayController ballController;  // Reference to ball controller for restarting

    private CarsReplayData replayData;
    private Dictionary<string, CarController> carControllers = new Dictionary<string, CarController>();
    private float replayStartTime;
    private bool isPlaying = false;
    private float replayDuration;


    void Start()
    {
        LoadReplayData();

        if (autoPlay)
        {
            StartReplay();
        }
    }

    void LoadReplayData()
    {
        if (carsJsonFile == null)
        {
            Debug.LogError("Cars JSON file not assigned");
            return;
        }

        try
        {
            replayData = JsonConvert.DeserializeObject<CarsReplayData>(carsJsonFile.text);
            Debug.Log($"Loaded replay with {replayData.total_players} players");

            // --- Debug check for missing critical data in positions ---
            foreach (var player in replayData.players)
            {
                int posIndex = 0;
                foreach (var pos in player.Value.positions)
                {
                    if (pos == null)
                        Debug.LogError($"Position is null for player '{player.Key}' at index {posIndex}");
                    else
                    {
                        if (pos.rotation == null)
                            Debug.LogError($"Missing rotation for player '{player.Key}' at position {posIndex}");
                        if (pos.linear_velocity == null)
                            Debug.LogError($"Missing linear_velocity for player '{player.Key}' at position {posIndex}");
                        if (pos.angular_velocity == null)
                            Debug.LogError($"Missing angular_velocity for player '{player.Key}' at position {posIndex}");
                    }
                    posIndex++;
                }
            }
            

            // Create car controllers for each player
            foreach (var playerEntry in replayData.players)
            {
                string playerName = playerEntry.Key;
                CarPlayerData playerData = playerEntry.Value;

                // Instantiate car GameObject as child of replayParent
                GameObject carGO = replayParent != null ? 
                    Instantiate(carPrefab, replayParent) : 
                    Instantiate(carPrefab);
                carGO.name = $"Car_{playerName}";

                // Add CarController
                CarController controller = carGO.AddComponent<CarController>();
                controller.Initialize(playerName, playerData, positionScale, team0Material, team1Material, rotationOffset);

                carControllers[playerName] = controller;

                Debug.Log($"Created car for player: {playerName} (Team: {playerData.player_info.team})");
            }
        }
        catch (System.Exception e)
        {
            Debug.LogError($"Failed to parse JSON: {e.Message}");
        }
    }

    public void StartReplay()
    {
        // if (replayData == null || replayData.players.Count == 0)
        // {
        //     Debug.LogError("No replay data available");
        //     return;
        // }

        replayStartTime = Time.time;
        isPlaying = true;

        // Reset all car controllers
        foreach (var controller in carControllers.Values)
        {
            controller.Reset();
        }

        Debug.Log("Car replay started!");
    }

    void Update()
    {
        if (!isPlaying || replayData == null) return;

        float currentReplayTime = Time.time - replayStartTime;

        // Update all car positions
        bool allFinished = true;
        foreach (var controller in carControllers.Values)
        {
            if (!controller.UpdatePosition(currentReplayTime))
            {
                allFinished = false;
            }
        }

        
        if (allFinished)
        {
            if (loopReplay)
            {
                // Reset car positions
                replayStartTime = Time.time;
                foreach (var controller in carControllers.Values)
                {
                    controller.Reset();
                }

                // Restart ball replay
                if (ballController != null)
                {
                    ballController.StartReplay();
                }

                Debug.Log($"Full replay restarting! loopReplay={loopReplay}");
            }
            else
            {
                isPlaying = false;
                Debug.Log("Car replay finished!");
            }
        }

        if (showDebugInfo && Time.frameCount % 30 == 0) // Log every 30 frames
        {
            Debug.Log($"Replay Time: {currentReplayTime:F2}s | Players Active: {carControllers.Count(c => c.Value.IsActive)}");
        }
    }

    public void RestartReplay()
    {
        StartReplay();
    }
    
    // Network sync methods
    public float GetCurrentTime()
    {
        if (!isPlaying) return 0f;
        return Time.time - replayStartTime;
    }
    
    public bool IsCurrentlyPlaying()
    {
        return isPlaying;
    }
    
    public void SetReplayToTime(float time)
    {
        replayStartTime = Time.time - time;
        // Reset all car controllers
        foreach (var controller in carControllers.Values)
        {
            controller.Reset();
        }
        isPlaying = true;
    }
    
    public void PauseReplay()
    {
        isPlaying = false;
    }
    
    public void ResumeReplay()
    {
        isPlaying = true;
    }
}

public class CarController : MonoBehaviour
{
    private string playerName;
    private CarPlayerData playerData;
    private float positionScale;
    private Material team0Material;
    private Material team1Material;
    private Vector3 rotationOffset;

    private List<CarPosition> sortedPositions = new List<CarPosition>();
    private int currentPositionIndex = 0;
    private bool isActive = true;

    public bool IsActive => isActive;

    public void Initialize(string name, CarPlayerData data, float scale, Material mat0, Material mat1, Vector3 rotOffset)
    {
        playerName = name;
        playerData = data;
        positionScale = scale;
        team0Material = mat0;
        team1Material = mat1;
        rotationOffset = rotOffset;

        // Sort positions by time
        sortedPositions = data.positions.OrderBy(p => p.time).ToList();

      
        Material matToUse = playerData.player_info.team == 0 ? team0Material : team1Material;
       
        if (matToUse != null)
        {
            Renderer[] renderers = GetComponentsInChildren<Renderer>(true);
            foreach (var renderer in renderers)
            {
                
                var shared = renderer.sharedMaterials;
                if (shared != null && shared.Length > 1)
                {
                    Material[] mats = Enumerable.Repeat(matToUse, shared.Length).ToArray();
                    renderer.materials = mats; // creates instances per renderer
                }
                else
                {
                    
                    renderer.material = matToUse; 
                }
            }
        }

       
    }

    public void Reset()
    {
        currentPositionIndex = 0;
        isActive = true;

        if (sortedPositions.Count > 0)
        {
            SetCarPosition(sortedPositions[0]);
        }
    }

    public bool UpdatePosition(float currentTime)
    {
        if (sortedPositions.Count == 0) return true;

        // Get the base time from first position
        float baseTime = sortedPositions[0].time;
        float adjustedTime = baseTime + currentTime;

        // Check if we've finished
        if (currentPositionIndex >= sortedPositions.Count - 1)
        {
            // Check if we're past the last position's time
            if (adjustedTime > sortedPositions[sortedPositions.Count - 1].time)
            {
                isActive = false;
                gameObject.SetActive(false);
                return true; // Finished
            }
        }

        // Find current and next positions
        while (currentPositionIndex < sortedPositions.Count - 1 &&
               sortedPositions[currentPositionIndex + 1].time <= adjustedTime)
        {
            currentPositionIndex++;
        }

        if (currentPositionIndex < sortedPositions.Count)
        {
            CarPosition currentPos = sortedPositions[currentPositionIndex];

            // Check for gap (demolition/respawn)
            if (currentPositionIndex < sortedPositions.Count - 1)
            {
                CarPosition nextPos = sortedPositions[currentPositionIndex + 1];

                // If gap is more than 1 second, car is hidden (demolition)
                if (nextPos.time - currentPos.time > 1.0f)
                {
                    gameObject.SetActive(false);
                    isActive = false;
                }
                else
                {
                    gameObject.SetActive(true);
                    isActive = true;

                    // Interpolate
                    float t = Mathf.InverseLerp(currentPos.time, nextPos.time, adjustedTime);
                    SetCarPositionInterpolated(currentPos, nextPos, t);
                }
            }
            else
            {
                gameObject.SetActive(true);
                isActive = true;
                SetCarPosition(currentPos);
            }
        }

        return false; // Not finished yet
    }

    void SetCarPosition(CarPosition pos)
    {
        if (pos == null) return;

        // Convert RL coordinates to Unity coordinates
        Vector3 unityPosition = new Vector3(
            pos.x * positionScale,
            pos.z * positionScale,  // RL Z -> Unity Y
            pos.y * positionScale   // RL Y -> Unity Z
        );

        transform.localPosition = unityPosition;

        // Set rotation (handles both quaternion and yaw/pitch/roll)
        if (pos.rotation != null)
        {
            Quaternion unityRotation;

            // Use quaternions if w is not zero/small (handles normal update entries)
            if (Mathf.Abs(pos.rotation.w) > 0.0001f)
            {
                unityRotation = new Quaternion(
                    pos.rotation.x,
                    pos.rotation.z,
                    pos.rotation.y,
                    pos.rotation.w
                );
            }
            // Otherwise, try using yaw/pitch/roll (initial entries)
            else if (Mathf.Abs(pos.rotation.yaw) > 0.0001f
                     || Mathf.Abs(pos.rotation.pitch) > 0.0001f
                     || Mathf.Abs(pos.rotation.roll) > 0.0001f)
            {
                unityRotation = Quaternion.Euler(
                    pos.rotation.pitch, 
                    pos.rotation.yaw,   
                    pos.rotation.roll   
                );
            }
            else
            {
                unityRotation = Quaternion.identity;
            }
            
            // Apply rotation offset
            Quaternion offsetRotation = Quaternion.Euler(rotationOffset);
            transform.rotation = unityRotation * offsetRotation;
        }
    }

    void SetCarPositionInterpolated(CarPosition pos1, CarPosition pos2, float t)
    {
        if (pos1 == null || pos2 == null) return;

        // Interpolate position
        Vector3 unityPos1 = new Vector3(
            pos1.x * positionScale,
            pos1.z * positionScale,
            pos1.y * positionScale
        );

        Vector3 unityPos2 = new Vector3(
            pos2.x * positionScale,
            pos2.z * positionScale,
            pos2.y * positionScale
        );

        transform.localPosition = Vector3.Lerp(unityPos1, unityPos2, t);

        
        if (pos1.rotation != null && pos2.rotation != null)
        {
            Quaternion rot1, rot2;

            if (Mathf.Abs(pos1.rotation.w) > 0.0001f)
            {
                rot1 = new Quaternion(pos1.rotation.x, pos1.rotation.z, pos1.rotation.y, pos1.rotation.w);
            }
            else
            {
                rot1 = Quaternion.Euler(pos1.rotation.pitch, pos1.rotation.yaw, pos1.rotation.roll);
            }

            if (Mathf.Abs(pos2.rotation.w) > 0.0001f)
            {
                rot2 = new Quaternion(pos2.rotation.x, pos2.rotation.z, pos2.rotation.y, pos2.rotation.w);
            }
            else
            {
                rot2 = Quaternion.Euler(pos2.rotation.pitch, pos2.rotation.yaw, pos2.rotation.roll);
            }

            // Apply rotation offset after interpolation
            Quaternion interpolatedRotation = Quaternion.Slerp(rot1, rot2, t);
            Quaternion offsetRotation = Quaternion.Euler(rotationOffset);
            transform.rotation = interpolatedRotation * offsetRotation;
        }
    }
}
