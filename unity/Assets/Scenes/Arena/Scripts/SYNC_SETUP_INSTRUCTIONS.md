# UDP Replay Synchronization Setup Instructions

## Overview
This system synchronizes replay playback between two Meta Quest headsets on the same local network using UDP broadcast.

## What Was Implemented

### New Files Created:
1. **SyncMessage.cs** - Data structure for network messages
2. **UDPBroadcaster.cs** - Sends replay state via UDP broadcast
3. **UDPReceiver.cs** - Listens for UDP broadcasts from other devices
4. **SimpleReplaySync.cs** - Coordinates synchronization between devices

### Modified Files:
1. **BallReplayController.cs** - Added sync methods (GetCurrentTime, SetReplayToTime, Pause/Resume)
2. **CarReplayController.cs** - Added sync methods (GetCurrentTime, SetReplayToTime, Pause/Resume)
3. **AndroidManifest.xml** - Added INTERNET permission

## Scene Setup Instructions

### Step 1: Add SimpleReplaySync to Arena
1. Open your Arena scene or Arena prefab
2. Find the GameObject that has BallReplayController and CarReplayController components
3. Add the **SimpleReplaySync** component to that same GameObject
4. In the Inspector, assign:
   - **Ball Controller** → Drag your BallReplayController reference
   - **Car Controller** → Drag your CarReplayController reference

### Step 2: Configure Settings (Optional)
The default settings should work, but you can adjust:
- **Broadcast Interval**: 0.1 seconds (10Hz) - how often host sends updates
- **Discovery Time**: 2.0 seconds - how long to wait before deciding host/client role

### Step 3: Build and Deploy
1. Build your project for Android (Meta Quest)
2. Deploy to both Quest devices
3. Make sure both devices are on the same WiFi network

## How It Works

### First Device (Host):
1. User scans QR code
2. Arena spawns with replay controllers
3. After 2 seconds with no broadcasts detected, becomes HOST
4. Starts broadcasting replay time every 100ms
5. Replay plays normally

### Second Device (Client):
1. User scans same QR code
2. Arena spawns with replay controllers
3. Detects broadcasts from host, becomes CLIENT
4. Continuously syncs replay position to match host
5. If host disconnects (no signal for 1 second), pauses replay
6. When host reconnects, resumes from current position

## Testing

### Test Scenario 1: Basic Sync
1. Device A: Scan QR code (wait 2 seconds, should log "Became HOST")
2. Device B: Scan same QR code (should log "Became CLIENT")
3. Verify both devices show synchronized replay
4. Check console logs for sync messages

### Test Scenario 2: Host Disconnect
1. With both devices running
2. Device A: Remove headset or close app
3. Device B: Should pause after 1 second timeout
4. Device A: Put headset back on or restart app
5. Device B: Should resume playback

### Test Scenario 3: Client Joins Mid-Replay
1. Device A: Start first, replay is already playing
2. Device B: Scan QR code 10 seconds later
3. Device B: Should jump to current replay position and sync

## Debug Information

Check Unity console logs for these messages:
- `[SimpleReplaySync] Started - waiting to determine host/client role`
- `[SimpleReplaySync] Became HOST - broadcasting replay state`
- `[SimpleReplaySync] Became CLIENT - following host`
- `[SimpleReplaySync] CLIENT: Syncing to host time - Ball: X.XXs, Car: X.XXs`
- `[SimpleReplaySync] CLIENT: Host timeout detected, pausing replay`

## Troubleshooting

### Problem: Both devices become HOST
**Solution**: Ensure both devices are on same WiFi network and can receive UDP broadcasts. Some networks block UDP broadcast traffic.

### Problem: Client doesn't sync
**Solution**: 
- Check that SimpleReplaySync has references to both controllers
- Verify INTERNET permission in AndroidManifest.xml
- Check firewall settings on network

### Problem: Replay is choppy on client
**Solution**: This is normal for MVP. Sync accuracy is ~100-200ms. For smoother sync, reduce broadcastInterval to 0.05 (20Hz) but this uses more battery.

### Problem: Client doesn't pause when host disconnects
**Solution**: Check timeout settings in UDPReceiver (default 1 second). Increase if needed.

## Network Requirements

- Both devices must be on same local network (WiFi)
- Network must allow UDP broadcast on port 7777
- No internet connection required (local network only)

## Performance Notes

- Battery impact: Minimal (~10Hz broadcast rate)
- Network bandwidth: ~100 bytes per message × 10/sec = ~1KB/sec
- Sync accuracy: 100-200ms (acceptable for demo)
- No lag compensation implemented (MVP)

## Future Improvements (Not in MVP)

- UI controls for manual pause/play
- Timeline scrubbing
- Better interpolation for smoother sync
- Support for more than 2 devices
- QR code-based automatic pairing
- Reconnection handling
- Network quality indicators

