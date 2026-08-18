#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 8 member(s).
class CFadeOut {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFadeOut@@QEAA@XZ
    CFadeOut();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPVLTarget@CFadeOut@@UEAAHW4DWMTRANSITION_TARGET@@@Z
    virtual int GetPVLTarget(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialTargetInfo@CFadeOut@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z
    virtual int GetSpecialTargetInfo(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoryboardInfo@CFadeOut@@UEAAPEBUStoryboardInfo@@XZ
    virtual StoryboardInfo const * GetStoryboardInfo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIndependent@CFadeOut@@UEAA_NXZ
    virtual bool IsIndependent();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WindowEnumCallback@CFadeOut@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z
    virtual bool _WindowEnumCallback(CWindowData *, int, long *);
};
