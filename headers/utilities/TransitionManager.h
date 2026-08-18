#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 18 member(s).
namespace winrt::Udwm::Transitions {
class TransitionManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWorkAreaChangeTransitionRemoved@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z
    void EnsureWorkAreaChangeTransitionRemoved(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceUpdateScene@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ
    void ForceUpdateScene();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ
    static WindissectOpaque * GetCurrent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z
    void OnMoveResizeInitiatedFromWorkAreaChange(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowMoveSizeChanged@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z
    void OnWindowMoveSizeChanged(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z
    void PostTransition(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z
    void PreTransition(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreTransitionWithNativeWindow@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAVCTopLevelWindow3D@@W4ShellTransitionType@234@@Z
    long PreTransitionWithNativeWindow(CTopLevelWindow3D *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterTransitionBitmap@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAUHWND__@@AEBUtagRECT@@PEAX_K@Z
    long RegisterTransitionBitmap(HWND__*, tagRECT const &, void *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterTransitionHandler@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@AEBUITransition@234@@Z
    void RegisterTransitionHandler(int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SkipAnimationDelays@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ
    void SkipAnimationDelays();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopRotation@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ
    void StopRotation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAngle@TransitionManager@Transitions@Udwm@winrt@@QEAAXHH@Z
    void UpdateAngle(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRect@TransitionManager@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@4@W4ShellTransitionType@234@@Z
    void UpdateRect(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowMaximizeSnapCancel@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ
    void WindowMaximizeSnapCancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowMaximizeSnapPostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ
    void WindowMaximizeSnapPostTransition();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandler@TransitionManager@Transitions@Udwm@winrt@@AEAA?AUITransition@234@W4ShellTransitionType@234@@Z
    WindissectOpaque GetHandler(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TransitionManager@Transitions@Udwm@winrt@@AEAA@XZ
    TransitionManager();
};
} // namespace winrt::Udwm::Transitions
