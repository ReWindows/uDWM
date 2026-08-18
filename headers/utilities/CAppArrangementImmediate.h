#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 11 member(s).
class CAppArrangementImmediate {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupingTarget@CAppArrangementImmediate@@UEAA?AW4DWMTRANSITION_TARGET@@W42@@Z
    virtual int GetGroupingTarget(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPVLTarget@CAppArrangementImmediate@@UEAAHW4DWMTRANSITION_TARGET@@@Z
    virtual int GetPVLTarget(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialTargetInfo@CAppArrangementImmediate@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z
    virtual int GetSpecialTargetInfo(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoryboardInfo@CAppArrangementImmediate@@UEAAPEBUStoryboardInfo@@XZ
    virtual StoryboardInfo const * GetStoryboardInfo();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppArrangementImmediate@@UEAA@XZ
    virtual ~CAppArrangementImmediate();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndTransitionRequest@CAppArrangementImmediate@@EEAAJXZ
    virtual long OnEndTransitionRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldCancelLivePreview@CAppArrangementImmediate@@EEAA_NXZ
    virtual bool ShouldCancelLivePreview();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z
    long _HandleThumbnailTag(CWindowData *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z
    virtual bool _WindowEnumCallback(CWindowData *, int, long *);
};
