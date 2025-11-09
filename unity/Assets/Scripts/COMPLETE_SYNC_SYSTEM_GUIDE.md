# Complete Synchronized Replay System Guide

## Overview
This system combines QR code detection, hand swipe interaction, and network synchronization to create a synchronized AR replay experience across two Meta Quest headsets.

## System Components

### 1. QR Code Detection & Spawning
- **QRCodeSpawner** (QRCode.cs) - Detects QR codes and spawns Arena prefab

### 2. Hand Swipe Interaction
- **ArenaSwipeDetector** - Detects hand swipes to trigger animation
- **UI Prompt** - Shows "👋 SWIPE TO START" on white panel

### 3. Replay Controllers
- **BallReplayController** - Controls ball replay
- **CarReplayController** - Controls car replays

### 4. Network Synchronization
- **SimpleReplaySync** - Manages host/client roles
- **UDPBroadcaster** - Sends state updates
- **UDPReceiver** - Receives state updates
- **SyncMessage** - Data structure for network messages

## Complete Flow

### HOST Device (First to Scan QR):

1. **Scan QR Code**
   - Arena spawns at START position (floating, small)
   - Replay controllers wait (don't start)
   - "SWIPE TO START" prompt appears
   - Arena bobs up/down and rotates

2. **Wait 2 Seconds**
   - No network broadcasts detected
   - Becomes HOST
   - Starts broadcasting replay state

3. **User Swipes Hand**
   - Swipe detected
   - Prompt disappears
   - Animation starts (START → END position)
   - Network notified of swipe

4. **Animation Completes**
   - Arena at final position
   - Replay starts playing
   - Broadcasts replay time to network

### CLIENT Device (Second to Scan QR):

1. **Scan QR Code**
   - Arena spawns at START position (floating, small)
   - Replay controllers wait (don't start)
   - "SWIPE TO START" prompt appears
   - Arena bobs up/down and rotates

2. **Detects HOST Broadcasts**
   - Receives network messages
   - Becomes CLIENT
   - **Disables swipe detector** (only host can swipe!)
   - **Hides prompt** or shows "Waiting for host..."

3. **HOST Swipes**
   - Receives swipe trigger from network
   - Prompt disappears
   - Animation starts (synchronized with host)
   - Replay controllers prepared

4. **Animation Completes**
   - Arena at final position
   - Replay starts playing
   - Syncs to host's replay time

## Network Synchronization Details

### Message Protocol:
```csharp
SyncMessage {
    deviceId: "unique-device-id"
    ballTime: 5.23 seconds
    carTime: 5.23 seconds
    isPlaying: true
    swipeTriggered: true  // NEW: Host has swiped
}
```

### Broadcast Frequency:
- **10Hz** (every 100ms) - Continuous state updates
- **Immediate** - Swipe trigger broadcast

### Sync Behavior:
- **Before Swipe**: Both devices wait, only host can swipe
- **After Swipe**: Both devices animate together
- **During Replay**: Client syncs only when drift > 0.3 seconds

## Configuration in Unity

### QRCodeSpawner Settings:
```
[Spawn Animation Offsets]
Start Position Offset: (0, 0.5, 0)    // Float above QR
End Position Offset: (0, 0, 0)        // On QR code
Start Scale Offset: 0.5               // Small
End Scale Offset: 1.0                 // Full size
Animation Duration: 0.75

[Interaction Settings]
Require Hand Swipe To Animate: ✓
```

### SimpleReplaySync Settings:
```
Ball Controller: [Assign BallReplayController]
Car Controller: [Assign CarReplayController]
Broadcast Interval: 0.1
Discovery Time: 2.0
Sync Threshold: 0.3
```

### ArenaSwipeDetector Settings (Auto-Added):
```
Swipe Speed Threshold: 0.5 m/s
Detection Radius: 0.3 meters
Bob Speed: 1.5
Bob Amount: 0.025 meters
Rotation Speed: 30 degrees/sec
Show Swipe Prompt: ✓
Prompt Offset: (0, 0.3, 0)
Prompt Size: (0.4, 0.1)
```

## Scene Hierarchy Setup

Your Arena prefab should have this structure:
```
Arena (GameObject)
├── SimpleReplaySync (Component)
├── BallReplayController (Component)
├── CarReplayController (Component)
├── Ball (GameObject)
├── Cars (GameObjects - created at runtime)
└── ArenaSwipeDetector (Component - added at runtime)
    └── SwipePromptCanvas (GameObject - created at runtime)
        └── Panel (Image - white background)
            └── Text (TextMeshPro - black text)
```

## Testing Procedure

### Single Device Test:
1. Build and deploy to one Quest
2. Scan QR code
3. Verify arena spawns floating and rotating
4. Verify "SWIPE TO START" prompt is visible
5. Swipe hand through arena
6. Verify prompt disappears
7. Verify animation plays
8. Verify replay starts after animation

### Two Device Test:
1. Deploy to both Quest devices
2. Ensure both on same WiFi network

**Device A (Host):**
1. Scan QR code first
2. Wait 2 seconds
3. Check logs: "Became HOST"
4. Swipe through arena
5. Replay starts

**Device B (Client):**
1. Scan same QR code
2. Check logs: "Became CLIENT"
3. Check logs: "Disabled swipe detector"
4. **Cannot swipe** (detector disabled)
5. When host swipes: animation starts automatically
6. Replay syncs with host

## Key Features

### ✅ Replay Pause Until Swipe:
- Replay controllers have `waitForExternalStart = true`
- Ball and cars don't move until swipe completes
- Animation finishes → `EnableReplayStart()` called → Replay begins

### ✅ Host-Only Swipe Control:
- Client's swipe detector is disabled
- Only host can trigger the swipe
- Swipe event broadcasts to all clients
- All devices animate together

### ✅ Smooth Synchronization:
- Drift-based sync (only corrects when > 0.3s off)
- Local replay files play smoothly
- No ghosting or stuttering

### ✅ Visual Feedback:
- White panel with black text
- Billboard faces user
- Floating and rotating animation
- Disappears on swipe

## Troubleshooting

### Issue: Replay starts before swipe
**Solution**: Check that `Require Hand Swipe To Animate` is enabled in QRCodeSpawner

### Issue: Client can swipe
**Solution**: Verify SimpleReplaySync is properly detecting host and disabling client's swipe detector

### Issue: Prompt not visible
**Solution**: 
- Check TextMeshPro is installed
- Increase Prompt Size to (0.6, 0.15)
- Adjust Prompt Offset Y to be higher

### Issue: Replays not synchronized
**Solution**:
- Verify both devices on same network
- Check UDP broadcasts are working
- Increase Sync Threshold if too aggressive

### Issue: Both devices become HOST
**Solution**:
- Increase Discovery Time to 5 seconds
- Ensure WiFi doesn't have AP isolation
- Check Android logs for network errors

## Network Requirements

- ✅ Both devices on same local WiFi
- ✅ UDP port 7777 open
- ✅ No AP isolation on router
- ✅ INTERNET permission in AndroidManifest.xml

## Performance

- **Battery Impact**: Minimal (10Hz broadcast)
- **Network Usage**: ~1KB/sec
- **Sync Accuracy**: 100-300ms
- **Hand Tracking**: Minimal overhead

## Debug Logs to Monitor

### HOST:
```
[SimpleReplaySync] Became HOST - broadcasting replay state
[ArenaSwipeDetector] Left hand swipe detected! Speed: 0.75 m/s
[SimpleReplaySync] HOST: Swipe triggered, will broadcast to clients
[QR SPAWNER] Swipe detected! Starting animation
[QR SPAWNER] Replay enabled after animation
[SimpleReplaySync] HOST: Broadcasting - Ball: 5.23s, Playing: true, Swipe: true
```

### CLIENT:
```
[SimpleReplaySync] Became CLIENT - following host
[SimpleReplaySync] CLIENT: Disabled swipe detector - only host can trigger
[SimpleReplaySync] CLIENT: Host triggered swipe, starting animation
[ArenaSwipeDetector] Network (from host) swipe detected!
[QR SPAWNER] Swipe detected! Starting animation
[QR SPAWNER] Replay enabled after animation
[SimpleReplaySync] CLIENT: Syncing to host time
```

## Summary

This complete system provides:
1. ✅ QR-based spatial alignment
2. ✅ Hand swipe interaction with visual feedback
3. ✅ Replay pause until swipe completes
4. ✅ Host-only control (client can't swipe)
5. ✅ Network-synchronized animation and replay
6. ✅ Smooth playback with drift correction
7. ✅ Automatic role detection (host/client)

Both users will see the exact same experience, with only the host able to trigger the start!

