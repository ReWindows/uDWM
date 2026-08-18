#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 18 member(s).
namespace winrt::Udwm::Transitions::implementation {
class UserResizeVisual {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualWeak@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAPEAVCVisual@@XZ
    virtual CVisual * GetVisualWeak();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA?AU0Foundation@Windows@5@XZ
    WindissectOpaque Rect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z
    void Rect(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z
    virtual void SetBitmap(CBitmapSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate@345@@Z
    void StartHideAnimation(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartShowAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXXZ
    void StartShowAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Target@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAHXZ
    int Target();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z
    UserResizeVisual(CTopLevelWindow3D *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAA@XZ
    virtual ~UserResizeVisual();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ
    void AddIconPlate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationDuration@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAMXZ
    float AnimationDuration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMidpoint@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAA?AUtagPOINT@@UtagRECT@@UtagSIZE@@H@Z
    tagPOINT GetMidpoint(tagRECT, tagSIZE, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unload@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ
    void Unload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIconPosition@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ
    void UpdateIconPosition();
};
} // namespace winrt::Udwm::Transitions::implementation
