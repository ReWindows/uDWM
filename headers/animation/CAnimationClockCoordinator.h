#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 14 member(s).
class CAnimationClockCoordinator {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAnimationClockCoordinator@@QEAA@XZ
    CAnimationClockCoordinator();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z
    long GetAnimationClock(_GUID, CAnimationClock * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z
    long OnBeginAnimationClock(_GUID, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z
    long OnCreateAnimationClock(_GUID, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z
    long OnEndAnimationClock(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEAT_LARGE_INTEGER@@@Z
    long OnGetAnimationClockTime(_GUID, int, _LARGE_INTEGER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z
    long OnGetAnimationClockToken(_GUID, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z
    long OnGetSynchronizationCommitHandle(_GUID const &, unsigned long, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z
    long OnSetAnimationClockTime(_GUID, int, _LARGE_INTEGER const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEventCallback@CAnimationClockCoordinator@@QEAAJPEAUIAnimationClockEventListener@@@Z
    long SetEventCallback(IAnimationClockEventListener *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAnimationClockCoordinator@@QEAA@XZ
    ~CAnimationClockCoordinator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z
    virtual void OnAnimationClockChanged(_GUID, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ
    long _ClearExpiredAnimationClocks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsKnownClockId@CAnimationClockCoordinator@@AEAA_NU_GUID@@@Z
    bool _IsKnownClockId(_GUID);
};
