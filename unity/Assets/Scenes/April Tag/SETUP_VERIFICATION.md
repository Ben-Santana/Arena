# Setup Verification & Error Resolution

## ✅ Issue Resolved: Assembly Definition Reference

### What Was the Problem?

The error messages you saw:
```
error CS0246: The type or namespace name 'Meta' could not be found
error CS0246: The type or namespace name 'MRUKTrackable' could not be found
```

**Root Cause:** The `Unity.XR.AprilTag.asmdef` file (which defines the assembly for your Scripts folder) didn't have a reference to the `Meta.XR.MRUtilityKit` package.

### What Was Fixed?

Updated `Assets/Scenes/April Tag/Unity.XR.AprilTag.asmdef` to include:
```json
"references": [
    ...(existing references),
    "Meta.XR.MRUtilityKit"  // <-- ADDED THIS
]
```

This allows your `QRCodeTracker.cs` script to access the MRUK classes like `MRUKTrackable`.

---

## 🔍 Verification Steps

### 1. Check Unity Console

After Unity recompiles (should happen automatically):
- ✅ **No red error messages** should appear
- ✅ The script `QRCodeTracker.cs` should compile successfully

### 2. Verify QRCodeTracker Appears in Inspector

1. Select any GameObject in your scene
2. Click "Add Component"
3. Type "QRCodeTracker"
4. **You should see it** in the search results

If you see it, the compilation was successful!

### 3. Verify Methods Appear in UnityEvent Dropdowns

This confirms the script is properly integrated:

1. Create a new empty GameObject (for testing)
2. Add `QRCodeTracker` component to it
3. Select the `[BuildingBlock] MR Utility Kit` GameObject
4. In Inspector, expand: MRUK > Scene Settings > Tracker Configuration
5. Look at "On Trackable Added" event
6. Click the `+` button
7. Drag the GameObject with QRCodeTracker into the object field
8. Click the dropdown (says "No Function")
9. **You should see:** `QRCodeTracker` > `OnTrackableAdded` in the list

If you see the methods, everything is working! ✅

---

## 🎯 How MRUK Building Block Works

The `QRCodeTracker` script follows the **same pattern** as `AnchorPrefabSpawner`:

### Key Similarities:

1. **Uses MRUK.Instance:**
   ```csharp
   // AnchorPrefabSpawner does this:
   MRUK.Instance.RegisterSceneLoadedCallback(...)
   MRUK.Instance.RoomCreatedEvent.AddListener(...)
   
   // QRCodeTracker works the same way, but for trackables
   ```

2. **Works with Passthrough:**
   - Both scripts work in passthrough mode
   - Both interact with the room scene data
   - Both spawn objects based on detected features

3. **Event-Driven Architecture:**
   - AnchorPrefabSpawner: Listens to room/anchor events
   - QRCodeTracker: Listens to trackable events (QR codes)

4. **Spawns Prefabs:**
   - AnchorPrefabSpawner: Spawns at anchor locations (walls, tables, etc.)
   - QRCodeTracker: Spawns at QR code locations

### Key Difference:

**AnchorPrefabSpawner:**
- Spawns objects on scene anchors (furniture, walls, etc.)
- Subscribes in code: `AddListener()` in `OnEnable()`

**QRCodeTracker:**
- Spawns objects on QR codes (trackables)
- Subscribes via Inspector: Manual event binding in Unity Editor

---

## 🏗️ Scene Setup Checklist

Ensure your scene has the MRUK Building Block properly configured:

### Required GameObjects:

- ✅ `[BuildingBlock] Camera Rig` (OVRCameraRig component)
- ✅ `[BuildingBlock] MR Utility Kit` (MRUK component)
- ✅ `[BuildingBlock] Passthrough` (for passthrough mode)

### MRUK Configuration:

1. **Select:** `[BuildingBlock] MR Utility Kit`
2. **Inspector → MRUK Component:**
   - ✅ **Enable World Lock:** Checked (keeps virtual objects aligned with real world)
   - ✅ **Scene Settings → Data Source:** Set to "Device" (to use real room data)
   - ✅ **Scene Settings → Load Scene On Startup:** Checked
   - ✅ **Scene Settings → Tracker Configuration → QR Code Tracking:** Checked

### Camera Rig Configuration:

1. **Select:** `[BuildingBlock] Camera Rig`
2. **Inspector → Quest Features:**
   - ✅ **Anchor Support:** Enabled
   - ✅ **Scene Support:** Required

---

## 🧪 Testing Without Device (Editor)

The QRCodeTracker won't work in the Unity Editor because:
- QR code detection requires device camera
- MRUK trackables are runtime features

**You MUST test on a Meta Quest device.**

---

## 🚀 Quick Start (After Verification)

Once verification passes, follow these 3 steps:

### 1. Add QRCodeTracker to Scene
- Select `[BuildingBlock] MR Utility Kit` (or create new empty GameObject)
- Add Component → QRCodeTracker
- Assign your prefab in "Prefab To Spawn" field

### 2. Bind Trackable Events
In MRUK component → Tracker Configuration:
- **On Trackable Added:** 
  - Click `+`
  - Drag GameObject with QRCodeTracker
  - Select: `QRCodeTracker.OnTrackableAdded`
  
- **On Trackable Removed:** 
  - Click `+`  
  - Drag GameObject with QRCodeTracker
  - Select: `QRCodeTracker.OnTrackableRemoved`

### 3. Build and Test
- File → Build Settings → Android
- Build and Run to Meta Quest
- Point at any QR code → Prefab should spawn!

---

## 🐛 Troubleshooting

| Issue | Solution |
|-------|----------|
| Compilation errors persist | File → Close Unity → Delete `Library` folder → Reopen Unity |
| Methods don't appear in dropdown | Ensure script compiled with no errors, restart Unity |
| QR codes not detected | Enable "QR Code Tracking" checkbox in MRUK component |
| Nothing spawns | Check event bindings AND prefab assignment |
| Prefab appears but wrong position | Verify QR code is well-lit and clearly visible |

---

## 📚 Additional Information

### Assembly Definition Files (asmdef)

Unity uses `.asmdef` files to organize code into assemblies. When scripts in one assembly need to use code from another assembly (like a package), you must add a reference.

**Before Fix:**
```json
"references": [
    // Only had XR Hands references
]
```

**After Fix:**
```json
"references": [
    // XR Hands references +
    "Meta.XR.MRUtilityKit"  // Now includes MRUK
]
```

### Why This Matters

- ✅ Your scripts can now `using Meta.XR.MRUtilityKit;`
- ✅ You can use `MRUKTrackable`, `MRUK`, `MRUKAnchor`, etc.
- ✅ The QRCodeTracker script compiles successfully

---

## ✨ You're Ready!

If verification passed, your scene is properly configured for QR code tracking! Follow the Quick Start section and test on your device.

**Remember:** The system detects ANY QR code - no specific codes needed!

Good luck! 🎉

