#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 8 member(s).
class CWindowBackgroundTreatmentVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneVisualTree@CWindowBackgroundTreatmentVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z
    virtual long CloneVisualTree(CVisual * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWindowBackgroundTreatmentVisual@@SAJPEAPEAV1@@Z
    static long Create(CWindowBackgroundTreatmentVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableTreatment@CWindowBackgroundTreatmentVisual@@QEAAXXZ
    void EnableTreatment();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeVisualTreeClone@CWindowBackgroundTreatmentVisual@@QEAAJPEAV1@W4CloneOptions@@@Z
    long InitializeVisualTreeClone(CWindowBackgroundTreatmentVisual *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVisual@CWindowBackgroundTreatmentVisual@@UEAAJXZ
    virtual long ValidateVisual();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTreatmentBrush@CWindowBackgroundTreatmentVisual@@CAPEAUICompositionBrush@Composition@UI@Windows@@XZ
    static ::Windows::UI::Composition::ICompositionBrush * GetTreatmentBrush();
};
