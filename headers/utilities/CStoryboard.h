#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 65 member(s).
class CStoryboard {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Abandon@CStoryboard@@QEAAXXZ
    void Abandon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Block@CStoryboard@@QEAAXXZ
    void Block();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanCoexist@CStoryboard@@SA_NPEAV1@0@Z
    static bool CanCoexist(CStoryboard *, CStoryboard *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CStoryboard@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAnimatingTarget@CStoryboard@@QEAAPEAVCAnimationComponent@@W4DWMTRANSITION_TARGET@@@Z
    CAnimationComponent * FindAnimatingTarget(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPVLTarget@CStoryboard@@UEAAHW4DWMTRANSITION_TARGET@@@Z
    virtual int GetPVLTarget(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialTargetInfo@CStoryboard@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z
    virtual int GetSpecialTargetInfo(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z
    static CWindowData * GetTaggedWindow(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeout@CStoryboard@@UEAAKXZ
    virtual unsigned long GetTimeout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GhostTargets@CStoryboard@@QEAAXW4DWMTRANSITION_TARGET@@@Z
    void GhostTargets(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z
    bool HasAnimatingOwnerWindow(CWindowData *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z
    bool HasAnimationComponent(HWND__*, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@CStoryboard@@UEAA_NXZ
    virtual bool IsEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIndependent@CStoryboard@@UEAA_NXZ
    virtual bool IsIndependent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRTL@CStoryboard@@SA_NXZ
    static bool IsRTL();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationComplete@CStoryboard@@UEAAJI@Z
    virtual long OnAnimationComplete(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationStart@CStoryboard@@UEAAJXZ
    virtual long OnAnimationStart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeginTransitionRequest@CStoryboard@@UEAAJXZ
    virtual long OnBeginTransitionRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ
    virtual long OnEndTransitionRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStoryboardTimeout@CStoryboard@@QEAAJXZ
    long OnStoryboardTimeout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransitionWindow@CStoryboard@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z
    virtual long OnTransitionWindow(CWindowData *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CStoryboard@@QEAAKXZ
    unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z
    static void ResizeToSnapshot(HWND__*, tagRECT const &, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ
    long ScheduleStartAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ
    long ScheduleStopAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleToRun@CStoryboard@@QEAAXXZ
    void ScheduleToRun();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompSyncHandle@CStoryboard@@UEAAXPEAX@Z
    virtual void SetCompSyncHandle(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z
    void SetParentStoryboard(CStoryboard *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStartTrigger@CStoryboard@@QEAAXPEAVCAnimationTriggerProxy@@@Z
    void SetStartTrigger(CAnimationTriggerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z
    static bool ShouldAnimateShowWindow(CWindowData const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldBlock@CStoryboard@@SA_NPEAV1@0@Z
    static bool ShouldBlock(CStoryboard *, CStoryboard *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldCancelLivePreview@CStoryboard@@UEAA_NXZ
    virtual bool ShouldCancelLivePreview();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseTransitionBitmap@CStoryboard@@UEAA_NXZ
    virtual bool ShouldUseTransitionBitmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseCommitHandle@CStoryboard@@UEAA_NXZ
    virtual bool UseCommitHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseDComposition@CStoryboard@@QEAA_NXZ
    bool UseDComposition();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStoryboard@@UEAA@XZ
    virtual ~CStoryboard();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CStoryboard@@IEAA@_N@Z
    CStoryboard(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CStoryboard@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z
    long _AddAnimationComponent(CAnimationComponent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Cleanup@CStoryboard@@IEAAXXZ
    void _Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponent@@@Z
    long _CreateAndAddAnimationComponent(CWindowData *, bool, int, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z
    long _CreateAndAddAnimationComponentControlReuse(CWindowData *, bool, int, tagRECT *, tagRECT *, int, bool, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddAnimationComponentWithRect@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2HPEAPEAVCAnimationComponent@@@Z
    long _CreateAndAddAnimationComponentWithRect(CWindowData *, bool, int, tagRECT *, tagRECT *, int, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAPEAVCAnimationComponent@@@Z
    long _CreateAndAddBitmapAnimationComponent(HWND__*, int, int, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z
    long _CreateAndAddDesktopAnimationComponent(CWindowData *, int, tagRECT const &, bool, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAPEAVCAnimationComponent@@3@Z
    long _CreateAndAddGutterAnimationComponentsForRect(HWND__*, int, int, tagRECT const *, tagRECT const *, CAnimationComponent * *, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddNullComponent@CStoryboard@@IEAAJHPEAPEAVCAnimationComponent@@@Z
    long _CreateAndAddNullComponent(int, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z
    long _CreateAndAddNullComponentWithWindow(CWindowData *, int, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z
    long _CreateAndAddNullComponentWithWindowScreen(CWindowData *, int, bool, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsurePriority@CStoryboard@@IEAAXXZ
    void _EnsurePriority();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z
    long _EnumerateWindows(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z
    static void _GetIdealRects(CWindowData *, tagRECT const *, tagRECT *, tagRECT * *, tagRECT *, tagRECT * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIdealWindowRect@CStoryboard@@KAXPEAVCWindowData@@_NPEBUtagRECT@@PEAU3@PEAPEAU3@@Z
    static void _GetIdealWindowRect(CWindowData *, bool, tagRECT const *, tagRECT *, tagRECT * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWPT@CStoryboard@@IEAAPEAVCWindowPropertyTracker@@XZ
    CWindowPropertyTracker * _GetWPT();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z
    bool _HasUsableBitmapResource(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z
    bool _InvokeWindowEnumCallback(CWindowData *, int, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ
    void _LogStoryboardEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z
    void _NotifyStoryboardState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyStoryboardTimeout@CStoryboard@@IEAAXXZ
    void _NotifyStoryboardTimeout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z
    long _RemoveAnimationComponent(CAnimationComponent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z
    long _StopTrackingWindow(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WillWindowEndCloaked@CStoryboard@@KA_NPEBVCWindowData@@@Z
    static bool _WillWindowEndCloaked(CWindowData const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WindowEnumCallback@CStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z
    virtual bool _WindowEnumCallback(CWindowData *, int, long *);
};
