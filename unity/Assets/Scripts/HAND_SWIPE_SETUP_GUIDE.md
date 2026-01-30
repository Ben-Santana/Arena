# Hand Swipe Interaction Setup Guide

## Overview
The Arena now supports hand-based swipe interaction. When enabled, the arena spawns at a starting position and waits for the user to swipe through it before animating to its final position.

## What Was Implemented

### New Files:
1. **ArenaSwipeDetector.cs** - Component that detects hand swipes through the arena

### Modified Files:
1. **QRCode.cs** - Enhanced with interaction control and animation state management

## How It Works

### Flow:
1. User scans QR code
2. Arena spawns at **start position** (configured via offsets)
3. Arena **waits** for hand interaction (with optional pulse effect)
4. User **swipes hand** through the arena
5. Animation **triggers** and arena moves to final position
6. Replay starts playing

### Detection Method:
- Tracks both left and right hand positions using XR Hands API
- Detects when hand enters detection radius around arena
- Calculates hand velocity
- Triggers when hand crosses into arena with speed > threshold

## Unity Inspector Setup

### QRCodeSpawner Component Settings:

#### Spawn Animation Offsets:
```
Start Position Offset: (0, 0.5, 0)    // Float 0.5m above QR
End Position Offset: (0, 0, 0)        // On QR code
Start Rotation Offset: (0, 0, 0)      // No rotation
End Rotation Offset: (0, 0, 0)        // No rotation
Start Scale Offset: 0.5               // Half size at start
End Scale Offset: 1.0                 // Full size at end
Animation Duration: 0.75              // 0.75 second animation
```

#### Interaction Settings:
```
Require Hand Swipe To Animate: ✓ (checked)
```

### ArenaSwipeDetector (Auto-Added):
This component is automatically added to the spawned arena when interaction is enabled.

**Settings you can adjust:**
```
Swipe Speed Threshold: 0.5 m/s        // Minimum hand speed to trigger
Detection Radius: 0.3 meters          // Detection sphere size
Debug Visualization: ✓                // Show detection sphere in scene view
Enable Pulse Effect: ✓                // Pulse arena while waiting
Pulse Speed: 2.0                      // Speed of pulse animation
Pulse Amount: 0.1                     // Size of pulse (10% scale change)
```

## Testing in Unity Editor

### Scene View Visualization:
- Yellow wireframe sphere = detection radius (waiting for swipe)
- Green sphere = swipe detected
- Arena pulses gently while waiting

### Console Logs to Watch For:
```
[ArenaSwipeDetector] Hand subsystem found, ready for swipe detection
QR detected: "..." - Waiting for hand swipe
[ArenaSwipeDetector] Left hand swipe detected! Speed: 0.75 m/s
[QR SPAWNER] Swipe detected! Starting animation for anchor ...
```

## Testing on Quest Device

### Prerequisites:
- Hand tracking must be enabled on Quest
- XR Hands package must be installed
- Hand tracking permissions granted

### Test Steps:
1. Build and deploy to Quest
2. Enable hand tracking (remove controllers)
3. Scan QR code with Quest
4. Arena should spawn floating and pulsing
5. Swipe hand through the arena
6. Arena should animate to final position

### Troubleshooting:

**Arena doesn't spawn:**
- Check QR code is detected (console logs)
- Verify prefab is assigned in QRCodeSpawner

**Arena spawns but doesn't wait:**
- Check "Require Hand Swipe To Animate" is enabled
- Verify Animation Duration > 0

**Swipe not detected:**
- Check hand tracking is enabled on Quest
- Verify hands are visible to cameras
- Try increasing Detection Radius (0.5m)
- Try decreasing Swipe Speed Threshold (0.3 m/s)
- Check console for "[ArenaSwipeDetector] Hand subsystem found" message

**Arena animates immediately:**
- Disable "Require Hand Swipe To Animate" for original behavior

## Configuration Examples

### Example 1: Dramatic Entrance
```
Start Position Offset: (0, 1.0, 0)    // High above QR
Start Scale Offset: 0.1               // Very small
End Scale Offset: 1.0                 // Full size
Animation Duration: 1.5               // Slow dramatic animation
Swipe Speed Threshold: 0.3            // Easy to trigger
```

### Example 2: Quick Spawn
```
Start Position Offset: (0, 0.2, 0)    // Just above QR
Start Scale Offset: 0.8               // Almost full size
End Scale Offset: 1.0                 // Full size
Animation Duration: 0.3               // Quick snap
Swipe Speed Threshold: 0.7            // Requires deliberate swipe
```

### Example 3: No Interaction (Original Behavior)
```
Require Hand Swipe To Animate: ✗ (unchecked)
Animation Duration: 0.75
```

## Advanced Customization

### Adjusting Detection Sensitivity:

**More Sensitive (easier to trigger):**
- Increase Detection Radius to 0.5m
- Decrease Swipe Speed Threshold to 0.3 m/s

**Less Sensitive (requires deliberate swipe):**
- Decrease Detection Radius to 0.2m
- Increase Swipe Speed Threshold to 0.8 m/s

### Disabling Pulse Effect:
If you don't want the arena to pulse while waiting:
```
Enable Pulse Effect: ✗ (unchecked)
```

### Custom Visual Feedback:
You can add your own visual effects to the arena prefab:
- Particle systems
- Glowing materials
- Floating animations
- Audio cues

## Performance Notes

- Hand tracking adds minimal overhead
- Detection runs only while waiting for swipe
- Component disables itself after swipe detected
- No impact on replay performance

## Compatibility

- ✅ Works with existing QR code system
- ✅ Works with UDP replay synchronization
- ✅ Works with multiple QR codes independently
- ✅ Backward compatible (can be disabled)
- ✅ Works on Quest 2, Quest 3, Quest Pro

## Known Limitations

- Requires hand tracking to be enabled
- Won't work with controllers (by design)
- Detection sphere is fixed size (doesn't scale with arena)
- Single swipe only (can't cancel/redo)

## Future Enhancements (Not Implemented)

- Gesture-based controls (pinch, grab, etc.)
- Multi-touch interactions
- Voice commands
- Controller support as fallback
- Customizable gestures per QR code

