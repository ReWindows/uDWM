#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 8 member(s).
class CSlideOut {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSlideOut@@QEAA@XZ
    CSlideOut();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CSlideOut@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPVLTarget@CSlideOut@@UEAAHW4DWMTRANSITION_TARGET@@@Z
    virtual int GetPVLTarget(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialTargetInfo@CSlideOut@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z
    virtual int GetSpecialTargetInfo(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoryboardInfo@CSlideOut@@UEAAPEBUStoryboardInfo@@XZ
    virtual StoryboardInfo const * GetStoryboardInfo();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z
    virtual bool _WindowEnumCallback(CWindowData *, int, long *);
};
