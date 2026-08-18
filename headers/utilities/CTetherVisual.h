#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 15 member(s).
class CTetherVisual {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOKToCleanup@CTetherVisual@@UEAA_NXZ
    virtual bool IsOKToCleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SnapToAnchor@CTetherVisual@@QEAAJXZ
    long SnapToAnchor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z
    long Start(tagPOINT const &, tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CTetherVisual@@UEAAXXZ
    virtual void Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z
    long UpdatePosition(tagPOINT const *, tagPOINT const *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTetherVisual@@IEAA@_K@Z
    CTetherVisual(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z
    long GenerateMesh(Mesh2D *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTetherVisual@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopDelayTimer@CTetherVisual@@IEAAXXZ
    void StopDelayTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopTimer@CTetherVisual@@MEAAJXZ
    virtual long StopTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInstructions@CTetherVisual@@IEAAJXZ
    long UpdateInstructions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransition@CTetherVisual@@MEAAJXZ
    virtual long UpdateTransition();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTetherVisual@@MEAA@XZ
    virtual ~CTetherVisual();
};
