#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 20 member(s).
class CWindowBorder {
public:
    class CCachedBorderBrush;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneVisualTree@CWindowBorder@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z
    virtual long CloneVisualTree(CVisual * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWindowBorder@@SAJPEAPEAV1@@Z
    static long Create(CWindowBorder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableBorder@CWindowBorder@@QEAAJ_N@Z
    long EnableBorder(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShadowMargins@CWindowBorder@@QEAA?AU_MARGINS@@XZ
    _MARGINS GetShadowMargins();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGraphicsDeviceLost@CWindowBorder@@QEAAXXZ
    void OnGraphicsDeviceLost();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorderDpi@CWindowBorder@@QEAAJH@Z
    long SetBorderDpi(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z
    long SetBorderParameters(tagRECT const &, float, int, _D3DCOLORVALUE const &, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z
    void SetBorderRect(tagRECT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z
    long SetContent(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVisual@CWindowBorder@@UEAAJXZ
    virtual long ValidateVisual();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWindowBorder@@UEAA@XZ
    virtual ~CWindowBorder();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWindowBorder@@IEAA@XZ
    CWindowBorder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z
    long InitializeVisualTreeClone(CWindowBorder *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAUISpriteVisual@Composition@UI@Windows@@@Z
    long CreateAndAttachBorderBrush(::Windows::UI::Composition::ISpriteVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBorderStructure@CWindowBorder@@AEAAJXZ
    long CreateBorderStructure();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShadowParameters@CWindowBorder@@CAXW4ShadowStyle@1@HPEAM111@Z
    static void GetShadowParameters(int, int, float *, float *, float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ
    void SetBorderModeForContentClip();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClipRectangle@CWindowBorder@@AEAAXPEAVCRectangleGeometryProxy@@AEBUtagRECT@@@Z
    void SetClipRectangle(CRectangleGeometryProxy *, tagRECT const &);
};
