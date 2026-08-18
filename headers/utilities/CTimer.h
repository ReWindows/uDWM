#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 12 member(s).
class CTimer {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTimer@@QEAA@XZ
    CTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@CTimer@@QEAAJXZ
    long Cancel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSet@CTimer@@QEAA_NXZ
    bool IsSet();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTimerCallback@CTimer@@QEAAJPEAUITimerCallbackListener@@@Z
    long SetTimerCallback(ITimerCallbackListener *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CTimer@@QEAAJK@Z
    long Start(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTimer@@UEAA@XZ
    virtual ~CTimer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyThreadPoolTimer@CTimer@@AEAAX_N@Z
    void _DestroyThreadPoolTimer(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnTimerCallback@CTimer@@AEAAXXZ
    void _OnTimerCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnTimerTick@CTimer@@AEAAXXZ
    void _OnTimerTick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_TimerTickProc@CTimer@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z
    static void s_TimerTickProc(_TP_CALLBACK_INSTANCE *, void *, _TP_TIMER *);
};
