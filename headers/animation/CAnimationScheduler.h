#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 40 member(s).
class CAnimationScheduler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z
    long AbandonTransition(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ
    void AbortAllAnimations();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAnimationScheduler@@QEAA@XZ
    CAnimationScheduler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAnimatingTarget@CAnimationScheduler@@QEAAPEAVCAnimationComponent@@HW4DWMTRANSITION_TARGET@@@Z
    CAnimationComponent * FindAnimatingTarget(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAnimationStoryboard@CAnimationScheduler@@QEAAPEAVCStoryboard@@QEAUHWND__@@HK@Z
    CStoryboard * FindAnimationStoryboard(HWND__* const, int, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ
    int GetActiveStoryboardCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoryboardById@CAnimationScheduler@@QEAAJHPEAPEAVCStoryboard@@@Z
    long GetStoryboardById(int, CStoryboard * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GhostTransitionTargets@CAnimationScheduler@@QEAAXHW4DWMTRANSITION_TARGET@@@Z
    void GhostTransitionTargets(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z
    bool IsWindowCurrentlyAnimating(HWND__* const, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z
    virtual void OnAnimationClockChanged(_GUID, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z
    virtual long OnAnimationComplete(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeginTransitionRequest@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAU2@@Z
    long OnBeginTransitionRequest(int, _GUID const *, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z
    long OnBeginTransitionRequestFromStoryboard(int, _GUID const *, CStoryboard *, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndTransitionRequest@CAnimationScheduler@@QEAAJH@Z
    long OnEndTransitionRequest(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z
    long OnEndTransitionRequestFromStoryboard(int, CStoryboard *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowClientContentRectChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@PEBUtagRECT@@1PEA_N@Z
    long OnWindowClientContentRectChange(CWindowData const *, tagRECT const *, tagRECT const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z
    long OnWindowCloakChange(CWindowData const *, bool, bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowDestroy@CAnimationScheduler@@QEAAXPEBVCWindowData@@@Z
    void OnWindowDestroy(CWindowData const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z
    long OnWindowPositionChange(CWindowData const *, tagPOINT, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowSizeChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagSIZE@@PEA_N@Z
    long OnWindowSizeChange(CWindowData const *, tagSIZE, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z
    long OnWindowTransitionTargetChanged(CWindowData *, int, tagRECT const &, tagRECT const &, tagRECT const &, tagRECT const &, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z
    bool ShouldSnapshot(int, CStoryboard const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopWindowTrackingForStoryboard@CAnimationScheduler@@QEAAXPEBVCStoryboard@@@Z
    void StopWindowTrackingForStoryboard(CStoryboard const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAnimationScheduler@@QEAA@XZ
    ~CAnimationScheduler();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AreAllStoryboardsAbandoned@CAnimationScheduler@@AEAA_NXZ
    bool _AreAllStoryboardsAbandoned();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ
    void _CleanupTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHighestPriStoryboardNoRef@CAnimationScheduler@@AEAAPEAVCStoryboard@@W4StoryboardState@@@Z
    CStoryboard * _GetHighestPriStoryboardNoRef(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetStoryboardHighestPri@CAnimationScheduler@@AEAAHW4StoryboardState@@@Z
    int _GetStoryboardHighestPri(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LookupAnimationClockIdFromStoryboard@CAnimationScheduler@@AEAAJHPEBU_GUID@@PEAU2@PEAH@Z
    long _LookupAnimationClockIdFromStoryboard(int, _GUID const *, _GUID *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z
    long _OnBeginAnimationClock(CStoryboard *, _GUID const *, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnEndAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z
    long _OnEndAnimationClock(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ
    void _RecycleAbandonedStoryboards();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterAnimationNotification@CAnimationScheduler@@AEAAJXZ
    long _RegisterAnimationNotification();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z
    void _ScheduleBlockedStoryboards(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ
    long _ScheduleStartAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z
    long _ScheduleStoryboard(CStoryboard *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z
    long _ScheduleStoryboardsForAnimationClock(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z
    long _SetStoryboardTriggerForAnimationClock(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z
    bool _ShouldContinueStoryboardSetup(CStoryboard *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z
    bool _ShouldTrack(CWindowData const *, CStoryboard *, bool);
};
