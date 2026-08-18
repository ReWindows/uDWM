#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 7 member(s).
class CDCompDesktopThumbnailCVI {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDCompDesktopThumbnailCVI@@SAJPEAPEAV1@@Z
    static long Create(CDCompDesktopThumbnailCVI * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRealizationSize@CDCompDesktopThumbnailCVI@@QEAAXAEBUtagSIZE@@@Z
    void SetRealizationSize(tagSIZE const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceRect@CDCompDesktopThumbnailCVI@@QEAAJAEBUtagRECT@@@Z
    long SetSourceRect(tagRECT const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetRealizationSize@CDCompDesktopThumbnailCVI@@MEAAJPEAUtagSIZE@@@Z
    virtual long v_GetRealizationSize(tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetSourceRect@CDCompDesktopThumbnailCVI@@MEAAJPEAUtagRECT@@@Z
    virtual long v_GetSourceRect(tagRECT *);
};
