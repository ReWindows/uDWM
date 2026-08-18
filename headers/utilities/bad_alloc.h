#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 6 member(s).
namespace stdext {
class bad_alloc {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0bad_alloc@stdext@@QEAA@XZ
    bad_alloc();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0bad_alloc@stdext@@QEAA@AEBV01@@Z
    bad_alloc(::stdext::bad_alloc const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1bad_alloc@stdext@@UEAA@XZ
    virtual ~bad_alloc();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Doraise@bad_alloc@stdext@@MEBAXXZ
    virtual void _Doraise() const;
};
} // namespace stdext
