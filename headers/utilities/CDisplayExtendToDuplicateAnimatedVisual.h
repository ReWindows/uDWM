#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 13 member(s).
class CDisplayExtendToDuplicateAnimatedVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDisplayExtendToDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z
    static long Create(CDisplayExtendToDuplicateAnimatedVisual * *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDisplayExtendToDuplicateAnimatedVisual@@IEAA@XZ
    CDisplayExtendToDuplicateAnimatedVisual();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDisplayExtendToDuplicateAnimatedVisual@@MEAA@XZ
    virtual ~CDisplayExtendToDuplicateAnimatedVisual();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationScenarioGuid@CDisplayExtendToDuplicateAnimatedVisual@@EEBA?AU_GUID@@XZ
    virtual _GUID GetAnimationScenarioGuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTotalDuration@CDisplayExtendToDuplicateAnimatedVisual@@EEBAJPEAI@Z
    virtual long GetTotalDuration(unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationCompleteImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJI@Z
    virtual long OnAnimationCompleteImpl(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGlobalTimeUpdatedImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ
    virtual long OnGlobalTimeUpdatedImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleEntranceAnimation@CDisplayExtendToDuplicateAnimatedVisual@@AEAAJXZ
    long ScheduleEntranceAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupDelayBeforeEntranceAnimation@CDisplayExtendToDuplicateAnimatedVisual@@AEAAJXZ
    long SetupDelayBeforeEntranceAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ
    virtual long StartImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ
    virtual long StopImpl();
};
