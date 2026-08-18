#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 12 member(s).
class CVirtualDesktopSwitch {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPVLTarget@CVirtualDesktopSwitch@@UEAAHW4DWMTRANSITION_TARGET@@@Z
    virtual int GetPVLTarget(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoryboardInfo@CVirtualDesktopSwitch@@UEAAPEBUStoryboardInfo@@XZ
    virtual StoryboardInfo const * GetStoryboardInfo();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVirtualDesktopSwitch@@UEAA@XZ
    virtual ~CVirtualDesktopSwitch();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CVirtualDesktopSwitch@@EEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z
    virtual long OnTransitionWindow(CWindowData *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z
    long _CreateMonitorSnapshot(CWindowData *, tagRECT, bool, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MonitorEnumCallback@CVirtualDesktopSwitch@@AEAAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@@Z
    int _MonitorEnumCallback(HMONITOR__*, HDC__*, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ
    void _ReleasePreviousDesktopComponents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z
    virtual bool _WindowEnumCallback(CWindowData *, int, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_MonitorEnumCallback@CVirtualDesktopSwitch@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z
    static int s_MonitorEnumCallback(HMONITOR__*, HDC__*, tagRECT *, int64_t);
};
