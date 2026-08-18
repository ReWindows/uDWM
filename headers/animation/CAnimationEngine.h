#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 27 member(s).
class CAnimationEngine {
public:
    class CTransitionVariable;
    class CTransitionVisual;
    class CTransitionVisualSet;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAnimationEngine@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CAnimationEngine@@QEAAXXZ
    void Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z
    static long CreateInstance(CAnimationEngine * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAnimationEngine@@QEAAJXZ
    long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIdle@CAnimationEngine@@QEAA_NXZ
    bool IsIdle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStoryboardStatusChanged@CAnimationEngine@@UEAAJPEAUIUIAnimationStoryboard2@@W4__MIDL___MIDL_itf_UIAnimation_0000_0002_0001@@1@Z
    virtual long OnStoryboardStatusChanged(IUIAnimationStoryboard2*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStoryboardUpdated@CAnimationEngine@@UEAAJPEAUIUIAnimationStoryboard2@@@Z
    virtual long OnStoryboardUpdated(IUIAnimationStoryboard2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z
    long OnTick(double, bool *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAnimationEngine@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z
    long RegisterForAnimationCompleteNotification(IAnimationListener *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAnimationEngine@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z
    long ScheduleStartAnimation(int, WindissectOpaque const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z
    long ScheduleStartAnimation(int, IAnimatedVisual * *, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z
    long ScheduleStopAnimation(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z
    long UnregisterForAnimationCompleteNotification(IAnimationListener *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z
    long AddToStoryboard(IUIAnimationStoryboard2*, unsigned int, unsigned int, int, double, double, double *, double *, unsigned int, TA_TIMINGFUNCTION *, int, double *, double *, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAnimationEngine@@AEAA@XZ
    CAnimationEngine();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupAnimation@CAnimationEngine@@AEAAJI@Z
    long CleanupAnimation(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAnimationTransition@CAnimationEngine@@AEAAJIPEAUTA_TIMINGFUNCTION@@NPEANIPEAPEAUIUIAnimationTransition2@@@Z
    long CreateAnimationTransition(unsigned int, TA_TIMINGFUNCTION *, double, double *, unsigned int, IUIAnimationTransition2* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z
    int GetTransitionVisualSetIndex(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyAnimationCompleteAndCleanup@CAnimationEngine@@AEAAJI@Z
    long NotifyAnimationCompleteAndCleanup(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z
    long NotifyAnimationCompleteAndCleanupByIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z
    long SetupStoryboard(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimations@CAnimationEngine@@AEAAJXZ
    long StartAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimations@CAnimationEngine@@AEAAJXZ
    long StopAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z
    void _CalculateStaggerDelay(void *, int, int, unsigned int, double *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAnimationEngine@@AEAA@XZ
    ~CAnimationEngine();
};
