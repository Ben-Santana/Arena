using UnityEngine;

public class SimpleReplaySync : MonoBehaviour
{
    [Header("Replay Controllers")]
    [SerializeField] private BallReplayController ballController;
    [SerializeField] private CarReplayController carController;
    
    [Header("Network Settings")]
    [SerializeField] private float broadcastInterval = 0.1f; // 10Hz
    [SerializeField] private float discoveryTime = 2.0f; // Time to wait before becoming host
    [SerializeField] private float syncThreshold = 0.3f; // Only sync if drift exceeds this (seconds)
    
    private UDPBroadcaster broadcaster;
    private UDPReceiver receiver;
    
    private bool isHost = false;
    private bool isClient = false;
    private float nextBroadcastTime = 0f;
    private float startTime;
    
    private bool wasPlaying = false;
    private bool swipeHasBeenTriggered = false;
    
    void Start()
    {
        startTime = Time.time;
        
        // Add UDP components
        broadcaster = gameObject.AddComponent<UDPBroadcaster>();
        receiver = gameObject.AddComponent<UDPReceiver>();
        
        // Subscribe to receiver events
        receiver.OnMessageReceived += HandleReceivedMessage;
        receiver.OnTimeout += HandleTimeout;
        
        Debug.Log("[SimpleReplaySync] Started - waiting to determine host/client role");
    }
    
    void Update()
    {
        // Determine role after discovery period
        if (!isHost && !isClient && Time.time - startTime > discoveryTime)
        {
            if (!receiver.HasRecentMessage())
            {
                // No broadcasts detected, become host
                BecomeHost();
            }
            else
            {
                // Broadcasts detected, become client
                BecomeClient();
            }
        }
        
        // Host: Broadcast replay state
        if (isHost && Time.time >= nextBroadcastTime)
        {
            BroadcastReplayState();
            nextBroadcastTime = Time.time + broadcastInterval;
        }
        
        // Client: Monitor for host disconnection (handled by OnTimeout event)
    }
    
    void BecomeHost()
    {
        isHost = true;
        isClient = false;
        Debug.Log("[SimpleReplaySync] Became HOST - broadcasting replay state");
    }
    
    void BecomeClient()
    {
        isHost = false;
        isClient = true;
        
        // Disable swipe detector on client - only host can swipe
        ArenaSwipeDetector swipeDetector = GetComponentInChildren<ArenaSwipeDetector>();
        if (swipeDetector != null)
        {
            swipeDetector.enabled = false;
            Debug.Log("[SimpleReplaySync] CLIENT: Disabled swipe detector - only host can trigger");
        }
        
        Debug.Log("[SimpleReplaySync] Became CLIENT - following host");
    }
    
    void BroadcastReplayState()
    {
        if (ballController == null || carController == null) return;
        
        SyncMessage message = new SyncMessage
        {
            ballTime = ballController.GetCurrentTime(),
            carTime = carController.GetCurrentTime(),
            isPlaying = ballController.IsCurrentlyPlaying() && carController.IsCurrentlyPlaying(),
            swipeTriggered = swipeHasBeenTriggered
        };
        
        broadcaster.BroadcastMessage(message);
        
        // Debug log every 2 seconds
        if (Time.frameCount % 120 == 0)
        {
            Debug.Log($"[SimpleReplaySync] HOST: Broadcasting - Ball: {message.ballTime:F2}s, Car: {message.carTime:F2}s, Playing: {message.isPlaying}, Swipe: {message.swipeTriggered}");
        }
    }
    
    // Called when host triggers swipe
    public void OnHostSwipeTriggered()
    {
        swipeHasBeenTriggered = true;
        Debug.Log("[SimpleReplaySync] HOST: Swipe triggered, will broadcast to clients");
    }
    
    void HandleReceivedMessage(SyncMessage message)
    {
        // Ignore our own messages
        if (message.deviceId == broadcaster.GetDeviceId())
            return;
        
        // If we haven't chosen a role yet and receiving messages, become client
        if (!isHost && !isClient)
        {
            BecomeClient();
        }
        
        // HOST should ignore incoming messages (it's the authority)
        if (isHost)
        {
            Debug.LogWarning($"[SimpleReplaySync] HOST: Ignoring message from device {message.deviceId.Substring(0, 8)}... (host is authority)");
            return;
        }
        
        // Only clients should sync to received messages
        if (!isClient) return;
        
        if (ballController == null || carController == null) return;
        
        // Handle swipe trigger from host
        if (message.swipeTriggered && !swipeHasBeenTriggered)
        {
            swipeHasBeenTriggered = true;
            
            // Trigger swipe animation on client
            ArenaSwipeDetector swipeDetector = GetComponentInChildren<ArenaSwipeDetector>();
            if (swipeDetector != null)
            {
                // Manually trigger the swipe callback
                swipeDetector.TriggerSwipeFromNetwork();
            }
            
            Debug.Log("[SimpleReplaySync] CLIENT: Host triggered swipe, starting animation");
        }
        
        // Update replay positions to match host
        if (message.isPlaying)
        {
            // Calculate drift between client and host
            float ballDrift = Mathf.Abs(message.ballTime - ballController.GetCurrentTime());
            float carDrift = Mathf.Abs(message.carTime - carController.GetCurrentTime());
            
            // Only sync if drift exceeds threshold (prevents constant snapping)
            bool needsSync = ballDrift > syncThreshold || carDrift > syncThreshold;
            
            if (needsSync)
            {
                ballController.SetReplayToTime(message.ballTime);
                carController.SetReplayToTime(message.carTime);
                Debug.Log($"[SimpleReplaySync] CLIENT: Correcting drift - Ball: {ballDrift:F2}s, Car: {carDrift:F2}s");
            }
            
            if (!wasPlaying)
            {
                Debug.Log($"[SimpleReplaySync] CLIENT: Syncing to host time - Ball: {message.ballTime:F2}s, Car: {message.carTime:F2}s");
                wasPlaying = true;
            }
        }
        else
        {
            // Host is paused
            if (wasPlaying)
            {
                ballController.PauseReplay();
                carController.PauseReplay();
                Debug.Log("[SimpleReplaySync] CLIENT: Host paused, pausing replay");
                wasPlaying = false;
            }
        }
    }
    
    void HandleTimeout()
    {
        if (!isClient) return;
        
        // Host disconnected, pause replay
        if (ballController != null) ballController.PauseReplay();
        if (carController != null) carController.PauseReplay();
        
        Debug.Log("[SimpleReplaySync] CLIENT: Host timeout detected, pausing replay");
        wasPlaying = false;
    }
    
    void OnDestroy()
    {
        if (receiver != null)
        {
            receiver.OnMessageReceived -= HandleReceivedMessage;
            receiver.OnTimeout -= HandleTimeout;
        }
    }
    
    // Public methods for debugging
    public bool IsHost() => isHost;
    public bool IsClient() => isClient;
    public string GetRole() => isHost ? "HOST" : (isClient ? "CLIENT" : "UNDECIDED");
}

