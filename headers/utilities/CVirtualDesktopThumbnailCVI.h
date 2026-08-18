#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 6 member(s).
class CVirtualDesktopThumbnailCVI {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CVirtualDesktopThumbnailCVI@@SAJPEAPEAV1@@Z
    static long Create(CVirtualDesktopThumbnailCVI * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRect@CVirtualDesktopThumbnailCVI@@QEAAJAEBUtagRECT@@AEBUtagSIZE@@@Z
    long SetRect(tagRECT const &, tagSIZE const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetRealizationSize@CVirtualDesktopThumbnailCVI@@MEAAJPEAUtagSIZE@@@Z
    virtual long v_GetRealizationSize(tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetSourceRect@CVirtualDesktopThumbnailCVI@@MEAAJPEAUtagRECT@@@Z
    virtual long v_GetSourceRect(tagRECT *);
};
