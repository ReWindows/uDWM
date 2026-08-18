#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 6 member(s).
class CCachedVisualImageProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Freeze@CCachedVisualImageProxy@@QEAAJXZ
    long Freeze();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCachedVisualImageProxy@@QEAAJPEAUIDwmChannel@@@Z
    long Initialize(IDwmChannel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z
    long Snapshot(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CCachedVisualImageProxy@@QEAAJAEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z
    long Update(D2D_RECT_F const &, D2D_SIZE_F const &, CRectResourceProxy const *, CSizeResourceProxy const *, CVisualProxy *, int);
};
