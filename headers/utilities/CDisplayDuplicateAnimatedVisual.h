#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 13 member(s).
class CDisplayDuplicateAnimatedVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDisplayDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z
    static long Create(CDisplayDuplicateAnimatedVisual * *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDisplayDuplicateAnimatedVisual@@IEAA@XZ
    CDisplayDuplicateAnimatedVisual();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDisplayDuplicateAnimatedVisual@@MEAA@XZ
    virtual ~CDisplayDuplicateAnimatedVisual();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureAndScheduleExitAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ
    long CaptureAndScheduleExitAnimation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationScenarioGuid@CDisplayDuplicateAnimatedVisual@@EEBA?AU_GUID@@XZ
    virtual _GUID GetAnimationScenarioGuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTotalDuration@CDisplayDuplicateAnimatedVisual@@EEBAJPEAI@Z
    virtual long GetTotalDuration(unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationCompleteImpl@CDisplayDuplicateAnimatedVisual@@EEAAJI@Z
    virtual long OnAnimationCompleteImpl(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGlobalTimeUpdatedImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ
    virtual long OnGlobalTimeUpdatedImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupDelayBeforeEntranceAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ
    long SetupDelayBeforeEntranceAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ
    virtual long StartImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ
    virtual long StopImpl();
};
