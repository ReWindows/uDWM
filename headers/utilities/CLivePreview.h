#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 49 member(s).
class CLivePreview {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@CLivePreview@@QEAAJXZ
    long Activate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@CLivePreview@@QEAAJPEAPEAUHWND__@@IPEAU2@W4LIVEPREVIEW_TRIGGER@@IPEAUtagRECT@@@Z
    long Activate(HWND__* *, unsigned int, HWND__*, int, unsigned int, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLivePreview@@SAJPEAPEAV1@@Z
    static long Create(CLivePreview * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeActivate@CLivePreview@@QEAAJ_N@Z
    long DeActivate(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z
    static float GetAnimationDuration(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaqueLivePreview@CLivePreview@@QEAA_NPEAVCWindowData@@@Z
    bool IsOpaqueLivePreview(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAlphaChange@CLivePreview@@QEAAXPEBVCWindowData@@E@Z
    void OnAlphaChange(CWindowData const *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGlobalTimeUpdated@CLivePreview@@UEAAJXZ
    virtual long OnGlobalTimeUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNotifyRoundTripReply@CLivePreview@@QEAA_NI@Z
    bool OnNotifyRoundTripReply(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTitleBackgroundChange@CLivePreview@@QEAAXPEBVCWindowData@@K@Z
    void OnTitleBackgroundChange(CWindowData const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowDataDeleted@CLivePreview@@QEAAXPEBVCWindowData@@@Z
    void OnWindowDataDeleted(CWindowData const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z
    long OnWindowShowHide(CWindowData *, bool *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z
    void OnWindowTitleChange(CWindowData const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReActivate@CLivePreview@@QEAAJXZ
    long ReActivate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVisual@CLivePreview@@UEAAJXZ
    virtual long ValidateVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ
    virtual long ValidateVisualPostSubgraph();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLivePreview@@IEAA@XZ
    CLivePreview();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CLivePreview@@MEAAJXZ
    virtual long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLivePreview@@MEAA@XZ
    virtual ~CLivePreview();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ
    long _AnimateOpaqueVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ
    long _CleanupClonedVisualTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ
    void _ClearAnimatedVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ
    long _ClearAnimationOpaqueVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z
    long _CollectExcludedImmersiveWindows(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CollectWindows@CLivePreview@@AEAAJXZ
    long _CollectWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ContainsWindow@CLivePreview@@AEAA_NAEBV?$DynArray@PEAVCWindowData@@$0A@@@PEAUHWND__@@@Z
    bool _ContainsWindow(WindissectOpaque const &, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureResources@CLivePreview@@AEAAJXZ
    long _EnsureResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FadeInToNormal@CLivePreview@@AEAAJXZ
    long _FadeInToNormal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FadeOutToGlass@CLivePreview@@AEAAJXZ
    long _FadeOutToGlass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z
    CTopLevelWindow * _FindLivePreviewWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z
    int _GetCoverageStateOfWindow(CWindowData *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDesktopWorkArea@CLivePreview@@AEAA?AUtagRECT@@PEAVCWindowData@@@Z
    tagRECT _GetDesktopWorkArea(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z
    long _HideExistingVisuals(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z
    bool _IsEligibleForLivePreview(CWindowData const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z
    bool _IsInLivePreview(CWindowData const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z
    bool _IsTrulyMaximized(CWindowData const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ
    void _ReleasePerMonitorResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveLauncherClones@CLivePreview@@AEAAJXZ
    long _RemoveLauncherClones();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupOwneePreview@CLivePreview@@AEAAJPEBVCWindowData@@PEAUHWND__@@W4Enum@LivePreviewWindowState@@@Z
    long _SetupOwneePreview(CWindowData const *, HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z
    long _SetupWindowPreview(CWindowData *, HWND__*, bool, int, CVisual *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ
    void _ShowHideImmersiveBackground();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z
    long _StartAnimateOpaqueVisuals(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateResources@CLivePreview@@AEAAJXZ
    long _UpdateResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z
    long _UpdateResourcesForMonitor(LivePreviewResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z
    long _UpdateResourcesForMonitorHelper(CTopLevelWindow const *, LivePreviewResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetCoverageStateOfTwoRects@CLivePreview@@CA?AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z
    static int s_GetCoverageStateOfTwoRects(tagRECT const *, tagRECT const *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z
    static int s_UpdateResourcesForMonitor(HMONITOR__*, HDC__*, tagRECT *, int64_t);
};
