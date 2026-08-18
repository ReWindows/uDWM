#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 22 member(s).
class CImmersiveIconicBitmapRegistry {
public:
    class CImmersiveIconicResource;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z
    long BitmapReceived(CWindowData *, unsigned long, unsigned int, unsigned int, void *, uint64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImmersiveIconicBitmapRegistry@@QEAA@XZ
    CImmersiveIconicBitmapRegistry();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconicRepresentationTypeFromSize@CImmersiveIconicBitmapRegistry@@QEAA?AW4IconicRepresentationType@@HW4DEVICE_SCALE_FACTOR@@@Z
    int GetIconicRepresentationTypeFromSize(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4IconicRepresentationType@@@Z
    static int GetImmersiveIconContainerSize(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconicRepresentationDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z
    void IconicRepresentationDestroyed(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CImmersiveIconicBitmapRegistry@@QEAAJXZ
    long Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterIconicAnimatedVisual@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCIconicAnimatedVisual@@@Z
    long RegisterIconicAnimatedVisual(CIconicAnimatedVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@3@Z
    long RegisterIconicRepresentation(CImmersiveWindowIconic *, int, int, bool, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNotifyWindow@CImmersiveIconicBitmapRegistry@@QEAAXPEAUHWND__@@@Z
    void SetNotifyWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterIconicAnimatedVisual@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCIconicAnimatedVisual@@@Z
    long UnregisterIconicAnimatedVisual(CIconicAnimatedVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowCanHaveIconicBitmapChanged@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z
    long WindowCanHaveIconicBitmapChanged(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z
    void WindowDestroyed(CWindowData *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImmersiveIconicBitmapRegistry@@UEAA@XZ
    virtual ~CImmersiveIconicBitmapRegistry();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z
    void _AcceptBitmap(CWindowData *, CBitmapSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAUHWND__@@@Z
    void _ClearBitmap(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get100ScaleSize@CImmersiveIconicBitmapRegistry@@CAHW4DEVICE_SCALE_FACTOR@@H@Z
    static int _Get100ScaleSize(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z
    WindissectOpaque * _GetIconicResourceNoRef(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetImmersiveSize@CImmersiveIconicBitmapRegistry@@CAHW4DEVICE_SCALE_FACTOR@@H@Z
    static int _GetImmersiveSize(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@PEAUHWND__@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@4@Z
    long _RegisterIconicRepresentation(WindissectOpaque *, HWND__*, int, int, bool, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RequestBitmap@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@W4IconicRepresentationType@@W4DEVICE_SCALE_FACTOR@@_N@Z
    long _RequestBitmap(WindissectOpaque *, int, int, bool);
};
