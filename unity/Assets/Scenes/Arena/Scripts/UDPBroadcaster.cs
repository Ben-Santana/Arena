using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using UnityEngine;

public class UDPBroadcaster : MonoBehaviour
{
    [Header("Network Settings")]
    [SerializeField] private int port = 7777;
    
    private UdpClient udpClient;
    private IPEndPoint broadcastEndPoint;
    private string deviceId;
    
    void Start()
    {
        // Generate unique device ID
        deviceId = SystemInfo.deviceUniqueIdentifier;
        
        try
        {
            // Create UDP client for broadcasting
            udpClient = new UdpClient();
            udpClient.EnableBroadcast = true;
            
            // Set up broadcast endpoint
            broadcastEndPoint = new IPEndPoint(IPAddress.Broadcast, port);
            
            Debug.Log($"[UDPBroadcaster] Started on port {port} with device ID: {deviceId}");
        }
        catch (Exception e)
        {
            Debug.LogError($"[UDPBroadcaster] Failed to initialize: {e.Message}");
        }
    }
    
    public void BroadcastMessage(SyncMessage message)
    {
        if (udpClient == null) return;
        
        try
        {
            // Set device ID
            message.deviceId = deviceId;
            
            // Serialize to JSON
            string json = message.ToJson();
            byte[] data = Encoding.UTF8.GetBytes(json);
            
            // Broadcast
            udpClient.Send(data, data.Length, broadcastEndPoint);
        }
        catch (Exception e)
        {
            Debug.LogError($"[UDPBroadcaster] Failed to broadcast: {e.Message}");
        }
    }
    
    void OnDestroy()
    {
        if (udpClient != null)
        {
            udpClient.Close();
            udpClient = null;
        }
    }
    
    public string GetDeviceId()
    {
        return deviceId;
    }
}

