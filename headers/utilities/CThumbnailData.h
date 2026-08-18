#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 6 member(s).
class CThumbnailData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cloak@CThumbnailData@@QEAAJ_N@Z
    long Cloak(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ
    virtual long EnsureThumbnailVisual();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnailVisual@CThumbnailData@@UEAAPEAVCVisual@@XZ
    virtual CVisual * GetThumbnailVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z
    long UpdateProperties(_DWM_THUMBNAIL_PROPERTIES const *);
};
