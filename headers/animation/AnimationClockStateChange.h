#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
namespace AnimationClockLoggingTelemetry {
class AnimationClockStateChange {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z
    void StartActivity(_GUID, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAA@XZ
    ~AnimationClockStateChange();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AnimationClockStateChange@AnimationClockLoggingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AnimationClockLoggingTelemetry
