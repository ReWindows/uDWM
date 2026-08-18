#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 39 member(s).
class CContactManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CContactManager@@QEAA@XZ
    CContactManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z
    void ForceAtlasInitialize(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z
    int GetBoundedContactWidth(int, tagPOINT);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaximumContactWidth@CContactManager@@SAHUtagPOINT@@@Z
    static int GetMaximumContactWidth(tagPOINT);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z
    static int GetMinimumContactWidth(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z
    long HandleFlickFeedbackMessage(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z
    long HandleKeystateFeedbackMessage(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDesktopSwitch@CContactManager@@QEAAJ_K@Z
    long NotifyDesktopSwitch(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z
    long NotifyTouchDragVisualComplete(CTouchDragVisual const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z
    long OnContact(MILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z
    long OnFlick(MILCMD_DWM_REDIRECTION_RENDERFLICK const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z
    long OnGesture(MILCMD_DWM_REDIRECTION_RENDERGESTURE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z
    long OnMultiContact(MILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z
    long OnShowContact(MILCMD_DWM_REDIRECTION_SHOWCONTACT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z
    long OnTether(MILCMD_DWM_REDIRECTION_TETHERCONTACT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z
    long PostFlickFeedbackUpdate(unsigned int, int, tagPOINT const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z
    long PostKeystateFeedbackUpdate(unsigned int, unsigned long, tagPOINT const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ
    long RefreshPresentationModeSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CContactManager@@QEAAJXZ
    long Reset();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CContactManager@@QEAA@XZ
    ~CContactManager();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildFeedbackString@CContactManager@@IEAAJKPEAGI@Z
    long BuildFeedbackString(unsigned long, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z
    unsigned short * LoadFeedbackString(HINSTANCE__*, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z
    long ProcessPenContact(unsigned int, tagPOINT, tagRECT const *, int, unsigned long, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z
    long ProcessTouchContact(unsigned int, tagPOINT, tagRECT const *, int, unsigned long, uint64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z
    long AddToTouchNode(uint64_t, CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z
    void CancelStationaryAnimation(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@M@Z
    void CancelStationaryAnimationsInRadius(int, tagPOINT const *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z
    bool CheckShowContact(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ
    void CleanupFinishedAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z
    long EnsureTouchPressHoldForContact(int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z
    int FindStationaryAnimation(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadPenResources@CContactManager@@AEAAXXZ
    void LoadPenResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z
    long RemoveFromTouchNode(uint64_t, CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z
    long StartPenBarrelVisual(CPenContact *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartStationaryAnimation@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K@Z
    long StartStationaryAnimation(unsigned int, int, tagPOINT const *, tagRECT const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z
    long StartStationaryAnimationWithDelay(unsigned int, int, tagPOINT const *, tagRECT const *, uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z
    void StopAndRemoveFromRootNode(CTouchVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z
    void StopRemoveFromRootNodeAndReleaseNoNULL(CTouchVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveForcedPressHold@CContactManager@@AEAAXI@Z
    void _RemoveForcedPressHold(unsigned int);
};
