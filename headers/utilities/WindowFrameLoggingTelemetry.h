#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 9 member(s).
class WindowFrameLoggingTelemetry {
public:
    class CloneWindow;
    class StartDisplayCapture;
    class StartWindowCapture;
    class StopDisplayCapture;
    class StopWindowCapture;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScreenDuplicationDisabled@WindowFrameLoggingTelemetry@@SAXXZ
    static void ScreenDuplicationDisabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ
    static void ScreenDuplicationEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ
    static void ScreenDuplicationFailedToGetDisplayConfig();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ
    static void ScreenDuplicationInvalidMonitor();
};
