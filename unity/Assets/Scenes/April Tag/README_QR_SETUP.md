# QR Code Tracking Setup Guide

This guide explains how to configure your Unity scene to track QR codes and spawn custom prefabs at their location using Meta's MR Utility Kit (MRUK).

## Prerequisites

- Unity 2022.3.15f1 or later
- Meta MR Utility Kit v81.0.0 (already installed in this project)
- Meta Quest device for testing
- QR codes for testing (any QR code will work)

## Setup Instructions

### Step A: Enable QR Code Tracking in MRUK

1. **Open the Scene:**
   - Navigate to `Assets/Scenes/April Tag/`
   - Open `April Tag.unity`

2. **Select the MRUK GameObject:**
   - In the **Hierarchy** window, find and select `[BuildingBlock] MR Utility Kit`

3. **Enable QR Code Tracking:**
   - In the **Inspector** window, locate the **MRUK** script component
   - Expand the section: **Scene Settings** > **Tracker Configuration**
   - Find the checkbox labeled **QR Code Tracking**
   - ✅ **Check this box** to enable QR code tracking

### Step B: Configure Camera Rig (If Not Already Set)

1. **Select Camera Rig:**
   - In the **Hierarchy** window, find and select `[BuildingBlock] Camera Rig`

2. **Configure Quest Features:**
   - In the **Inspector** window, locate the **Quest Features** section
   - Set **Anchor Support** to: `Enabled`
   - Set **Scene Support** to: `Required`

3. **Enable Experimental Features (if needed):**
   - Look for an **Experimental** button in the Inspector
   - Click it and enable experimental features if prompted
   - Note: QR code tracking may require experimental features to be enabled

### Step C: Add and Configure QRCodeTracker Script

1. **Select Target GameObject:**
   - **Option A (Recommended):** Select the existing `[BuildingBlock] MR Utility Kit` GameObject
   - **Option B:** Create a new empty GameObject in the scene (right-click Hierarchy > Create Empty)

2. **Add the Script:**
   - In the **Inspector** window, click **Add Component**
   - Type `QRCodeTracker` in the search box
   - Select **QRCodeTracker** to add it

3. **Assign Your Prefab:**
   - In the **QRCodeTracker** component, you'll see a field: **Prefab To Spawn**
   - Drag your custom prefab from the Project window into this field
   - **Important:** If you don't assign a prefab, nothing will spawn when QR codes are detected!

### Step D: Bind Trackable Events (CRITICAL STEP)

This is the most important step - it connects the MRUK system to your QRCodeTracker script.

1. **Select MRUK GameObject:**
   - In the **Hierarchy**, select `[BuildingBlock] MR Utility Kit`

2. **Find Tracker Configuration Events:**
   - In the **Inspector**, scroll to the **MRUK** component
   - Expand: **Scene Settings** > **Tracker Configuration**
   - You should see two UnityEvent fields:
     - **On Trackable Added**
     - **On Trackable Removed**

3. **Bind On Trackable Added:**
   - Find the **On Trackable Added** event section
   - Click the **`+`** button at the bottom right to add a new event listener
   - You'll see a new row with:
     - An object field (drag GameObject here)
     - A dropdown menu (select function)
   - **Drag** the GameObject that has the `QRCodeTracker` script into the object field
   - Click the dropdown menu (initially says "No Function")
   - Navigate to: **QRCodeTracker** > **OnTrackableAdded (MRUKTrackable)**
   - Select it

4. **Bind On Trackable Removed:**
   - Find the **On Trackable Removed** event section
   - Click the **`+`** button to add a new event listener
   - **Drag** the GameObject with `QRCodeTracker` into the object field
   - Click the dropdown and select: **QRCodeTracker** > **OnTrackableRemoved (MRUKTrackable)**

5. **Verify Event Bindings:**
   - Both events should now show the QRCodeTracker GameObject and method names
   - If the methods don't appear in the dropdown, make sure the script compiled without errors

### Step E: Save Your Scene

- **File** > **Save** (or Ctrl+S / Cmd+S)
- Your scene is now configured for QR code tracking!

## Creating a Test Prefab (Optional)

If you want to create a simple test prefab to verify the system works:

1. **Create a Cube:**
   - Hierarchy > Right-click > **3D Object** > **Cube**
   - Name it `TestQRCube`

2. **Scale It Down:**
   - In the Inspector, set Transform > Scale to: `(0.1, 0.1, 0.1)`

3. **Add a Bright Material (Optional):**
   - Create a new Material: Project window > Right-click > **Create** > **Material**
   - Name it `QRTestMaterial`
   - Set the Albedo color to a bright color (e.g., cyan, green, or magenta)
   - Drag the material onto the cube in the Hierarchy

4. **Create the Prefab:**
   - Drag the `TestQRCube` GameObject from Hierarchy to `Assets/Scenes/April Tag/Prefabs/` folder
   - A prefab will be created
   - Delete the `TestQRCube` from the Hierarchy (the prefab is saved)

5. **Assign to QRCodeTracker:**
   - Select the GameObject with the QRCodeTracker script
   - Drag `TestQRCube.prefab` into the **Prefab To Spawn** field

## Testing on Device

### Build and Deploy

1. **Open Build Settings:**
   - **File** > **Build Settings**

2. **Select Android Platform:**
   - Select **Android** from the platform list
   - If not already selected, click **Switch Platform** (this may take a few minutes)

3. **Connect Your Device:**
   - Connect your Meta Quest device via USB-C cable
   - Enable Developer Mode on your Quest device

4. **Build and Run:**
   - Click **Build and Run**
   - Choose a location to save the APK
   - Unity will build and automatically deploy to your device

### Testing Steps

1. **Launch the App:**
   - The app should launch automatically after building
   - Put on your Meta Quest headset

2. **Test QR Code Detection:**
   - Hold a QR code in front of the device
   - Point the camera toward the QR code
   - **Expected:** Your prefab should appear at the QR code's location
   - **Check Console:** Should log "QR Code detected, spawning prefab"

3. **Test Position Tracking:**
   - Move the QR code around
   - Rotate the QR code
   - **Expected:** The prefab should follow the QR code's position and orientation

4. **Test Removal:**
   - Cover or hide the QR code
   - **Expected:** The prefab should disappear
   - **Check Console:** Should log "QR Code lost, removing prefab"

5. **Test Multiple QR Codes:**
   - Show multiple different QR codes simultaneously
   - **Expected:** One prefab spawns for each detected QR code

## Troubleshooting

### Nothing Spawns When QR Code is Detected

**Check these items:**
- ✅ Is **QR Code Tracking** checkbox enabled in MRUK component?
- ✅ Is a prefab assigned in the **Prefab To Spawn** field?
- ✅ Are the event bindings correct in Tracker Configuration?
- ✅ Does the GameObject with QRCodeTracker script exist in the scene?
- ✅ Check Unity Console for warning messages

### Methods Don't Appear in Inspector Dropdown

**Solutions:**
- Ensure `QRCodeTracker.cs` compiled without errors (check Console)
- Methods must be `public` to appear in Inspector
- Try restarting Unity Editor
- Rebuild the project

### QR Codes Not Detected

**Check:**
- QR code is clearly visible and well-lit
- QR code is not too small or too large
- Device has permission to access camera/spatial data
- Experimental features are enabled if required
- Try different QR codes (some work better than others)

### Performance Issues

**Tips:**
- QR code tracking has a performance cost
- Consider enabling/disabling tracking only when needed
- Keep prefabs simple for better performance
- Limit the number of spawned objects

### Prefab Appears But Position is Wrong

**Solutions:**
- Ensure prefab pivot point is centered
- Check that prefab is being instantiated as child of trackable.transform
- Review prefab's local position/rotation/scale
- Test with a simple cube first to verify tracking works

## How It Works

The QRCodeTracker system works through Unity's event-driven architecture:

1. **MRUK** continuously scans the environment for trackables (QR codes)
2. When a QR code is detected, MRUK triggers the **OnTrackableAdded** event
3. Your bound callback method receives the `MRUKTrackable` object
4. The script instantiates your prefab as a child of the trackable's transform
5. The prefab automatically follows the QR code because it's parented to it
6. When the QR code is lost, **OnTrackableRemoved** is triggered
7. The script destroys the spawned prefab and cleans up

## Next Steps

- Replace the test cube with your own custom prefabs
- Experiment with different prefab sizes and orientations
- Add more logic to the tracker script for your specific use case
- Consider adding UI to let users switch between different prefabs at runtime

## References

- [Meta MRUK v81 Documentation](https://developers.meta.com/horizon/reference/mruk/v81/)
- [MRUKTrackable Class Reference](https://developers.meta.com/horizon/reference/mruk/v81/class_meta_x_r_m_r_utility_kit_m_r_u_k_trackable)
- [QR Code Tracking Tutorial](https://blog.learnxr.io/xr-development/qr-code-and-keyboard-tracking-with-meta-mixed-reality-utility-kit)

---

**Need Help?** Check the Unity Console for log messages from QRCodeTracker - they start with `[QRCodeTracker]`.

