#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 13 member(s).
class CDisplaySecondaryOnlyToDuplicateAnimatedVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z
    static long Create(CDisplaySecondaryOnlyToDuplicateAnimatedVisual * *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@IEAA@XZ
    CDisplaySecondaryOnlyToDuplicateAnimatedVisual();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@MEAA@XZ
    virtual ~CDisplaySecondaryOnlyToDuplicateAnimatedVisual();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationScenarioGuid@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEBA?AU_GUID@@XZ
    virtual _GUID GetAnimationScenarioGuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTotalDuration@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEBAJPEAI@Z
    virtual long GetTotalDuration(unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationCompleteImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJI@Z
    virtual long OnAnimationCompleteImpl(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ
    virtual long OnGlobalTimeUpdatedImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleEntranceAnimation@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@AEAAJXZ
    long ScheduleEntranceAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@AEAAJXZ
    long SetupDelayBeforeEntranceAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ
    virtual long StartImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ
    virtual long StopImpl();
};
