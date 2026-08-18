#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 16 member(s).
class CImmersiveState {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z
    static long Create(CImmersiveState * *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesktopWorkAreaAtIndex@CImmersiveState@@QEAAPEAUDesktopWorkAreaInfo@@I@Z
    DesktopWorkAreaInfo * GetDesktopWorkAreaAtIndex(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorDesktopWorkArea@CImmersiveState@@QEAA?AUtagRECT@@PEAUHMONITOR__@@@Z
    tagRECT GetMonitorDesktopWorkArea(HMONITOR__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z
    static void GetPillarBoxColor(_D3DCOLORVALUE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTopBackgroundWindow@CImmersiveState@@QEAAPEAVCWindowData@@XZ
    CWindowData * GetTopBackgroundWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImmersiveAppBand@CImmersiveState@@SA_NW4ZBID@@@Z
    static bool IsImmersiveAppBand(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLauncherShownAboveRect@CImmersiveState@@QEAA_NAEBUtagRECT@@@Z
    bool IsLauncherShownAboveRect(tagRECT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z
    bool IsLauncherShownAboveWindow(CWindowData const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLauncherVisible@CImmersiveState@@QEAA_NXZ
    bool IsLauncherVisible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMonitorDesktopWorkArea@CImmersiveState@@QEAAXPEAUHMONITOR__@@AEBUtagRECT@@@Z
    void SetMonitorDesktopWorkArea(HMONITOR__*, tagRECT const &);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImmersiveState@@AEAA@XZ
    CImmersiveState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CImmersiveState@@AEAAJ_K@Z
    long Initialize(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInfoIfTaskbar@CImmersiveState@@AEAA_NPEBVCWindowData@@@Z
    bool UpdateInfoIfTaskbar(CWindowData const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImmersiveState@@EEAA@XZ
    virtual ~CImmersiveState();
};
