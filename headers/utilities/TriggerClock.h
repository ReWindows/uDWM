#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
namespace AnimationClockLoggingTelemetry {
class TriggerClock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TriggerClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z
    void StartActivity(_GUID);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ
    ~TriggerClock();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TriggerClock@AnimationClockLoggingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TriggerClock@AnimationClockLoggingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AnimationClockLoggingTelemetry
