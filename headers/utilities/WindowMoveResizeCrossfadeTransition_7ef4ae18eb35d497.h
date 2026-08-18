#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 15 member(s).
namespace winrt::Udwm::Transitions::Private::implementation {
class WindowMoveResizeCrossfadeTransition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ
    void Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ
    void PostTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@456@AEBUTransitionState@456@@Z
    void PreTransition(int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SkipAnimationDelays@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ
    void SkipAnimationDelays();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAngle@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXHH@Z
    void UpdateAngle(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRect@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@6@@Z
    void UpdateRect(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScene@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ
    void UpdateScene();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ
    virtual ~WindowMoveResizeCrossfadeTransition();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustFinalRectToPreserveAspectRatio@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA?AURect@Foundation@Windows@6@AEBU7896@0@Z
    WindissectOpaque AdjustFinalRectToPreserveAspectRatio(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureVisuals@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4ShellTransitionType@456@@Z
    void CaptureVisuals(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteState@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ
    void CompleteState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPositionAnimationComplete@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ
    void OnPositionAnimationComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartCrossfadeAnimation@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ
    void StartCrossfadeAnimation();
};
} // namespace winrt::Udwm::Transitions::Private::implementation
