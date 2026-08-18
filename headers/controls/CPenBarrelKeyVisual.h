#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 12 member(s).
class CPenBarrelKeyVisual {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOKToCleanup@CPenBarrelKeyVisual@@UEAA_NXZ
    virtual bool IsOKToCleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z
    long ShowBarrel(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z
    long Start(tagPOINT const *, unsigned long, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CPenBarrelKeyVisual@@UEAAXXZ
    virtual void Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@K@Z
    long Update(tagPOINT const *, unsigned long);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPenBarrelKeyVisual@@IEAA@_K@Z
    CPenBarrelKeyVisual(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ
    long PlaceVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ
    long UpdateBarrelAlpha();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPenBarrelKeyVisual@@MEAA@XZ
    virtual ~CPenBarrelKeyVisual();
};
