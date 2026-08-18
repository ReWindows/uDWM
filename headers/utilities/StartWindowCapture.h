#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 5 member(s).
namespace WindowFrameLoggingTelemetry {
class StartWindowCapture {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z
    void StartActivity(HWND__*, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ
    ~StartWindowCapture();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@StartWindowCapture@WindowFrameLoggingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowFrameLoggingTelemetry
