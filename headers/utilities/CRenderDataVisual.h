#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 12 member(s).
class CRenderDataVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z
    long AddInstruction(CRenderDataInstruction *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearInstructions@CRenderDataVisual@@QEAAJXZ
    long ClearInstructions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z
    virtual long CloneVisualTree(CVisual * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z
    static long Create(CRenderDataVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z
    virtual long UpdateLayout(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ
    virtual long UpdateRenderData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVisual@CRenderDataVisual@@UEAAJXZ
    virtual long ValidateVisual();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRenderDataVisual@@IEAA@XZ
    CRenderDataVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z
    long InitializeVisualTreeClone(CRenderDataVisual *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRenderDataVisual@@MEAA@XZ
    virtual ~CRenderDataVisual();
};
