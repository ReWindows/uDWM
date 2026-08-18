#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 8 member(s).
class CResource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z
    static long Create(int, IDwmChannel *, CResource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@W4Enum@DwmResourceType@@IPEAPEAV1@@Z
    static long WrapExistingResource(IDwmChannel *, int, unsigned int, CResource * *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResource@@IEAA@XZ
    CResource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CResource@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z
    long Initialize(int, IDwmChannel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromHandle@CResource@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@I@Z
    long InitializeFromHandle(int, IDwmChannel *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResource@@MEAA@XZ
    virtual ~CResource();
};
