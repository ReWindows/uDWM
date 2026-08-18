#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 3 member(s).
class CWaitForService {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CWaitForService@@QEAAXXZ
    void Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitFor@CWaitForService@@QEAA_NPEBG@Z
    bool WaitFor(unsigned short const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ServiceStarted@CWaitForService@@CAXPEAX@Z
    static void s_ServiceStarted(void *);
};
