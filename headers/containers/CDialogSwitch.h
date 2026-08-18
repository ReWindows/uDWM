#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 6 member(s).
class CDialogSwitch {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPVLTarget@CDialogSwitch@@UEAAHW4DWMTRANSITION_TARGET@@@Z
    virtual int GetPVLTarget(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoryboardInfo@CDialogSwitch@@UEAAPEBUStoryboardInfo@@XZ
    virtual StoryboardInfo const * GetStoryboardInfo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIndependent@CDialogSwitch@@UEAA_NXZ
    virtual bool IsIndependent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndTransitionRequest@CDialogSwitch@@UEAAJXZ
    virtual long OnEndTransitionRequest();
};
