#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 20 member(s).
namespace winrt::Udwm::Transitions::implementation {
class AnimatedTransitionVisualWrapper {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z
    AnimatedTransitionVisualWrapper(CTopLevelWindow3D *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginClip@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ
    WindissectOpaque BeginClip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginClip@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@@Z
    void BeginClip(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@@Z
    void BeginRect(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ
    WindissectOpaque BeginRect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndClip@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ
    WindissectOpaque EndClip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndClip@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@@Z
    void EndClip(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@@Z
    void EndRect(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ
    WindissectOpaque EndRect();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualProxyWeak@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UEAAPEAVCVisualProxy@@XZ
    virtual CVisualProxy * GetVisualProxyWeak();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualWeak@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UEAAPEAVCTopLevelWindow3D@@XZ
    virtual CTopLevelWindow3D * GetVisualWeak();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationComplete@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UEAAJI@Z
    virtual long OnAnimationComplete(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z
    void StartAnimation(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ
    void StopAnimation();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ
    virtual ~AnimatedTransitionVisualWrapper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ
    void EnsureSnapshotVisualIsAlive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromTree@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ
    void RemoveFromTree();
};
} // namespace winrt::Udwm::Transitions::implementation
