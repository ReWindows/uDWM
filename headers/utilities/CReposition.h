#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 6 member(s).
class CReposition {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPVLTarget@CReposition@@UEAAHW4DWMTRANSITION_TARGET@@@Z
    virtual int GetPVLTarget(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoryboardInfo@CReposition@@UEAAPEBUStoryboardInfo@@XZ
    virtual StoryboardInfo const * GetStoryboardInfo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIndependent@CReposition@@UEAA_NXZ
    virtual bool IsIndependent();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WindowEnumCallback@CReposition@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z
    virtual bool _WindowEnumCallback(CWindowData *, int, long *);
};
