#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 17 member(s).
class CIconicAnimatedVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CIconicAnimatedVisual@@SAJPEAPEAV1@@Z
    static long Create(CIconicAnimatedVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ
    long EnsureSecondaryWindowRepresentation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CIconicAnimatedVisual@@QEAAPEAUHWND__@@XZ
    HWND__* GetWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRepresentationTypeUpdated@CIconicAnimatedVisual@@QEAAXXZ
    void OnRepresentationTypeUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRootVisualChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z
    virtual void OnRootVisualChanged(CSecondaryWindowRepresentation const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSWRInvalidated@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z
    virtual void OnSWRInvalidated(CSecondaryWindowRepresentation const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z
    virtual void OnSizeChanged(CSecondaryWindowRepresentation const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@@Z
    long SetIconicData(CWindowData *, tagRECT const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ
    virtual long ValidateVisual();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CIconicAnimatedVisual@@IEAA@XZ
    CIconicAnimatedVisual();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CIconicAnimatedVisual@@MEAA@XZ
    virtual ~CIconicAnimatedVisual();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ
    long EnsureVisualBrush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ
    long SetupInstructions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ
    long UpdateDestinationRect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSourceRect@CIconicAnimatedVisual@@AEAAJXZ
    long UpdateSourceRect();
};
