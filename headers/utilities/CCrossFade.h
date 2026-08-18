#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 8 member(s).
class CCrossFade {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCrossFade@@QEAA@XZ
    CCrossFade();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPVLTarget@CCrossFade@@UEAAHW4DWMTRANSITION_TARGET@@@Z
    virtual int GetPVLTarget(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialTargetInfo@CCrossFade@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z
    virtual int GetSpecialTargetInfo(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoryboardInfo@CCrossFade@@UEAAPEBUStoryboardInfo@@XZ
    virtual StoryboardInfo const * GetStoryboardInfo();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddCrossfadeAnimationComponent@CCrossFade@@MEAAJPEAVCWindowData@@_NPEAPEAVCAnimationComponent@@@Z
    virtual long _CreateAndAddCrossfadeAnimationComponent(CWindowData *, bool, CAnimationComponent * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WindowEnumCallback@CCrossFade@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z
    virtual bool _WindowEnumCallback(CWindowData *, int, long *);
};
