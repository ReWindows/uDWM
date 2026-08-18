#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 5 member(s).
namespace AnimationClockLoggingTelemetry {
class EndAnimationClock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z
    void StartActivity(_GUID, long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EndAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ
    ~EndAnimationClock();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@EndAnimationClock@AnimationClockLoggingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AnimationClockLoggingTelemetry
