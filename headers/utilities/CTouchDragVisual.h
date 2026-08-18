#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 15 member(s).
class CTouchDragVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z
    long NotifyTouchDrag(tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGlobalTimeUpdated@CTouchDragVisual@@UEAAJXZ
    virtual long OnGlobalTimeUpdated();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContactManager@CTouchDragVisual@@QEAAJPEAVCContactManager@@@Z
    long SetContactManager(CContactManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CTouchDragVisual@@UEAAXXZ
    virtual void Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z
    void UpdateShowContact(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVisual@CTouchDragVisual@@UEAAJXZ
    virtual long ValidateVisual();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTouchDragVisual@@IEAA@_K@Z
    CTouchDragVisual(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTouchDragVisual@@MEAAJXZ
    virtual long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOKToCleanup@CTouchDragVisual@@MEAA_NXZ
    virtual bool IsOKToCleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopTimer@CTouchDragVisual@@MEAAJXZ
    virtual long StopTimer();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTouchDragVisual@@MEAA@XZ
    virtual ~CTouchDragVisual();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PEAPEAVCMeshGeometry2dProxy@@@Z
    long CreateDrawMesh2DInstruction(Mesh2D const *, CGeometry2dGroupProxy * *, CMeshGeometry2dProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisual@CTouchDragVisual@@AEAAJXZ
    long UpdateVisual();
};
