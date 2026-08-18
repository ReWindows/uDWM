#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 14 member(s).
class CapturedWindowRepresentation {
public:
    class SecondaryWindow;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CapturedWindowRepresentation@@SAJPEAVCWindowData@@PEAPEAV1@@Z
    static long Create(CWindowData *, CapturedWindowRepresentation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceRemoveSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z
    long ForceRemoveSecondaryWindow(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z
    long ReevaluateSecondaryWindow(CWindowData *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSecondaryWindow@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z
    long AddSecondaryWindow(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWindowsIntersect@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@0@Z
    bool DoWindowsIntersect(CWindowData *, CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesWindowQualifyAsIntermediateWindow@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@@Z
    bool DoesWindowQualifyAsIntermediateWindow(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesWindowQualifyAsSecondaryWindow@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@0@Z
    bool DoesWindowQualifyAsSecondaryWindow(CWindowData *, CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSecondaryWindow@CapturedWindowRepresentation@@IEAAHPEAVCWindowData@@@Z
    int FindSecondaryWindow(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookForSecondaryWindows@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z
    long LookForSecondaryWindows(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldInclude@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@@Z
    bool ShouldInclude(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSecondaryWindowProperties@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z
    long UpdateSecondaryWindowProperties(CWindowData *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CapturedWindowRepresentation@@MEAA@XZ
    virtual ~CapturedWindowRepresentation();
};
