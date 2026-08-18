#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 22 member(s).
namespace winrt::Udwm::Transitions::implementation {
class TopLevelWindow3DWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustSnapUIArrangementStartRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@AEBU6785@@Z
    WindissectOpaque AdjustSnapUIArrangementStartRect(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AUAnimationCompletedHandler@345@XZ
    WindissectOpaque AnimationComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnimationCompletedHandler@345@@Z
    void AnimationComplete(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelPendingAnimations@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ
    void CancelPendingAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearTaggedWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ
    void ClearTaggedWindowRect();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAbsoluteWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ
    WindissectOpaque GetAbsoluteWindowRect();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaximizeSnapStartRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ
    WindissectOpaque GetMaximizeSnapStartRect();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualProxyWeak@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAAPEAVCVisualProxy@@XZ
    virtual CVisualProxy * GetVisualProxyWeak();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualWeak@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAAPEAVCTopLevelWindow3D@@XZ
    virtual CTopLevelWindow3D * GetVisualWeak();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasTaggedWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA_NXZ
    bool HasTaggedWindowRect();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullscreen@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA_NXZ
    bool IsFullscreen();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInSnapUIArrangement@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA_NXZ
    bool IsInSnapUIArrangement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SkipRestoreFromMaximizeTransition@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA_NXZ
    bool SkipRestoreFromMaximizeTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SkipRestoreFromMaximizeTransition@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEB_N@Z
    void SkipRestoreFromMaximizeTransition(bool const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBW4ShellTransitionType@345@AEBURect@Foundation@Windows@5@@Z
    void StartAnimation(int const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ
    void StopAnimation();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z
    TopLevelWindow3DWrapper(CTopLevelWindow3D *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ
    virtual ~TopLevelWindow3DWrapper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertShellTransitionToAnimationType@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@CA?AW4WindowAnimationType@CTopLevelWindow3D@@W4ShellTransitionType@345@@Z
    static int ConvertShellTransitionToAnimationType(int);
};
} // namespace winrt::Udwm::Transitions::implementation
