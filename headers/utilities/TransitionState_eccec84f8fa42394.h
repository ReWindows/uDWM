#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 18 member(s).
namespace winrt::Udwm::Transitions::implementation {
class TransitionState {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireAnimationEngine@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAXPEAPEAVCAnimationEngine@@@Z
    virtual void AcquireAnimationEngine(CAnimationEngine * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationsEnabled@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ
    bool AnimationsEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ
    void Complete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSnapshotVisual@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AUAnimatedTransitionVisualWrapper@345@UTopLevelWindow3DWrapper@345@@Z
    WindissectOpaque CreateSnapshotVisual(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualScreenRect@TransitionState@implementation@Transitions@Udwm@winrt@@UEAA?AUtagRECT@@XZ
    virtual tagRECT GetVirtualScreenRect();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWallpaperViewExisted@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ
    bool IsWallpaperViewExisted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutTransitionVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCTopLevelWindow3D@@@Z
    virtual void PutTransitionVisual(CTopLevelWindow3D *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@5@XZ
    WindissectOpaque TransferJointResizeVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@_N@Z
    virtual long TransferScreenVisual(CGlobalTimeTrackVisual * *, CAnimatedTransitionVisual * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferScreenVisualLive@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@@Z
    virtual long TransferScreenVisualLive(CGlobalTimeTrackVisual * *, CAnimatedTransitionVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferTransitionVisualAndAnimationEngine@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AUTopLevelWindow3DWrapper@345@XZ
    WindissectOpaque TransferTransitionVisualAndAnimationEngine();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TransitionState@implementation@Transitions@Udwm@winrt@@QEAA@XZ
    TransitionState();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ
    virtual ~TransitionState();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInJointResize@TransitionState@implementation@Transitions@Udwm@winrt@@AEAA_NPEBVCWindowData@@@Z
    bool IsInJointResize(CWindowData const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVisibleWindow@TransitionState@implementation@Transitions@Udwm@winrt@@AEAA_NPEAVCWindowData@@@Z
    bool IsVisibleWindow(CWindowData *);
};
} // namespace winrt::Udwm::Transitions::implementation
