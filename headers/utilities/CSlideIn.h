#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 7 member(s).
class CSlideIn {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSlideIn@@QEAA@XZ
    CSlideIn();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPVLTarget@CSlideIn@@UEAAHW4DWMTRANSITION_TARGET@@@Z
    virtual int GetPVLTarget(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoryboardInfo@CSlideIn@@UEAAPEBUStoryboardInfo@@XZ
    virtual StoryboardInfo const * GetStoryboardInfo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIndependent@CSlideIn@@UEAA_NXZ
    virtual bool IsIndependent();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z
    virtual bool _WindowEnumCallback(CWindowData *, int, long *);
};
