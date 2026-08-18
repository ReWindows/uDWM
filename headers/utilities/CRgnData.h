#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 3 member(s).
namespace FastRegion::Internal {
class CRgnData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z
    static int EstimateSizeUnion(::FastRegion::Internal::CRgnData const &, ::FastRegion::Internal::CRgnData const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z
    void StepIterator(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z
    void Union(::FastRegion::Internal::CRgnData const &, ::FastRegion::Internal::CRgnData const &);
};
} // namespace FastRegion::Internal
