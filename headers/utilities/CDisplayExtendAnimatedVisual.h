#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 15 member(s).
class CDisplayExtendAnimatedVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDisplayExtendAnimatedVisual@@SAJPEAPEAV1@@Z
    static long Create(CDisplayExtendAnimatedVisual * *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDisplayExtendAnimatedVisual@@IEAA@XZ
    CDisplayExtendAnimatedVisual();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDisplayExtendAnimatedVisual@@MEAA@XZ
    virtual ~CDisplayExtendAnimatedVisual();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureAndScheduleExitAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ
    long CaptureAndScheduleExitAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureForExtendedDisplay@CDisplayExtendAnimatedVisual@@AEAAJXZ
    long CaptureForExtendedDisplay();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationScenarioGuid@CDisplayExtendAnimatedVisual@@EEBA?AU_GUID@@XZ
    virtual _GUID GetAnimationScenarioGuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTotalDuration@CDisplayExtendAnimatedVisual@@EEBAJPEAI@Z
    virtual long GetTotalDuration(unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationCompleteImpl@CDisplayExtendAnimatedVisual@@EEAAJI@Z
    virtual long OnAnimationCompleteImpl(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGlobalTimeUpdatedImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ
    virtual long OnGlobalTimeUpdatedImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleEntranceAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ
    long ScheduleEntranceAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupDelayBeforeEntranceAnimation@CDisplayExtendAnimatedVisual@@AEAAJXZ
    long SetupDelayBeforeEntranceAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ
    virtual long StartImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ
    virtual long StopImpl();
};
