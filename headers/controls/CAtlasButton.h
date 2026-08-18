#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 8 member(s).
class CAtlasButton {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CAtlasButton@@SAJPEAPEAV1@@Z
    static long Create(CAtlasButton * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGlyphImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@W4VerticalAlignment@1@H@Z
    void SetGlyphImage(CBitmapSource *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReverseRTLMirror@CAtlasButton@@QEAAX_N@Z
    void SetReverseRTLMirror(bool);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddApproximateAtlasSize@CAtlasButton@@MEAAXPEAI@Z
    virtual void AddApproximateAtlasSize(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z
    virtual long AppendAtlas(AtlasedRects &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAtlasButton@@MEAA@XZ
    virtual ~CAtlasButton();
};
