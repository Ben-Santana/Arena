using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallReplayController : MonoBehaviour
{
    [Header("Setup")]
    [SerializeField] private GameObject ballObject;
    [SerializeField] private TextAsset replayJsonFile;
    
    [Header("Scale Settings")]
    [SerializeField] private float positionScale = 0.01f; // Convert from Rocket League units to Unity units
    
    [Header("Debug")]
    [SerializeField] private bool autoPlay = true;
    [SerializeField] private bool showDebugInfo = true;
    
    private ReplayData replayData;
    private int currentPositionIndex = 0;
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
        if (replayJsonFile == null)
        {
            Debug.LogError("Replay JSON file not assigned!");
            return;
        }
        
        try
        {
            replayData = JsonUtility.FromJson<ReplayData>(replayJsonFile.text);
            Debug.Log($"Loaded replay with {replayData.total_positions} positions");
        }
        catch (System.Exception e)
        {
            Debug.LogError($"Failed to parse JSON: {e.Message}");
        }
    }
    
    public void StartReplay()
    {
        if (replayData == null || replayData.positions == null || replayData.positions.Count == 0)
        {
            Debug.LogError("No replay data available");
            return;
        }
        
        currentPositionIndex = 0;
        replayStartTime = Time.time;
        isPlaying = true;
        
        // Set initial position
        SetBallPosition(replayData.positions[0]);
        
        Debug.Log("Replay started!");
    }
    
    void Update()
    {
        if (!isPlaying || replayData == null) return;
        
        float currentReplayTime = Time.time - replayStartTime;
        
        // Find the correct position based on current time
        UpdateBallPosition(currentReplayTime);
        
        if (showDebugInfo)
        {
            Debug.Log($"Time: {currentReplayTime:F2}s | Position Index: {currentPositionIndex}/{replayData.positions.Count}");
        }
    }
    
    void UpdateBallPosition(float currentTime)
    {
        // Check if we've reached the end
        if (currentPositionIndex >= replayData.positions.Count - 1)
        {
            isPlaying = false;
            Debug.Log("Replay finished!");
            return;
        }
        
        // Get the time offset from the first position
        float startTime = replayData.positions[0].time;
        float adjustedTime = startTime + currentTime;
        
        // Find the next position to move to
        while (currentPositionIndex < replayData.positions.Count - 1 &&
               replayData.positions[currentPositionIndex + 1].time <= adjustedTime)
        {
            currentPositionIndex++;
        }
        
        // Set the current position
        if (currentPositionIndex < replayData.positions.Count)
        {
            BallPosition currentPos = replayData.positions[currentPositionIndex];
            
            // Interpolate if there's a next position
            if (currentPositionIndex < replayData.positions.Count - 1)
            {
                BallPosition nextPos = replayData.positions[currentPositionIndex + 1];
                float t = Mathf.InverseLerp(currentPos.time, nextPos.time, adjustedTime);
                SetBallPositionInterpolated(currentPos, nextPos, t);
            }
            else
            {
                SetBallPosition(currentPos);
            }
        }
    }
    
    void SetBallPosition(BallPosition pos)
    {
        if (ballObject == null) return;
        
        // Convert Rocket League coordinates to Unity coordinates
        // Rocket League uses different axis conventions
        Vector3 unityPosition = new Vector3(
            pos.x * positionScale,
            pos.z * positionScale,  // Rocket League Z becomes Unity Y (up)
            pos.y * positionScale   // Rocket League Y becomes Unity Z (forward)
        );
        
        ballObject.transform.position = unityPosition;
        
        // Set rotation if available
        if (pos.rotation != null)
        {
            Quaternion unityRotation = new Quaternion(
                pos.rotation.x,
                pos.rotation.z,
                pos.rotation.y,
                pos.rotation.w
            );
            ballObject.transform.rotation = unityRotation;
        }
    }
    
    void SetBallPositionInterpolated(BallPosition pos1, BallPosition pos2, float t)
    {
        if (ballObject == null) return;
        
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
        
        ballObject.transform.position = Vector3.Lerp(unityPos1, unityPos2, t);
        
        // Interpolate rotation if available
        if (pos1.rotation != null && pos2.rotation != null)
        {
            Quaternion rot1 = new Quaternion(pos1.rotation.x, pos1.rotation.z, pos1.rotation.y, pos1.rotation.w);
            Quaternion rot2 = new Quaternion(pos2.rotation.x, pos2.rotation.z, pos2.rotation.y, pos2.rotation.w);
            ballObject.transform.rotation = Quaternion.Slerp(rot1, rot2, t);
        }
    }
    
    // Optional: Restart replay
    public void RestartReplay()
    {
        StartReplay();
    }
}
