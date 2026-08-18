#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 13 member(s).
class CTransitionWindowSnapshot {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z
    static bool CanUseCVIFromSnapshot(CWindowData const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z
    static long Create(CTopLevelWindow *, CVisual *, tagRECT const *, CTransitionWindowSnapshot * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTransitionWindowSnapshot@@SAJPEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z
    static long Create(tagRECT const *, CVisual *, CTransitionWindowSnapshot * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z
    long GetBrush(CImageLegacyMilBrushProxy * *, CCachedVisualImageProxy * *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ
    virtual long ValidateVisual();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTransitionWindowSnapshot@@IEAA@XZ
    CTransitionWindowSnapshot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z
    virtual long Initialize(CTopLevelWindow *, CVisual *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z
    virtual long Initialize(tagRECT const *, CVisual *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTransitionWindowSnapshot@@MEAA@XZ
    virtual ~CTransitionWindowSnapshot();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ
    long _EnsureBrushForCVI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z
    long _EnsureCVIResource(tagRECT const *);
};
