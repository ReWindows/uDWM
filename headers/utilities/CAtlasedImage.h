#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 26 member(s).
class CAtlasedImage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CAtlasedImage@@SAJPEAPEAV1@@Z
    static long Create(CAtlasedImage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectFromParent@CAtlasedImage@@QEAAXXZ
    void DisconnectFromParent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShadowPart@CAtlasedImage@@QEBAHXZ
    int IsShadowPart() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSqueegeePart@CAtlasedImage@@QEBAHXZ
    int IsSqueegeePart() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z
    void SetBitmapSource(CBitmapSource *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClip@CAtlasedImage@@QEAAXAEBUtagRECT@@@Z
    void SetClip(tagRECT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHiddenMargins@CAtlasedImage@@QEAAXU?$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z
    void SetHiddenMargins(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z
    void SetInsetFromParent(_MARGINS const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z
    void SetMarginClip(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z
    void SetOffset(tagPOINT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOpacity@CAtlasedImage@@QEAAXM@Z
    void SetOpacity(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z
    void SetSize(tagSIZE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@CAtlasedImage@@QEAAJXZ
    long Validate();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddApproximateAtlasSize@CAtlasedImage@@MEAAXPEAI@Z
    virtual void AddApproximateAtlasSize(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNineGridAtlasSize@CAtlasedImage@@MEAAXAEBU_MARGINS@@PEAI@Z
    virtual void AddNineGridAtlasSize(_MARGINS const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z
    virtual long AppendAtlas(AtlasedRects &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z
    virtual long AppendAtlasNineGrid(AtlasedRects &, CBitmapSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendAtlasRect@CAtlasedImage@@IEAAJAEAUAtlasedRects@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1_N@Z
    long AppendAtlasRect(AtlasedRects &, WindissectOpaque const &, WindissectOpaque const &, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAtlasedImage@@IEAA@XZ
    CAtlasedImage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAtlasedImage@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalSetOpacity@CAtlasedImage@@IEAAXH@Z
    void InternalSetOpacity(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z
    void SetDirtyFlags(unsigned long, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAtlasedImage@@MEAA@XZ
    virtual ~CAtlasedImage();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAtlasResource@CAtlasedImage@@AEAAJXZ
    long EnsureAtlasResource();
};
