#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 5 member(s).
namespace WindowFrameLoggingTelemetry {
class StartDisplayCapture {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z
    void StartActivity(HMONITOR__*, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ
    ~StartDisplayCapture();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@StartDisplayCapture@WindowFrameLoggingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowFrameLoggingTelemetry
