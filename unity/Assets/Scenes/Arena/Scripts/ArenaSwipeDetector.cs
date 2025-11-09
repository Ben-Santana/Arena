using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Hands;
using UnityEngine.UI;

public class ArenaSwipeDetector : MonoBehaviour
{
    [Header("Detection Settings")]
    [SerializeField] private float swipeSpeedThreshold = 0.5f; // m/s
    [Tooltip("Speed threshold for swipe detection in meters per second")]
    
    [SerializeField] private float detectionRadius = 0.3f; // meters
    [Tooltip("Radius around arena center for hand detection")]
    
    [SerializeField] private bool debugVisualization = true;
    [Tooltip("Show detection sphere in scene view")]
    
    [Header("Visual Feedback")]
    [SerializeField] private bool enableFloatingAnimation = true;
    [Tooltip("Enable floating and rotation animation while waiting for swipe")]
    
    [SerializeField] private float bobSpeed = 1.5f;
    [Tooltip("Speed of up/down bobbing motion")]
    
    [SerializeField] private float bobAmount = 0.025f;
    [Tooltip("Height of bobbing motion in meters")]
    
    [SerializeField] private float rotationSpeed = 30f;
    [Tooltip("Rotation speed in degrees per second")]
    
    [Header("UI Settings")]
    [SerializeField] private bool showSwipePrompt = true;
    [Tooltip("Show 'Swipe to Start' text prompt")]
    
    [SerializeField] private Vector3 promptOffset = new Vector3(0, 0.3f, 0);
    [Tooltip("Position offset for the prompt text relative to arena center")]
    
    [SerializeField] private Vector2 promptSize = new Vector2(0.4f, 0.1f);
    [Tooltip("Size of the prompt panel in meters (width, height)")]
    
    public event Action OnSwipeDetected;
    public event Action OnSwipeDetectedForNetwork; // For network notification
    
    private XRHandSubsystem handSubsystem;
    private Vector3 lastLeftHandPos;
    private Vector3 lastRightHandPos;
    private bool wasInsideBoundsLeft;
    private bool wasInsideBoundsRight;
    private bool swipeDetected = false;
    private Vector3 originalPosition;
    private Quaternion originalRotation;
    private GameObject promptObject;
    
    void Start()
    {
        // Store original position and rotation for animation
        originalPosition = transform.position;
        originalRotation = transform.rotation;
        
        // Create swipe prompt
        if (showSwipePrompt)
        {
            CreateSwipePrompt();
        }
        
        // Get hand subsystem
        List<XRHandSubsystem> subsystems = new List<XRHandSubsystem>();
        SubsystemManager.GetSubsystems(subsystems);
        if (subsystems.Count > 0)
        {
            handSubsystem = subsystems[0];
            Debug.Log("[ArenaSwipeDetector] Hand subsystem found, ready for swipe detection");
        }
        else
        {
            Debug.LogWarning("[ArenaSwipeDetector] No hand subsystem found! Hand tracking may not be enabled.");
        }
    }
    
    void CreateSwipePrompt()
    {
        // Create main prompt object
        promptObject = new GameObject("SwipePrompt");
        promptObject.transform.SetParent(transform, false);
        promptObject.transform.localPosition = promptOffset;
        promptObject.transform.localRotation = Quaternion.identity;
        
        // Create white background panel (using a simple quad)
        GameObject panelObj = GameObject.CreatePrimitive(PrimitiveType.Quad);
        panelObj.name = "Panel";
        panelObj.transform.SetParent(promptObject.transform, false);
        panelObj.transform.localPosition = Vector3.zero;
        panelObj.transform.localRotation = Quaternion.identity;
        panelObj.transform.localScale = new Vector3(promptSize.x, promptSize.y, 1f);
        
        // Set panel material to white
        Renderer panelRenderer = panelObj.GetComponent<Renderer>();
        if (panelRenderer != null)
        {
            panelRenderer.material = new Material(Shader.Find("Unlit/Color"));
            panelRenderer.material.color = Color.white;
        }
        
        // Remove collider (not needed)
        Collider panelCollider = panelObj.GetComponent<Collider>();
        if (panelCollider != null)
        {
            Destroy(panelCollider);
        }
        
        // Create 3D text
        GameObject textObj = new GameObject("Text");
        textObj.transform.SetParent(promptObject.transform, false);
        textObj.transform.localPosition = new Vector3(0, 0, -0.001f); // Slightly in front of panel
        textObj.transform.localRotation = Quaternion.identity;
        textObj.transform.localScale = Vector3.one;
        
        TextMesh textMesh = textObj.AddComponent<TextMesh>();
        textMesh.text = "SWIPE TO START";
        textMesh.fontSize = 50;
        textMesh.characterSize = 0.01f;
        textMesh.anchor = TextAnchor.MiddleCenter;
        textMesh.alignment = TextAlignment.Center;
        textMesh.color = Color.black;
        textMesh.fontStyle = FontStyle.Bold;
        
        // Set text material to render properly
        Renderer textRenderer = textObj.GetComponent<Renderer>();
        if (textRenderer != null)
        {
            textRenderer.material.shader = Shader.Find("GUI/Text Shader");
            textRenderer.material.color = Color.black;
        }
        
        Debug.Log("[ArenaSwipeDetector] Swipe prompt created with 3D text");
    }
    
    void Update()
    {
        if (swipeDetected) return;
        
        // Apply floating animation while waiting
        if (enableFloatingAnimation)
        {
            // Bobbing motion (up and down)
            float bob = Mathf.Sin(Time.time * bobSpeed) * bobAmount;
            Vector3 newPosition = originalPosition + Vector3.up * bob;
            transform.position = newPosition;
            
            // Continuous rotation around Y axis
            float rotationAmount = rotationSpeed * Time.deltaTime;
            transform.Rotate(Vector3.up, rotationAmount, Space.World);
        }
        
        // Make prompt always face the camera
        if (promptObject != null && Camera.main != null)
        {
            promptObject.transform.LookAt(Camera.main.transform);
            promptObject.transform.Rotate(0, 180, 0); // Flip to face camera
        }
        
        if (handSubsystem == null) return;
        
        // Check both hands for swipe
        CheckHandSwipe(handSubsystem.leftHand, ref lastLeftHandPos, ref wasInsideBoundsLeft, "Left");
        CheckHandSwipe(handSubsystem.rightHand, ref lastRightHandPos, ref wasInsideBoundsRight, "Right");
    }
    
    void CheckHandSwipe(XRHand hand, ref Vector3 lastPos, ref bool wasInside, string handName)
    {
        if (!hand.isTracked) return;
        
        // Get palm position (wrist joint as reference)
        if (!hand.GetJoint(XRHandJointID.Wrist).TryGetPose(out var wristPose))
            return;
        
        Vector3 handWorldPos = wristPose.position;
        Vector3 arenaCenter = transform.position;
        
        // Check if hand is within detection radius
        float distance = Vector3.Distance(handWorldPos, arenaCenter);
        bool isInside = distance < detectionRadius;
        
        // Calculate velocity
        if (lastPos != Vector3.zero)
        {
            Vector3 velocity = (handWorldPos - lastPos) / Time.deltaTime;
            float speed = velocity.magnitude;
            
            // Detect swipe: hand crosses from outside to inside with sufficient speed
            // OR hand is inside and moving fast (push gesture)
            bool crossedInside = !wasInside && isInside;
            bool fastPush = isInside && speed > swipeSpeedThreshold;
            
            if ((crossedInside || fastPush) && speed > swipeSpeedThreshold)
            {
                TriggerSwipe(handName, speed, distance);
            }
        }
        
        lastPos = handWorldPos;
        wasInside = isInside;
    }
    
    void TriggerSwipe(string handName, float speed, float distance)
    {
        if (swipeDetected) return;
        
        swipeDetected = true;
        
        // Destroy the prompt
        if (promptObject != null)
        {
            Destroy(promptObject);
            promptObject = null;
        }
        
        // Reset position and rotation to original before triggering animation
        if (enableFloatingAnimation)
        {
            transform.position = originalPosition;
            transform.rotation = originalRotation;
        }
        
        // Notify listeners
        OnSwipeDetected?.Invoke();
        OnSwipeDetectedForNetwork?.Invoke();
        
        Debug.Log($"[ArenaSwipeDetector] {handName} swipe detected! Speed: {speed:F2} m/s, Distance: {distance:F3}m");
        
        // Disable this component after detection
        enabled = false;
    }
    
    // Called from network to trigger swipe on client
    public void TriggerSwipeFromNetwork()
    {
        TriggerSwipe("Network (from host)", 0f, 0f);
    }
    
    void OnDrawGizmos()
    {
        if (!debugVisualization) return;
        
        // Draw detection sphere
        Gizmos.color = swipeDetected ? Color.green : new Color(1f, 1f, 0f, 0.3f);
        Gizmos.DrawWireSphere(transform.position, detectionRadius);
        
        // Draw solid sphere when swipe detected
        if (swipeDetected)
        {
            Gizmos.color = new Color(0f, 1f, 0f, 0.2f);
            Gizmos.DrawSphere(transform.position, detectionRadius);
        }
    }
}

