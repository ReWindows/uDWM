#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
namespace WindowFrameLoggingTelemetry {
class StopDisplayCapture {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z
    void StartActivity(unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ
    ~StopDisplayCapture();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@StopDisplayCapture@WindowFrameLoggingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowFrameLoggingTelemetry
