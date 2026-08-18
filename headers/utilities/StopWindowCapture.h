#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
namespace WindowFrameLoggingTelemetry {
class StopWindowCapture {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z
    void StartActivity(unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StopWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ
    ~StopWindowCapture();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@StopWindowCapture@WindowFrameLoggingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowFrameLoggingTelemetry
