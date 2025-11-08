using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class CarReplayController : MonoBehaviour
{
    [Header("Setup")]
    [SerializeField] private TextAsset carsJsonFile;
    [SerializeField] private GameObject carPrefab; // Your car model prefab
    
    [Header("Team Colors")]
    [SerializeField] private Material team0Material; // Orange
    [SerializeField] private Material team1Material; // Blue
    
    [Header("Scale Settings")]
    [SerializeField] private float positionScale = 0.01f;
    
    [Header("Debug")]
    [SerializeField] private bool autoPlay = true;
    [SerializeField] private bool showDebugInfo = true;
    
    private CarsReplayData replayData;
    private Dictionary<string, CarController> carControllers = new Dictionary<string, CarController>();
    private float replayStartTime;
    private bool isPlaying = false;
    
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
            replayData = JsonUtility.FromJson<CarsReplayData>(carsJsonFile.text);
            Debug.Log($"Loaded replay with {replayData.total_players} players");
            
            // Create car controllers for each player
            foreach (var playerEntry in replayData.players)
            {
                string playerName = playerEntry.Key;
                PlayerData playerData = playerEntry.Value;
                
                // Instantiate car GameObject
                GameObject carGO = Instantiate(carPrefab);
                carGO.name = $"Car_{playerName}";
                
                // Add CarController
                CarController controller = carGO.AddComponent<CarController>();
                controller.Initialize(playerName, playerData, positionScale, team0Material, team1Material);
                
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
        if (replayData == null || replayData.players.Count == 0)
        {
            Debug.LogError("No replay data available");
            return;
        }
        
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
            isPlaying = false;
            Debug.Log("Car replay finished!");
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
}

public class CarController : MonoBehaviour
{
    private string playerName;
    private PlayerData playerData;
    private float positionScale;
    private Material team0Material;
    private Material team1Material;
    
    private List<CarPosition> sortedPositions = new List<CarPosition>();
    private int currentPositionIndex = 0;
    private bool isActive = true;
    
    public bool IsActive => isActive;
    
    public void Initialize(string name, PlayerData data, float scale, Material mat0, Material mat1)
    {
        playerName = name;
        playerData = data;
        positionScale = scale;
        team0Material = mat0;
        team1Material = mat1;
        
        // Sort positions by time
        sortedPositions = data.positions.OrderBy(p => p.time).ToList();
        
        // Apply team material
        Material matToUse = playerData.player_info.team == 0 ? team0Material : team1Material;
        Renderer renderer = GetComponent<Renderer>();
        if (renderer != null && matToUse != null)
        {
            renderer.material = matToUse;
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
        
        transform.position = unityPosition;
        
        // Set rotation if available
        if (pos.rotation != null)
        {
            Quaternion unityRotation = new Quaternion(
                pos.rotation.x,
                pos.rotation.z,
                pos.rotation.y,
                pos.rotation.w
            );
            transform.rotation = unityRotation;
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
        
        transform.position = Vector3.Lerp(unityPos1, unityPos2, t);
        
        // Interpolate rotation if available
        if (pos1.rotation != null && pos2.rotation != null)
        {
            Quaternion rot1 = new Quaternion(pos1.rotation.x, pos1.rotation.z, pos1.rotation.y, pos1.rotation.w);
            Quaternion rot2 = new Quaternion(pos2.rotation.x, pos2.rotation.z, pos2.rotation.y, pos2.rotation.w);
            transform.rotation = Quaternion.Slerp(rot1, rot2, t);
        }
    }
}
