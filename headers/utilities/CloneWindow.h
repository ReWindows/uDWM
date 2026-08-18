#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
namespace WindowFrameLoggingTelemetry {
class CloneWindow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ
    ~CloneWindow();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CloneWindow@WindowFrameLoggingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowFrameLoggingTelemetry
