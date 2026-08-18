#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 5 member(s).
namespace Microsoft::WRL {
class Details {
public:
    class WeakReferenceImpl;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z
    unsigned long SafeUnknownDecrementReference(long volatile &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z
    unsigned long SafeUnknownIncrementReference(long volatile &);
};
} // namespace Microsoft::WRL
