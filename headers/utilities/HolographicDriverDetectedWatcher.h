#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
namespace Windows::Mirage {
class HolographicDriverDetectedWatcher {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ
    static bool DriverDetected();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ
    HolographicDriverDetectedWatcher();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ
    long RegisterForCMNotifications();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ
    ~HolographicDriverDetectedWatcher();
};
} // namespace Windows::Mirage
