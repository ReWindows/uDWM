#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 6 member(s).
class CBaseObject {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBaseObject@@QEAAKXZ
    unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBaseObject@@QEAA@XZ
    CBaseObject();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBaseObject@@QEAAKXZ
    unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBaseObject@@UEAA@XZ
    virtual ~CBaseObject();
};
