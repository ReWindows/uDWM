#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 6 member(s).
class CDDisplayManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDDisplayManager@@SAJPEAPEAV1@@Z
    static long Create(CDDisplayManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeSourceHandleForTarget@CDDisplayManager@@QEAAJAEBVCDWMDisplay@@PEAPEAXPEAI@Z
    long MakeSourceHandleForTarget(CDWMDisplay const &, void * *, unsigned int *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDDisplayManager@@AEAAJXZ
    long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDDisplayManager@@EEAA@XZ
    virtual ~CDDisplayManager();
};
