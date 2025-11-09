using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using UnityEngine;

public class UDPReceiver : MonoBehaviour
{
    [Header("Network Settings")]
    [SerializeField] private int port = 7777;
    
    [Header("Timeout Settings")]
    [SerializeField] private float timeoutSeconds = 1.0f;
    
    private UdpClient udpClient;
    private Thread receiveThread;
    private bool isRunning = false;
    
    private SyncMessage latestMessage;
    private float lastMessageTime;
    private bool hasReceivedMessage = false;
    private object messageLock = new object();
    
    public event Action<SyncMessage> OnMessageReceived;
    public event Action OnTimeout;
    
    void Start()
    {
        StartReceiving();
    }
    
    void StartReceiving()
    {
        try
        {
            udpClient = new UdpClient(port);
            isRunning = true;
            
            receiveThread = new Thread(new ThreadStart(ReceiveData));
            receiveThread.IsBackground = true;
            receiveThread.Start();
            
            Debug.Log($"[UDPReceiver] Started listening on port {port}");
        }
        catch (Exception e)
        {
            Debug.LogError($"[UDPReceiver] Failed to start: {e.Message}");
        }
    }
    
    void ReceiveData()
    {
        while (isRunning)
        {
            try
            {
                IPEndPoint remoteEndPoint = new IPEndPoint(IPAddress.Any, port);
                byte[] data = udpClient.Receive(ref remoteEndPoint);
                
                if (data != null && data.Length > 0)
                {
                    string json = Encoding.UTF8.GetString(data);
                    SyncMessage message = SyncMessage.FromJson(json);
                    
                    lock (messageLock)
                    {
                        latestMessage = message;
                        lastMessageTime = Time.time;
                        hasReceivedMessage = true;
                    }
                }
            }
            catch (SocketException)
            {
                // Socket closed, exit gracefully
                break;
            }
            catch (Exception e)
            {
                Debug.LogError($"[UDPReceiver] Error receiving data: {e.Message}");
            }
        }
    }
    
    void Update()
    {
        // Check for new messages and invoke events on main thread
        lock (messageLock)
        {
            if (hasReceivedMessage && latestMessage != null)
            {
                OnMessageReceived?.Invoke(latestMessage);
                hasReceivedMessage = false;
            }
        }
        
        // Check for timeout
        if (lastMessageTime > 0 && Time.time - lastMessageTime > timeoutSeconds)
        {
            OnTimeout?.Invoke();
            lastMessageTime = 0; // Reset to prevent multiple timeout calls
        }
    }
    
    void OnDestroy()
    {
        isRunning = false;
        
        if (receiveThread != null && receiveThread.IsAlive)
        {
            receiveThread.Abort();
        }
        
        if (udpClient != null)
        {
            udpClient.Close();
            udpClient = null;
        }
    }
    
    public bool HasRecentMessage()
    {
        return lastMessageTime > 0 && Time.time - lastMessageTime < timeoutSeconds;
    }
    
    public float TimeSinceLastMessage()
    {
        if (lastMessageTime == 0) return float.MaxValue;
        return Time.time - lastMessageTime;
    }
}

