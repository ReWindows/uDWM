#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 216 member(s).
class CWindowList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long AccentPolicyChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long ActivationChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z
    long AddProjectedShadowCaster(HWND__*, void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long AlphaChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BlurBehindChange@CWindowList@@UEAAJPEAUIDwmWindow@@PEBU_DWM_BLURBEHIND@@@Z
    virtual long BlurBehindChange(IDwmWindow *, _DWM_BLURBEHIND const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z
    long BringDesktopToFront(CContainerVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringDesktopToFront@CWindowList@@QEAAJ_K@Z
    long BringDesktopToFront(uint64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWindowList@@QEAA@XZ
    CWindowList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureDesktop@CWindowList@@UEAAJHHHH_KW4DXGI_FORMAT@@PEAPEAX@Z
    virtual long CaptureDesktop(int, int, int, int, uint64_t, int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureWindow@CWindowList@@UEAAJPEAUIDwmWindow@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z
    virtual long CaptureWindow(IDwmWindow *, float, int, int, int, int, uint64_t, int *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeCursorSynchronization@CWindowList@@QEAAJW4CursorSynchronization@@@Z
    long ChangeCursorSynchronization(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long ChildContentChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupThemeStatics@CWindowList@@QEAAXXZ
    void CleanupThemeStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllSnapshotRepresentations@CWindowList@@QEAAJXZ
    long ClearAllSnapshotRepresentations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long ClientGlassChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long ClientMarginsChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long ClipChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z
    virtual long CloakChange(IDwmWindow *, IDwmWindow *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long ContentProtectionChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCursorVisual@CWindowList@@QEAAJXZ
    long CreateCursorVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z
    void CreateOrDestroyDesktopWindowReplacementForDesktops(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long CreateSprite(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long CreateWindow(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z
    virtual long CreateWindowTarget(IDwmWindow *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z
    virtual long DesktopThumbnailChange(IDwmWindow *, tagRECT, tagRECT, unsigned char, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyPendingSprites@CWindowList@@QEAAXXZ
    void DestroyPendingSprites();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long DestroySprite(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long DestroyWindow(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long DestroyWindowTarget(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisallowPeekChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long DisallowPeekChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissCurrentTouchResizeHighlight@CWindowList@@QEAAXXZ
    void DismissCurrentTouchResizeHighlight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTabWindowData@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z
    CWindowData * FindTabWindowData(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z
    CThumbnailData * FindThumbnailData(_LARGE_INTEGER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z
    CWindowData * FindWindowDataByHwnd(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceActiveWindowAppearanceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long ForceActiveWindowAppearanceChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long ForceConnectClientNode(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long ForceDisconnectClientNode(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long ForceIconicRepresentationChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceUpdateScene@CWindowList@@QEAAJXZ
    long ForceUpdateScene();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long FrameMarginsChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long FreezeRepresentationChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long GDISurfaceChange(IDwmWindow *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z
    CGlobalLightSet * GetGlobalLightSetForDesktop(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLowestProjectedShadowCasterWindowForDesktop@CWindowList@@QEAAPEAVCTopLevelWindow@@_K@Z
    CTopLevelWindow * GetLowestProjectedShadowCasterWindowForDesktop(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z
    CMagnifierControl * GetMagnifierControlForDesktop(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumOwnees@CWindowList@@UEAAIPEAUIDwmWindow@@@Z
    virtual unsigned int GetNumOwnees(IDwmWindow *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z
    CContainerVisual * GetOverlayRootVisualForDesktop(uint64_t, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwneeAtIndex@CWindowList@@UEAAPEAUIDwmWindow@@PEAU2@I@Z
    virtual IDwmWindow * GetOwneeAtIndex(IDwmWindow *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwner@CWindowList@@UEAAPEAUIDwmWindow@@PEAU2@@Z
    virtual IDwmWindow * GetOwner(IDwmWindow *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z
    void GetPhysicalPtFromLogical(CWindowData *, tagRECT &, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z
    long GetProjectedShadowSceneForDesktop(uint64_t, bool, CProjectedShadowScene * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z
    CContainerVisual * GetRenderTargetRootVisualForDesktop(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z
    CRenderDataVisual * GetRootVisualForDesktop(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z
    HWND__* GetShellWindowForDesktop(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z
    void GetSyncedWindowData(IDwmWindow *, bool, CWindowData * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z
    void GetSyncedWindowDataByHwnd(HWND__*, CWindowData * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CWindowList@@UEAAPEBGPEAUIDwmWindow@@@Z
    virtual unsigned short const * GetText(IDwmWindow *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowBounds@CWindowList@@UEAAJPEAUHWND__@@PEAUtagRECT@@@Z
    virtual long GetWindowBounds(HWND__*, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z
    _LIST_ENTRY * GetWindowListForDesktop(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z
    _LIST_ENTRY * GetWindowListForDesktopCanFail(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GhostChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long GhostChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleScreenRotation@CWindowList@@QEAAJHH@Z
    long HandleScreenRotation(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long HasIconicBitmapChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CWindowList@@QEAAJXZ
    long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long IsCursorChange(IDwmWindow *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z
    virtual long IsInWindowMoveChange(IDwmWindow *, bool, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z
    virtual long IsInWindowResizeChange(IDwmWindow *, bool, unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRemoteAppMode@CWindowList@@UEAA_NXZ
    virtual bool IsRemoteAppMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsScreenRotating@CWindowList@@QEAA_NXZ
    bool IsScreenRotating();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LivePreviewExcludeChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long LivePreviewExcludeChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CWindowList@@UEAAXXZ
    virtual void Lock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long MonitorChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long MoveSize(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ
    long MoveTransitionAndTouchVisualToFront();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentBoundsChange@CWindowList@@QEAAXPEAVCWindowData@@@Z
    void OnContentBoundsChange(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisableMoveSizeFeedbackChanged@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long OnDisableMoveSizeFeedbackChanged(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGraphicsDeviceLost@CWindowList@@QEAAXXZ
    void OnGraphicsDeviceLost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z
    void OnPositionChange(CWindowData *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProcessDisconnected@CWindowList@@UEAAJK@Z
    virtual long OnProcessDisconnected(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z
    long OnSizeChange(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z
    void OnWindowDataDestroyed(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z
    virtual long OwnerChange(IDwmWindow *, IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z
    virtual long ProcessAsyncDwmMessage(int, void const *, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z
    virtual long ProcessBackChannelMessage(MIL_MESSAGE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z
    virtual long ProcessSyncDwmMessage(int, void *, unsigned int, bool, unsigned long, _REMOTE_PORT_VIEW const *, long *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z
    long QueueDestroySprite(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RAILModeChanged@CWindowList@@UEAAXXZ
    virtual void RAILModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ
    void RecreateDesktopWindowReplacementForDesktops();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z
    void RegisterAccentState(CWindowData *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForSoftwareCursorChangeNotification@CWindowList@@QEAAJPEAUISoftwareCursorChangeListener@@@Z
    long RegisterForSoftwareCursorChangeNotification(ISoftwareCursorChangeListener *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterIndirectSwapchainRenderTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX_NU_LUID@@@Z
    virtual long RegisterIndirectSwapchainRenderTargetForWindow(IDwmWindow *, void *, bool, _LUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@PEAX@Z
    virtual long RegisterSharedThumbnailVisual(HWND__*, HWND__*, int, int, _DWM_THUMBNAIL_PROPERTIES const &, _LARGE_INTEGER, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z
    virtual long RegisterSharedVirtualDesktopVisual(HWND__*, _LARGE_INTEGER, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z
    long ReleaseAcrylicSheetAndOwnerIfNotUsed(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long ReparentingFromDesktop(IDwmWindow *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlurredWallpaperSurface@CWindowList@@UEAAJPEAXPEBUtagRECT@@@Z
    virtual long SetBlurredWallpaperSurface(void *, tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCommitHandle@CWindowList@@QEAAJPEAX@Z
    long SetCommitHandle(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCornerStyle@CWindowList@@UEAAJPEAUIDwmWindow@@W4CORNER_STYLE@@@Z
    virtual long SetCornerStyle(IDwmWindow *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCursorDesktopVisibility@CWindowList@@QEAAJH@Z
    long SetCursorDesktopVisibility(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z
    virtual long SetExcludeFromDDA(IDwmWindow *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z
    virtual long SetHolographic(IDwmWindow *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPartColor@CWindowList@@UEAAJPEAUIDwmWindow@@PEBUNCPART_COLOR@@@Z
    virtual long SetPartColor(IDwmWindow *, NCPART_COLOR const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z
    virtual long SetPassiveUpdateMode(IDwmWindow *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRemoteAppPolicy@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWM_REMOTEAPP_POLICY@@@Z
    virtual long SetRemoteAppPolicy(IDwmWindow *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResizeCompSyncObject@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z
    virtual long SetResizeCompSyncObject(IDwmWindow *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSystemBackdropType@CWindowList@@UEAAJPEAUIDwmWindow@@W4SYSTEMBACKDROP_TYPE@@@Z
    virtual long SetSystemBackdropType(IDwmWindow *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUseDarkModeColors@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z
    virtual long SetUseDarkModeColors(IDwmWindow *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z
    long ShowHide(CWindowData *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long ShowHide(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z
    long ShowProjectionBorder(CWindowData *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAndSetDisplayAnimatedVisual@CWindowList@@QEAAJPEAVCDisplayAnimatedVisual@@@Z
    long StopAndSetDisplayAnimatedVisual(CDisplayAnimatedVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long StyleChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchDesktop@CWindowList@@UEAAJK_K@Z
    virtual long SwitchDesktop(unsigned long, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@PEAVCWindowData@@@Z
    void SyncWindowData(IDwmWindow *, CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long TextChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackCrossDisplaysMoveDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@HH@Z
    void TrackCrossDisplaysMoveDuringModeChange(CWindowData *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackMinimizedWindowDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@@Z
    void TrackMinimizedWindowDuringModeChange(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionsForceDisabledChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long TransitionsForceDisabledChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@CWindowList@@UEAAXXZ
    virtual void Unlock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z
    void UnregisterAccentState(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForSoftwareCursorChangeNotification@CWindowList@@QEAAXPEAUISoftwareCursorChangeListener@@@Z
    void UnregisterForSoftwareCursorChangeNotification(ISoftwareCursorChangeListener *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterIndirectSwapchainRenderTargetFromWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEA_N@Z
    virtual long UnregisterIndirectSwapchainRenderTargetFromWindow(IDwmWindow *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAccentState@CWindowList@@QEAAXXZ
    void UpdateAccentState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCursorPosition@CWindowList@@QEAAJAEBUtagPOINT@@@Z
    long UpdateCursorPosition(tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsLightTheme@CWindowList@@QEAAXXZ
    void UpdateIsLightTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScene@CWindowList@@UEAAJXZ
    virtual long UpdateScene();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z
    virtual long UpdateSharedVirtualDesktopVisual(unsigned long, MILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL const *, _REMOTE_PORT_VIEW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShellWindowFrameColorization@CWindowList@@QEAAJXZ
    long UpdateShellWindowFrameColorization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z
    long UpdateWindowScale(CWindowData *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long WindowMinimizing(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z
    virtual long WindowTransitionChange(IDwmWindow *, int, tagRECT const &, tagRECT const &, tagRECT const &, tagRECT const &, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z
    virtual long ZOrder(IDwmWindow *, IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZOrderAcrylicSheet@CWindowList@@QEAAJXZ
    long ZOrderAcrylicSheet();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZorderBandChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long ZorderBandChange(IDwmWindow *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWindowList@@UEAA@XZ
    virtual ~CWindowList();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z
    long AnimationChange(MILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ
    long ApplyWindowResizeStateTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z
    void CheckForMaximizedChange(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearTaggedWindowRect@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_CLEARTAGGEDWINDOWRECT@@@Z
    void ClearTaggedWindowRect(MILCMD_DWM_REDIRECTION_CLEARTAGGEDWINDOWRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ
    void CommitAndCloseResizeCompSyncObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertLargeIntegerToDwmWindowCloseEventToken@CWindowList@@AEAA?AUDWM_WINDOW_CLOSE_EVENT_TOKEN@@AEBT_LARGE_INTEGER@@@Z
    DWM_WINDOW_CLOSE_EVENT_TOKEN ConvertLargeIntegerToDwmWindowCloseEventToken(_LARGE_INTEGER const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CovertLargeIntegerToDwmCaptureToken@CWindowList@@AEAA?AUDWM_CAPTURE_TOKEN@@AEBT_LARGE_INTEGER@@@Z
    DWM_CAPTURE_TOKEN CovertLargeIntegerToDwmCaptureToken(_LARGE_INTEGER const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRootVisual@CWindowList@@AEAAJXZ
    long CreateRootVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUCDesktop@@@Z
    long CreateRootVisualForDesktop(CDesktop *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z
    long DesktopCreate(MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z
    void DesktopFree(MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z
    long DesktopSwitchImmediately(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyRootVisualForDesktop@CWindowList@@AEAAXPEAUCDesktop@@@Z
    void DestroyRootVisualForDesktop(CDesktop *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z
    long EndTransition(MILCMD_DWM_REDIRECTION_ENDTRANSITION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAcrylicSheet@CWindowList@@AEAAJXZ
    long EnsureAcrylicSheet();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z
    long EnsureTopLevelWindow(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWindowArrangementTransition@CWindowList@@AEAAJXZ
    long EnsureWindowArrangementTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z
    CVisual * FindPrecedingVisibleWindowVisual(_LIST_ENTRY *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z
    long GetCaptionButtonBounds(HWND__*, bool, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorizationParameters@CWindowList@@AEAAXPEAUMILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS@@@Z
    void GetColorizationParameters(MILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z
    long GetGlobalState(MILCMD_DWM_REDIRECTION_GETGLOBALSTATE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z
    long GetNcAdornmentInfoAttribute(HWND__*, NCADORNMENT_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z
    long GetTitleBarInfo(MILCMD_DWM_REDIRECTION_GETTITLEBARINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z
    long GetWindowAttribute(MILCMD_DWM_WINDOWATTRIBUTE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z
    long HitTestQuery(MILCMD_DWM_REDIRECTION_HITTESTQUERY *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z
    long IconChange(MILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z
    void ImmediateDestroySprite(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z
    void ImmediateDestroyWindow(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z
    long InsertIntoVisualTree(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@@Z
    long InvalidateIconicBitmaps(unsigned long, MILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z
    bool IsBaseThumbnailDestinationReachable(CWindowData *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSpecialViewWindow@CWindowList@@AEAA_NPEBVCWindowData@@@Z
    bool IsSpecialViewWindow(CWindowData const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowCapturable@CWindowList@@AEAAJPEAUHWND__@@PEA_N@Z
    long IsWindowCapturable(HWND__*, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z
    long MouseLeaveWindow(MILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z
    void OnClientGlassChange(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z
    void OnClientMarginsChange(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDwmShrinkMoveSizeWindowNotification@CWindowList@@AEAAJPEAUHWND__@@IUtagPOINT@@I@Z
    long OnDwmShrinkMoveSizeWindowNotification(HWND__*, unsigned int, tagPOINT, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z
    void OnGDISurfaceChange(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHostWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z
    void OnHostWindowDying(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxyWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z
    void OnProxyWindowDying(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxyWindowUpdate@CWindowList@@AEAAJPEAUHWND__@@0@Z
    long OnProxyWindowUpdate(HWND__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSnapPreviewInsertAfterNotification@CWindowList@@AEAAJPEAUHWND__@@0@Z
    long OnSnapPreviewInsertAfterNotification(HWND__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransparencyPolicyChanged@CWindowList@@AEAAJ_N@Z
    long OnTransparencyPolicyChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z
    long OnWindowArrangementContinue(MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowArrangementEnd@CWindowList@@AEAAJXZ
    long OnWindowArrangementEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z
    long OnWindowArrangementStart(MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z
    long PostActivateLivePreview(MILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z
    long ProcessDeviceStateChangeNotification(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z
    long QueryThumbnailSourceSize(unsigned long, MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z
    long QueryThumbnailType(unsigned long, MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z
    long QueryWindowThumbnailSourceSize(MILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z
    long ReevaluateAutoParenting(CWindowData *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z
    long RegisterThumbnail(unsigned long, MILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ
    long RegisterTransparencySystemPolicyChangeEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWindowCloseEvent@CWindowList@@AEAAJPEAUHWND__@@PEAXUDWM_WINDOW_CLOSE_EVENT_TOKEN@@@Z
    long RegisterWindowCloseEvent(HWND__*, void *, DWM_WINDOW_CLOSE_EVENT_TOKEN);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z
    long RotationModeChange(MILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ
    long RunAcrylicSheetEndArrangementAnimation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z
    long SetColorizationParameters(MILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconicBitmapBackgroundColor@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICDEFAULTCOLOR@@@Z
    long SetIconicBitmapBackgroundColor(MILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICDEFAULTCOLOR const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z
    long SetIconicLivePreviewBitmap(unsigned long, MILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP const *, _REMOTE_PORT_VIEW const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z
    long SetIconicThumbnail(unsigned long, MILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL const *, _REMOTE_PORT_VIEW const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z
    long SetOwner(CWindowData *, CWindowData *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTaggedWindowRect@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_SETTAGGEDWINDOWRECT@@@Z
    void SetTaggedWindowRect(MILCMD_DWM_REDIRECTION_SETTAGGEDWINDOWRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z
    long SetThemeAttributesAttribute(HWND__*, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z
    long SetWindowAttribute(MILCMD_DWM_WINDOWATTRIBUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z
    long SettingsChange(MILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z
    long ShellWindowChange(MILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z
    long StartTransition(MILCMD_DWM_REDIRECTION_STARTTRANSITION *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartupBegin@CWindowList@@AEAAJXZ
    long StartupBegin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartupEnd@CWindowList@@AEAAJXZ
    long StartupEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z
    long ToggleAutoParenting(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z
    long TransitionBitmap(MILCMD_DWM_REDIRECTION_TRANSITIONBITMAP const *, _REMOTE_PORT_VIEW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z
    long UnregisterThumbnail(unsigned long, MILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z
    long UnregisterThumbnail(CThumbnailData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterWindowCloseEvent@CWindowList@@AEAAJPEAUHWND__@@UDWM_WINDOW_CLOSE_EVENT_TOKEN@@@Z
    long UnregisterWindowCloseEvent(HWND__*, DWM_WINDOW_CLOSE_EVENT_TOKEN);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z
    long UpdateAccentBlurRect(MILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z
    long UpdateDesktopWindowReplacement(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES@@@Z
    long UpdateThumbnailProperties(unsigned long, MILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z
    long UpdateThumbnailsForNewWindow(CWindowData *);
};
