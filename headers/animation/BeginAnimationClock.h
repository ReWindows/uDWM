#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 3 member(s).
namespace AnimationClockLoggingTelemetry {
class BeginAnimationClock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z
    void StartActivity(_GUID, long);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@BeginAnimationClock@AnimationClockLoggingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AnimationClockLoggingTelemetry
