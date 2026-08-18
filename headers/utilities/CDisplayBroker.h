#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
class CDisplayBroker {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDisplayBroker@@QEAA@XZ
    CDisplayBroker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDisplayBroker@@QEAAJPEAUIDisplayManager@Core@Display@Devices@Windows@@@Z
    long Initialize(::Windows::Devices::Display::Core::IDisplayManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CDisplayBroker@@QEAAXXZ
    void Shutdown();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDisplayBroker@@QEAA@XZ
    ~CDisplayBroker();
};
