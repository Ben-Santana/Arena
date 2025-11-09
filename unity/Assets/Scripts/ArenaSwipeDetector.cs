using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Hands;

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
    [SerializeField] private bool enablePulseEffect = true;
    [Tooltip("Pulse the arena while waiting for swipe")]
    
    [SerializeField] private float pulseSpeed = 2f;
    [SerializeField] private float pulseAmount = 0.1f;
    
    public event Action OnSwipeDetected;
    
    private XRHandSubsystem handSubsystem;
    private Vector3 lastLeftHandPos;
    private Vector3 lastRightHandPos;
    private bool wasInsideBoundsLeft;
    private bool wasInsideBoundsRight;
    private bool swipeDetected = false;
    private Vector3 originalScale;
    
    void Start()
    {
        // Store original scale for pulse effect
        originalScale = transform.localScale;
        
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
    
    void Update()
    {
        if (swipeDetected) return;
        
        // Apply pulse effect while waiting
        if (enablePulseEffect)
        {
            float pulse = Mathf.Sin(Time.time * pulseSpeed) * pulseAmount;
            transform.localScale = originalScale * (1f + pulse);
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
                swipeDetected = true;
                
                // Reset scale to original before triggering animation
                if (enablePulseEffect)
                {
                    transform.localScale = originalScale;
                }
                
                OnSwipeDetected?.Invoke();
                Debug.Log($"[ArenaSwipeDetector] {handName} hand swipe detected! Speed: {speed:F2} m/s, Distance: {distance:F3}m");
                
                // Disable this component after detection
                enabled = false;
            }
        }
        
        lastPos = handWorldPos;
        wasInside = isInside;
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

