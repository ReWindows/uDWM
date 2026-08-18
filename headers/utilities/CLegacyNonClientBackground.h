#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 14 member(s).
class CLegacyNonClientBackground {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAll@CLegacyNonClientBackground@@QEAAXXZ
    void ClearAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearBorder@CLegacyNonClientBackground@@QEAAXXZ
    void ClearBorder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CLegacyNonClientBackground@@SAJPEAVCWindowData@@PEAPEAV1@@Z
    static long Create(CWindowData *, CLegacyNonClientBackground * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorderColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z
    long SetBorderColor(_D3DCOLORVALUE const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorderRegion@CLegacyNonClientBackground@@QEAAJAEBUtagRECT@@@Z
    long SetBorderRegion(tagRECT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorderRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z
    long SetBorderRegion(HRGN__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCaptionColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z
    long SetCaptionColor(_D3DCOLORVALUE const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCaptionRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z
    long SetCaptionRegion(HRGN__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVisual@CLegacyNonClientBackground@@UEAAJXZ
    virtual long ValidateVisual();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLegacyNonClientBackground@@UEAA@XZ
    virtual ~CLegacyNonClientBackground();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLegacyNonClientBackground@@AEAA@PEAVCWindowData@@@Z
    CLegacyNonClientBackground(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DirtyForRebuild@CLegacyNonClientBackground@@AEAAXXZ
    void DirtyForRebuild();
};
