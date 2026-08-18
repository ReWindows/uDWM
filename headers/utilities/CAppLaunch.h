#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 6 member(s).
class CAppLaunch {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPVLTarget@CAppLaunch@@UEAAHW4DWMTRANSITION_TARGET@@@Z
    virtual int GetPVLTarget(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialTargetInfo@CAppLaunch@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z
    virtual int GetSpecialTargetInfo(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoryboardInfo@CAppLaunch@@UEAAPEBUStoryboardInfo@@XZ
    virtual StoryboardInfo const * GetStoryboardInfo();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z
    virtual bool _WindowEnumCallback(CWindowData *, int, long *);
};
