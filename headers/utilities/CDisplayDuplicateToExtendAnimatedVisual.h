#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 15 member(s).
class CDisplayDuplicateToExtendAnimatedVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDisplayDuplicateToExtendAnimatedVisual@@SAJPEAPEAV1@@Z
    static long Create(CDisplayDuplicateToExtendAnimatedVisual * *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDisplayDuplicateToExtendAnimatedVisual@@IEAA@XZ
    CDisplayDuplicateToExtendAnimatedVisual();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDisplayDuplicateToExtendAnimatedVisual@@MEAA@XZ
    virtual ~CDisplayDuplicateToExtendAnimatedVisual();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ
    long CaptureAndPositionToExtendedDisplay();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationScenarioGuid@CDisplayDuplicateToExtendAnimatedVisual@@EEBA?AU_GUID@@XZ
    virtual _GUID GetAnimationScenarioGuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTotalDuration@CDisplayDuplicateToExtendAnimatedVisual@@EEBAJPEAI@Z
    virtual long GetTotalDuration(unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationCompleteImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJI@Z
    virtual long OnAnimationCompleteImpl(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGlobalTimeUpdatedImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ
    virtual long OnGlobalTimeUpdatedImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ
    long ScheduleEntranceAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleExitAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ
    long ScheduleExitAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupDelayBeforeEntranceAnimation@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ
    long SetupDelayBeforeEntranceAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ
    virtual long StartImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ
    virtual long StopImpl();
};
