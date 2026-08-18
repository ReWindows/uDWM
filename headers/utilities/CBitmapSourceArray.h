#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 5 member(s).
class CBitmapSourceArray {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBitmapSourceArray@@QEAA@XZ
    CBitmapSourceArray();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z
    long CopyAndAddRef(CBitmapSourceArray const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z
    void ReleaseContents(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBitmapSourceArray@@QEAA@XZ
    ~CBitmapSourceArray();
};
