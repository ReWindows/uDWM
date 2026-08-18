#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 72 member(s).
class CTransitionVisualController {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z
    long AddAnimationComponent(CAnimationComponent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowSnapshotForSWR@CTransitionVisualController@@SA_NPEAUHWND__@@@Z
    static bool AllowSnapshotForSWR(HWND__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTransitionVisualController@@QEAA@XZ
    CTransitionVisualController();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupTransition@CTransitionVisualController@@QEAAJXZ
    long CleanupTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z
    long CreateAnimationComponent(CWindowData *, int, bool, int, CStoryboard *, tagRECT *, tagRECT *, int, bool, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z
    static long CreateBackground(tagRECT const *, CAccent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z
    long CreateBitmapAnimationComponent(HWND__*, int, int, CStoryboard *, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z
    long CreateDesktopAnimationComponent(CWindowData *, int, tagRECT const &, bool, bool, CStoryboard *, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z
    long CreateDesktopSnapshotComponent(int, tagRECT const &, CStoryboard *, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGutterAnimationComponentsForRect@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@4@Z
    long CreateGutterAnimationComponentsForRect(HWND__*, int, int, tagRECT const *, tagRECT const *, CStoryboard *, CAnimationComponent * *, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z
    long CreateNullAnimationComponentWithWindow(CWindowData *, int, CStoryboard *, bool, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z
    long DiscardStoredSnapshot(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z
    long EnsureSnapshot(CWindowData *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBitmapRects@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAUtagRECT@@1@Z
    long GetBitmapRects(HWND__*, tagRECT *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z
    static int GetClonableOwnedWindowCount(CWindowData *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGutterWidth@CTransitionVisualController@@QEAAJHPEAH@Z
    long GetGutterWidth(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimationComponent@@PEBUtagRECT@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAPEAVCVisual@@@Z
    long GetIconicThumbnailRepresentation(CWindowData *, CAnimationComponent *, tagRECT const *, WindissectOpaque, CVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLauncherWindow@CTransitionVisualController@@SAPEAUHWND__@@XZ
    static HWND__* GetLauncherWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorRectFromRect@CTransitionVisualController@@SAXPEBUtagRECT@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    static void GetMonitorRectFromRect(tagRECT const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z
    void GetOwnedInclusiveClipRect(CWindowData *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z
    static long GetPerspectiveValue(int, int, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSnapshot@@@Z
    long GetStoredSnapshotNoRef(HWND__*, CTransitionWindowSnapshot * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z
    long GetStoredSnapshotNoRefByIndex(int, CTransitionWindowSnapshot * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@PEBUtagRECT@@_NPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEA_NPEAUD2D_POINT_3F@@@Z
    long GetSurfaceFromExistingAnimationComponent(CAnimationComponent *, tagRECT const *, bool, CImageLegacyMilBrushProxy * *, CCachedVisualImageProxy * *, bool *, D2D_POINT_3F *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@_NPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUD2D_POINT_3F@@@Z
    long GetSurfaceFromThumbnail(CWindowData *, int, tagRECT const *, bool, CImageLegacyMilBrushProxy * *, CCachedVisualImageProxy * *, D2D_POINT_3F *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasUsableBitmapResource@CTransitionVisualController@@QEAA_NPEAUHWND__@@PEAVCStoryboard@@@Z
    bool HasUsableBitmapResource(HWND__*, CStoryboard *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z
    static bool HasVisibleStyle(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z
    long MorphForStoryboard(CStoryboard *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z
    virtual long OnAnimationComplete(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowMove@CTransitionVisualController@@QEAAXPEAVCWindowData@@@Z
    void OnWindowMove(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowVisibilityUpdated@CTransitionVisualController@@QEAAXPEAVCWindowData@@@Z
    void OnWindowVisibilityUpdated(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@22PEAX_K@Z
    long RegisterTransitionBitmap(HWND__*, int, tagRECT const *, tagRECT const *, tagRECT const *, void *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z
    long RemoveAnimationComponent(CAnimationComponent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z
    void RemoveTLWClone(CTopLevelWindow const *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z
    long RemoveTargetsForStoryboard(CStoryboard *, bool, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreWindow@CTransitionVisualController@@QEAAXPEAUHWND__@@@Z
    void RestoreWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z
    void RestoreWindow(CWindowData *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupZOrder@CTransitionVisualController@@QEAAJXZ
    long SetupZOrder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z
    static bool ShouldCloneWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopTrackingWindowAndRestoreVisual@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z
    long StopTrackingWindowAndRestoreVisual(CWindowData *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTransitionVisualController@@QEAA@XZ
    ~CTransitionVisualController();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z
    static void GetMonitorRectFromRectImpl(tagRECT const *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanMorph@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z
    bool _CanMorph(CAnimationComponent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z
    void _CleanupHighZOrderClone(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanupHighZOrderStaticWindowClones@CTransitionVisualController@@IEAAXXZ
    void _CleanupHighZOrderStaticWindowClones();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUFakeGutterInfo@1@PEAPEAVCAnimationComponent@@@Z
    long _CreateSingleGutterAnimationComponent(HWND__*, int, WindissectOpaque const *, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DiscardStoredSnapshotByIndex@CTransitionVisualController@@IEAAJH@Z
    long _DiscardStoredSnapshotByIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureAnimationComponentsWindowZOrder@CTransitionVisualController@@IEAAJXZ
    long _EnsureAnimationComponentsWindowZOrder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ
    long _EnsureStagingVisualRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ
    long _EnsureTransitionVisualRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FakeGutterAlreadyExists@CTransitionVisualController@@IEAA_NPEBUFakeGutterInfo@1@@Z
    bool _FakeGutterAlreadyExists(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z
    unsigned int _FindClone(CWindowData *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z
    int _GetSnapshotIndex(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z
    int _GetTransitionBitmapIndex(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z
    bool _IsAnimationComponentVisible(CAnimationComponent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z
    bool _IsOwnedByVisibleAC(CWindowData const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsOwnedByWindow@CTransitionVisualController@@IEAA_NPEBVCWindowData@@QEAUHWND__@@@Z
    bool _IsOwnedByWindow(CWindowData const *, HWND__* const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z
    static void _MoveOwnedWindowTreeOffscreen(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z
    static void _MoveWindowOffscreen(CTopLevelWindow *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z
    void _RecursivelyRenderOwnedWindows(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveSnapshotFromVisualTreeIfExists@CTransitionVisualController@@IEAAXPEAVCTransitionWindowSnapshot@@@Z
    void _RemoveSnapshotFromVisualTreeIfExists(CTransitionWindowSnapshot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z
    long _RestoreWindowVisual(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z
    long _SetAnimationClipRegion(CVisual *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z
    long _SetDesktopId(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ
    long _SetupHighZOrderStaticWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@@Z
    bool _ShouldMoveOriginalWindowOffscreenForClone(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StageClone@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_N2PEA_N@Z
    long _StageClone(CTopLevelWindow *, CContainerVisual *, bool, bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_NPEAVCVisual@@22PEA_N@Z
    long _StageCloneRelative(CTopLevelWindow *, CContainerVisual *, bool, CVisual *, bool, bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@HW4StagedBackgroundPolicy@1@@Z
    long _StageCloneWithOwnedWindows(CTopLevelWindow *, CContainerVisual *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z
    void _StopAnimations(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopAnimationsOfOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z
    void _StopAnimationsOfOwnedWindows(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z
    void _UpdateClipping(CAnimationComponent *);
};
