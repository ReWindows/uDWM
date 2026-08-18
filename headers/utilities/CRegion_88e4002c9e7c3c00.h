#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 2 member(s).
namespace FastRegion {
class CRegion {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z
    long CopyData(::FastRegion::Internal::CRgnData const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeMemory@CRegion@FastRegion@@IEAAXXZ
    void FreeMemory();
};
} // namespace FastRegion
