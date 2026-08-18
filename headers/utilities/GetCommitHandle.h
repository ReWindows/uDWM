#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
namespace AnimationClockLoggingTelemetry {
class GetCommitHandle {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z
    void StartActivity(_GUID);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetCommitHandle@AnimationClockLoggingTelemetry@@QEAA@XZ
    ~GetCommitHandle();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetCommitHandle@AnimationClockLoggingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AnimationClockLoggingTelemetry
