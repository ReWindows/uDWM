#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 6 member(s).
class CMILRefCountBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMILRefCountBase@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMILRefCountBase@@QEAA@XZ
    CMILRefCountBase();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMILRefCountBase@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMILRefCountBase@@UEAA@XZ
    virtual ~CMILRefCountBase();
};
