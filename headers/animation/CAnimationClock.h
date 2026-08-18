#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 21 member(s).
class CAnimationClock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Begin@CAnimationClock@@QEAAJK@Z
    long Begin(unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAnimationClock@@QEAA@XZ
    CAnimationClock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?End@CAnimationClock@@QEAAJXZ
    long End();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z
    long GetCommitHandle(unsigned long, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTime@CAnimationClock@@QEAAJW4DWMPANIMATION_CLOCK_TIME@@PEAT_LARGE_INTEGER@@@Z
    long GetTime(int, _LARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToken@CAnimationClock@@QEAAJPEAPEAX@Z
    long GetToken(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z
    long Initialize(_GUID, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CAnimationClock@@QEAAJK@Z
    long Reset(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEventCallback@CAnimationClock@@QEAAJPEAUIAnimationClockEventListener@@@Z
    long SetEventCallback(IAnimationClockEventListener *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTime@CAnimationClock@@QEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z
    long SetTime(int, _LARGE_INTEGER const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAnimationClock@@UEAA@XZ
    virtual ~CAnimationClock();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTimerTick@CAnimationClock@@EEAAXXZ
    virtual void OnTimerTick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnTimerCallback@CAnimationClock@@AEAAXXZ
    void _OnTimerCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z
    long _SetState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z
    long _SetTime(int, _LARGE_INTEGER const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTimeToNextFrame@CAnimationClock@@AEAAJPEBT_LARGE_INTEGER@@PEAT2@@Z
    long _SetTimeToNextFrame(_LARGE_INTEGER const *, _LARGE_INTEGER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTimer@CAnimationClock@@AEAAJK@Z
    long _SetTimer(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TriggerAnimation@CAnimationClock@@AEAAJXZ
    long _TriggerAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z
    static int64_t s_GetElapsedMillsecondsFromTime(_LARGE_INTEGER const *);
};
