#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 24 member(s).
class CDisplayAnimatedVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWindowMovedAcrossDisplays@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z
    void AddWindowMovedAcrossDisplays(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureMinimizedWindowListUpdated@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@_N@Z
    void EnsureMinimizedWindowListUpdated(CWindowData *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationComplete@CDisplayAnimatedVisual@@UEAAJI@Z
    virtual long OnAnimationComplete(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGlobalTimeUpdated@CDisplayAnimatedVisual@@UEAAJXZ
    virtual long OnGlobalTimeUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowDataDestroyed@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z
    void OnWindowDataDestroyed(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CDisplayAnimatedVisual@@QEAAJXZ
    long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z
    long Stop(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddInstructionsForBackgroundInNewVirtualScreen@CDisplayAnimatedVisual@@IEAAJXZ
    long AddInstructionsForBackgroundInNewVirtualScreen();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToRenderTargetRootVisualForDesktop@CDisplayAnimatedVisual@@IEAAJ_K@Z
    long AddToRenderTargetRootVisualForDesktop(uint64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDisplayAnimatedVisual@@IEAA@XZ
    CDisplayAnimatedVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z
    long CaptureAndAddVisual(uint64_t, tagRECT const &, tagRECT const &, CAnimatedTransitionVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@PEAPEAVCAnimatedTransitionVisual@@@Z
    long CaptureAndAddVisual(uint64_t, tagRECT const &, CAnimatedTransitionVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CapturePrimary@CDisplayAnimatedVisual@@IEAAJ_KPEAPEAVCAnimatedTransitionVisual@@@Z
    long CapturePrimary(uint64_t, CAnimatedTransitionVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClipIntersection@CDisplayAnimatedVisual@@KA?AUtagRECT@@AEBUD2D_RECT_U@@0AEBU2@W4DXGI_MODE_ROTATION@@@Z
    static tagRECT ClipIntersection(D2D_RECT_U const &, D2D_RECT_U const &, tagRECT const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ
    long RegisterGlobalTimeChangeNotification();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z
    long ScheduleAnimation(CAnimatedTransitionVisual *, IAnimationListener *, int, int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@@PEAPEAII@Z
    long UnregisterForAnimationCompleteNotification(IAnimationListener *, unsigned int * *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDisplayAnimatedVisual@@MEAA@XZ
    virtual ~CDisplayAnimatedVisual();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmitLastFrameTelemetry@CDisplayAnimatedVisual@@AEAAJXZ
    long EmitLastFrameTelemetry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ
    long EnsureGlobalTimeChangeNotificationRegistered();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeConfigData@CDisplayAnimatedVisual@@AEAAXXZ
    void InitializeConfigData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTelemetry@CDisplayAnimatedVisual@@AEAAXXZ
    void InitializeTelemetry();
};
