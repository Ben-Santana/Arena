using System;
using UnityEngine;

[Serializable]
public class SyncMessage
{
    public string deviceId;      // To identify sender
    public float ballTime;       // Current ball replay time
    public float carTime;        // Current car replay time  
    public bool isPlaying;       // Is replay active
    public bool swipeTriggered;  // Host triggered swipe animation
    
    // Helper method to serialize to JSON
    public string ToJson()
    {
        return JsonUtility.ToJson(this);
    }
    
    // Helper method to deserialize from JSON
    public static SyncMessage FromJson(string json)
    {
        return JsonUtility.FromJson<SyncMessage>(json);
    }
}

