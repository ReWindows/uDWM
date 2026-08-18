#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 23 member(s).
class CIconicBitmapRegistry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z
    long BitmapReceived(CWindowData *, unsigned long, unsigned int, unsigned int, void *, uint64_t, unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CIconicBitmapRegistry@@QEAA@XZ
    CIconicBitmapRegistry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z
    void IconicRepresentationDestroyed(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CIconicBitmapRegistry@@QEAAJXZ
    long Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z
    long InvalidateBitmaps(CWindowData *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z
    long LivePreviewBitmapReceived(CWindowData *, unsigned long, unsigned int, unsigned int, tagPOINT const *, void const *, uint64_t, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ
    void OnLivePreviewDismissed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ
    long ProcessTick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z
    long RegisterIconicRepresentation(CWindowIconic *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z
    long WindowCanHaveIconicBitmapChanged(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z
    void WindowDestroyed(CWindowData *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CIconicBitmapRegistry@@UEAA@XZ
    virtual ~CIconicBitmapRegistry();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z
    void AcceptBitmap(CWindowData *, CBitmapSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z
    bool CanAcceptBitmap(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z
    void ClearBitmap(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindWindowDataIndex@CIconicBitmapRegistry@@AEAAIPEAVCWindowData@@@Z
    unsigned int FindWindowDataIndex(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z
    void RegisterBitmapInUse(CWindowData *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z
    void RegisterBitmapPending(CWindowData *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z
    long RequestBitmap(CWindowData *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIconicBitmapTimerEnabled@CIconicBitmapRegistry@@AEAAXXZ
    void UpdateIconicBitmapTimerEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z
    long _RegisterIconicRepresentation(CWindowData *, HWND__*, bool, bool, bool, bool, bool, int *);
};
