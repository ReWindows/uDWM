#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 29 member(s).
class CButton {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelCrossfade@CButton@@QEAAJXZ
    long CancelCrossfade();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CButton@@SAJPEAPEAV1@@Z
    static long Create(CButton * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeVisualTreeClone@CButton@@QEAAJPEAV1@W4CloneOptions@@@Z
    long InitializeVisualTreeClone(CButton *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGlobalTimeUpdated@CButton@@UEAAJXZ
    virtual long OnGlobalTimeUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMouseEnter@CButton@@UEAAXXZ
    virtual void OnMouseEnter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMouseLeave@CButton@@UEAAXXZ
    virtual void OnMouseLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMouseLeftButton@CButton@@UEAAX_N@Z
    virtual void OnMouseLeftButton(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnabled@CButton@@QEAAX_N@Z
    void SetEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGhost@CButton@@QEAAXXZ
    void SetGhost();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMouseCapture@CButton@@QEAAX_N@Z
    void SetMouseCapture(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReverseRTLMirror@CButton@@QEAAX_N@Z
    void SetReverseRTLMirror(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z
    long SetVisualStates(CBitmapSourceArray const &, CBitmapSourceArray const &, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLayout@CButton@@UEAAJ_N@Z
    virtual long UpdateLayout(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVisual@CButton@@UEAAJXZ
    virtual long ValidateVisual();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CButton@@IEAA@XZ
    CButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneVisualTree@CButton@@MEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z
    virtual long CloneVisualTree(CVisual * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CButton@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOffset@CButton@@MEAAJXZ
    virtual long UpdateOffset();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CButton@@MEAA@XZ
    virtual ~CButton();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z
    long ActivateTimeline(WindissectOpaque * *, double, float, float, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeFadeValues@CButton@@AEAAXPEAM0@Z
    void ComputeFadeValues(float *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z
    void DeactivateTimeline(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawStateW@CButton@@AEAAXPEAVCAtlasButton@@W4ButtonStates@1@@Z
    void DrawStateW(CAtlasButton *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RedrawVisual@CButton@@AEAAJXZ
    long RedrawVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ
    void UpdateAtlasPositionAndSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCrossfade@CButton@@AEAAXXZ
    void UpdateCrossfade();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCurrentGlyphOpacity@CButton@@AEAAX_N@Z
    void UpdateCurrentGlyphOpacity(bool);
};
