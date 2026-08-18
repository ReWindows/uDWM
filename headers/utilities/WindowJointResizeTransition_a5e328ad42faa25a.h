#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 14 member(s).
namespace winrt::Udwm::Transitions::Private::implementation {
class WindowJointResizeTransition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ
    void Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ
    void PostTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@456@AEBUTransitionState@456@@Z
    void PreTransition(int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterBitmap@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAAXPEAUHWND__@@PEAVCBitmapSource@@@Z
    virtual void RegisterBitmap(HWND__*, CBitmapSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SkipAnimationDelays@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ
    void SkipAnimationDelays();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAngle@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXHH@Z
    void UpdateAngle(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRect@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@6@@Z
    void UpdateRect(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScene@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ
    void UpdateScene();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ
    WindowJointResizeTransition();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ
    virtual ~WindowJointResizeTransition();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ
    void Cleanup();
};
} // namespace winrt::Udwm::Transitions::Private::implementation
