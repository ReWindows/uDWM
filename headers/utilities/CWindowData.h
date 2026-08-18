#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 55 member(s).
class CWindowData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSecondaryWindowRepresentationToPrimary@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@@Z
    long AddSecondaryWindowRepresentationToPrimary(CSecondaryWindowRepresentation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowSnapshot@CWindowData@@QEBA_NXZ
    bool AllowSnapshot() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWindowData@@QEAA@XZ
    CWindowData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z
    long ChangeSecondaryWindowRepresentation(CSecondaryWindowRepresentation *, CWindowRepresentation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ
    void CheckOwnedWindowEligibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ
    void CheckOwnedWindowEligibilityForOwner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearSnapshot@CWindowData@@QEAAX_N00@Z
    void ClearSnapshot(bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ
    long EnsureClientAreaVisualProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z
    void EstablishPixelAlignedScale(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceDisconnectClientNode@CWindowData@@QEAAXXZ
    void ForceDisconnectClientNode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z
    void GetIdealWindowRepresentation(bool, CWindowRepresentation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ
    int GetIdealWindowRepresentationType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ
    CWindowData * GetMDIOwner();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMetricsForCaptionBar@CWindowData@@QEBAHH@Z
    int GetMetricsForCaptionBar(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMetricsForCaptionBarEx@CWindowData@@QEBAHH_N@Z
    int GetMetricsForCaptionBarEx(int, bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNonClientAreaMargins@CWindowData@@QEBAXPEAU_MARGINS@@@Z
    void GetNonClientAreaMargins(_MARGINS *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNonClientCaptionFont@CWindowData@@QEAAXPEAUtagLOGFONTW@@@Z
    void GetNonClientCaptionFont(tagLOGFONTW *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOffsetToOwner@CWindowData@@QEAA?AUtagPOINT@@XZ
    tagPOINT GetOffsetToOwner();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRepresentationWindowData@CWindowData@@QEAAPEAV1@W4WindowRepresentationType@@@Z
    CWindowData * GetRepresentationWindowData(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowBand@CWindowData@@QEBA?AW4ZBID@@XZ
    int GetWindowBand() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z
    long GetWindowRestoreRect(tagRECT *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ
    bool HasNonTrivialRepresentation() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFrameExtendedIntoClientAreaLRB@CWindowData@@QEBA_NXZ
    bool IsFrameExtendedIntoClientAreaLRB() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGhostWindow@CWindowData@@QEBA_NPEAPEAUHWND__@@@Z
    bool IsGhostWindow(HWND__* *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImmersiveWindow@CWindowData@@QEBA_NXZ
    bool IsImmersiveWindow() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShellManaged@CWindowData@@QEBA_NXZ
    bool IsShellManaged() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSimpleClientArea@CWindowData@@QEAA_NXZ
    bool IsSimpleClientArea();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSplashScreen@CWindowData@@QEBA_NXZ
    bool IsSplashScreen() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ
    bool IsWindowVisibleAndUncloaked() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ
    long NotifyRepresentationChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z
    void NotifySWROfMarginOrSizeChange(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAccentPolicyChanged@CWindowData@@QEAAXXZ
    void OnAccentPolicyChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnColorizationUpdated@CWindowData@@QEAAXXZ
    void OnColorizationUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGraphicsDeviceLost@CWindowData@@QEAAXXZ
    void OnGraphicsDeviceLost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSystemBackdropUpdated@CWindowData@@QEAAXXZ
    void OnSystemBackdropUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityUpdated@CWindowData@@QEAAJXZ
    long OnVisibilityUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ
    long OnWindowSizeUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ
    long OnWindowStyleUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ
    bool PropertiesAllowAutoParenting() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z
    void RemoveSecondaryWindowRepresentation(CSecondaryWindowRepresentation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleForDpi@CWindowData@@QEBAII@Z
    unsigned int ScaleForDpi(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z
    void SetIconicBitmap(CBitmapSource *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTitle@CWindowData@@QEAAJPEAGH@Z
    long SetTitle(unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldBeAutoParented@CWindowData@@QEBA_NPEBU_LIST_ENTRY@@@Z
    bool ShouldBeAutoParented(_LIST_ENTRY const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldExcludeFromFilteredCaptures@CWindowData@@QEBA_NXZ
    bool ShouldExcludeFromFilteredCaptures() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SnapshotWindow@CWindowData@@QEAAJXZ
    long SnapshotWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z
    void UpdateOwnerLists(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WillEndAnimationCloaked@CWindowData@@QEBA_NXZ
    bool WillEndAnimationCloaked() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWindowData@@QEAA@XZ
    ~CWindowData();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z
    long AddSecondaryWindowRepresentation(CSecondaryWindowRepresentation *, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z
    void RemoveSecondaryWindowRepresentation(CSecondaryWindowRepresentation *, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ
    bool ShouldBeIncludedInOwnerSWR() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z
    void TrackOwnedWindows(bool);
};
