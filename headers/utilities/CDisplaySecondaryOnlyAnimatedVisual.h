#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 14 member(s).
class CDisplaySecondaryOnlyAnimatedVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDisplaySecondaryOnlyAnimatedVisual@@SAJPEAPEAV1@@Z
    static long Create(CDisplaySecondaryOnlyAnimatedVisual * *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDisplaySecondaryOnlyAnimatedVisual@@IEAA@XZ
    CDisplaySecondaryOnlyAnimatedVisual();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDisplaySecondaryOnlyAnimatedVisual@@MEAA@XZ
    virtual ~CDisplaySecondaryOnlyAnimatedVisual();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureForSecondaryDisplay@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ
    long CaptureForSecondaryDisplay();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationScenarioGuid@CDisplaySecondaryOnlyAnimatedVisual@@EEBA?AU_GUID@@XZ
    virtual _GUID GetAnimationScenarioGuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTotalDuration@CDisplaySecondaryOnlyAnimatedVisual@@EEBAJPEAI@Z
    virtual long GetTotalDuration(unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationCompleteImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJI@Z
    virtual long OnAnimationCompleteImpl(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ
    virtual long OnGlobalTimeUpdatedImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleEntranceAnimations@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ
    long ScheduleEntranceAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ
    long SetupDelayBeforeEntranceAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ
    virtual long StartImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ
    virtual long StopImpl();
};
