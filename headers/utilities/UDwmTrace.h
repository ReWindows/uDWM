#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 26 member(s).
class UDwmTrace {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@UDwmTrace@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResponsiveRotationAnimationTeardownComplete@UDwmTrace@@SAXXZ
    static void ResponsiveRotationAnimationTeardownComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResponsiveRotationBeginPreTransition@UDwmTrace@@SAXXZ
    static void ResponsiveRotationBeginPreTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResponsiveRotationBeginSchedulingFirstAnimation@UDwmTrace@@SAXXZ
    static void ResponsiveRotationBeginSchedulingFirstAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResponsiveRotationBeginSchedulingSecondAnimation@UDwmTrace@@SAXXZ
    static void ResponsiveRotationBeginSchedulingSecondAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResponsiveRotationFinishSchedulingFirstAnimation@UDwmTrace@@SAXXZ
    static void ResponsiveRotationFinishSchedulingFirstAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResponsiveRotationFinishSchedulingHalfAnimation@UDwmTrace@@SAXXZ
    static void ResponsiveRotationFinishSchedulingHalfAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResponsiveRotationFinishSchedulingSecondAnimation@UDwmTrace@@SAXXZ
    static void ResponsiveRotationFinishSchedulingSecondAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResponsiveRotationPreRotationVisualsCaptured@UDwmTrace@@SAXXZ
    static void ResponsiveRotationPreRotationVisualsCaptured();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResponsiveRotationUpdateAngle@UDwmTrace@@SAXXZ
    static void ResponsiveRotationUpdateAngle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TopLevelWindow3D_StartAnimationCompleted@UDwmTrace@@SAXXZ
    static void TopLevelWindow3D_StartAnimationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UDwmCreatingVirtualMonitor_@UDwmTrace@@QEAAXXZ
    void UDwmCreatingVirtualMonitor_();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UDwmDisplayIsPhysicalMonitorDevice_@UDwmTrace@@QEAAXXZ
    void UDwmDisplayIsPhysicalMonitorDevice_();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UDwmHolographicDeviceDriverDetected_@UDwmTrace@@QEAAXXZ
    void UDwmHolographicDeviceDriverDetected_();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UDwmHolographicDeviceDriverLost_@UDwmTrace@@QEAAXXZ
    void UDwmHolographicDeviceDriverLost_();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UDwmHolographicOnChanged_@UDwmTrace@@QEAAXXZ
    void UDwmHolographicOnChanged_();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UDwmRemovingVirtualMonitor_@UDwmTrace@@QEAAXXZ
    void UDwmRemovingVirtualMonitor_();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowMoveResizeCrossfadeAnimationScheduled@UDwmTrace@@SAXXZ
    static void WindowMoveResizeCrossfadeAnimationScheduled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowMoveResizeCrossfadeAnimationTeardownComplete@UDwmTrace@@SAXXZ
    static void WindowMoveResizeCrossfadeAnimationTeardownComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowMoveResizeCrossfadeBeginPostTransition@UDwmTrace@@SAXXZ
    static void WindowMoveResizeCrossfadeBeginPostTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowMoveResizeCrossfadeCaptureVisualsComplete@UDwmTrace@@SAXXZ
    static void WindowMoveResizeCrossfadeCaptureVisualsComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowSnapBeginPreTransition@UDwmTrace@@SAXXZ
    static void WindowSnapBeginPreTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowSnapSignalReceived@UDwmTrace@@SAXXZ
    static void WindowSnapSignalReceived();
};
