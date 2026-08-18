#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 7 member(s).
class CResourceProxy {
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResourceProxy@@IEAA@XZ
    CResourceProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z
    long Initialize(int, IDwmChannel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX_N@Z
    long InitializeFromSharedHandle(int, IDwmChannel *, void *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResourceProxy@@MEAA@XZ
    virtual ~CResourceProxy();
};
