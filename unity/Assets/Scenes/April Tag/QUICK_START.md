# QR Code Tracking - Quick Start

## ✅ What Was Implemented

1. **QRCodeTracker.cs** - Minimal script that spawns prefabs when QR codes are detected
2. **README_QR_SETUP.md** - Detailed setup and testing instructions
3. Complete documentation for troubleshooting and testing

## 🚀 Next Steps (In Unity Editor)

### 1. Enable QR Code Tracking
- Select `[BuildingBlock] MR Utility Kit` in Hierarchy
- Inspector > MRUK > Scene Settings > Tracker Configuration
- ✅ Check **QR Code Tracking**

### 2. Add QRCodeTracker Script
- Select `[BuildingBlock] MR Utility Kit` GameObject
- Inspector > Add Component > QRCodeTracker
- Assign your prefab to **Prefab To Spawn** field

### 3. Bind Events (CRITICAL!)
- In MRUK component > Tracker Configuration:
  - **On Trackable Added**: Click `+`, drag QRCodeTracker GameObject, select `OnTrackableAdded`
  - **On Trackable Removed**: Click `+`, drag QRCodeTracker GameObject, select `OnTrackableRemoved`

### 4. Save and Test
- Save scene (Ctrl+S)
- Build to Meta Quest device
- Point camera at any QR code
- Your prefab should appear!

## 📝 Key Features

- ✅ User can select custom prefab in Inspector
- ✅ Detects ANY QR code (no specific codes needed)
- ✅ Prefab automatically follows QR position/rotation
- ✅ Multiple QR codes supported
- ✅ Automatic cleanup when QR codes are lost
- ✅ Detailed logging for debugging

## 📚 Documentation

- **README_QR_SETUP.md** - Complete setup guide with screenshots descriptions
- **QRCodeTracker.cs** - Well-commented source code

## 🔧 Testing Tips

1. **Create Test Prefab (Optional):**
   - Create Cube > Scale to (0.1, 0.1, 0.1)
   - Add bright colored material
   - Drag to Prefabs folder
   - Assign to QRCodeTracker

2. **Use Any QR Code:**
   - Print from website
   - Display on phone/tablet
   - Use existing QR codes

3. **Check Console Logs:**
   - Look for `[QRCodeTracker]` messages
   - Confirm detection and removal events

## ⚠️ Common Issues

| Issue | Solution |
|-------|----------|
| Nothing spawns | Check event bindings and prefab assignment |
| Methods not in dropdown | Ensure script compiled without errors |
| QR not detected | Enable QR Code Tracking checkbox |
| Performance lag | Simplify prefab, limit spawned objects |

## 🎯 Success Criteria

When properly configured:
- ✅ QR code detection triggers prefab spawn
- ✅ Prefab appears at QR code location
- ✅ Prefab follows QR code movement
- ✅ Prefab disappears when QR code hidden
- ✅ Console shows detection logs

---

**Ready to implement?** Open `README_QR_SETUP.md` for step-by-step instructions!

