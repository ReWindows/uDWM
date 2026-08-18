#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 5 member(s).
class CInputView_SizeChangeOnly {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPVLTarget@CInputView_SizeChangeOnly@@UEAAHW4DWMTRANSITION_TARGET@@@Z
    virtual int GetPVLTarget(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialTargetInfo@CInputView_SizeChangeOnly@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z
    virtual int GetSpecialTargetInfo(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoryboardInfo@CInputView_SizeChangeOnly@@UEAAPEBUStoryboardInfo@@XZ
    virtual StoryboardInfo const * GetStoryboardInfo();
};
