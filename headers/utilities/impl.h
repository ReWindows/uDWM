#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 66 member(s).
namespace winrt {
class impl {
public:
    class atomic_ref_count;
    class collection_version;
    class implements_delegate_base;
    class slim_source_location;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z
    int make_marshaler(WindissectOpaque *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z
    WindissectOpaque * precreate_hstring_on_heap(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z
    WindissectOpaque trim_hresult_message(unsigned short const * const, unsigned int);
};
} // namespace winrt
