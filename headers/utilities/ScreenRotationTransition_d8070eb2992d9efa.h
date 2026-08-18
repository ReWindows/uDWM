#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 28 member(s).
namespace winrt::Udwm::Transitions::Private::implementation {
class ScreenRotationTransition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ
    void Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationComplete@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UEAAJI@Z
    virtual long OnAnimationComplete(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGlobalTimeUpdated@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ
    void OnGlobalTimeUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ
    void PostTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@456@AEBUTransitionState@456@@Z
    void PreTransition(int, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ
    ScreenRotationTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAngle@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXHH@Z
    void UpdateAngle(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRect@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@6@@Z
    void UpdateRect(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScene@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ
    void UpdateScene();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ
    virtual ~ScreenRotationTransition();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CapturePreRotationVisuals@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ
    void CapturePreRotationVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Captured@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA_NXZ
    bool Captured();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DelayNextAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4RotationTimelineReason@23456@@Z
    void DelayNextAnimation(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ
    void DrawBackground();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndAnimationFrameStats@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ
    void EndAnimationFrameStats();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationID@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAK_N@Z
    unsigned long GetAnimationID(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleAnimationEnd@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ
    void HandleAnimationEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseCaptureVisual@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ
    void ReleaseCaptureVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseTransitionState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ
    void ReleaseTransitionState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotationState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4RotationState@Rotation@3456@@Z
    void SetRotationState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationFrameStats@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ
    void StartAnimationFrameStats();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ
    void StartFirstAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ
    void StartSecondAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ
    void StopAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterGlobalTimeChanged@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ
    void UnregisterGlobalTimeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateParentVisual@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ
    void UpdateParentVisual();
};
} // namespace winrt::Udwm::Transitions::Private::implementation
