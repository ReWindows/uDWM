#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
namespace AnimationClockLoggingTelemetry {
class CreateAnimationClock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z
    void StartActivity(_GUID);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ
    ~CreateAnimationClock();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CreateAnimationClock@AnimationClockLoggingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AnimationClockLoggingTelemetry
