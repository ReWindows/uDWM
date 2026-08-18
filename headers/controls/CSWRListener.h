#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 7 member(s).
class CSWRListener {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSWRListener@@UEAA@XZ
    virtual ~CSWRListener();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRootVisualChanged@CSWRListener@@EEAAXPEBVCSecondaryWindowRepresentation@@@Z
    virtual void OnRootVisualChanged(CSecondaryWindowRepresentation const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSWRInvalidated@CSWRListener@@EEAAXPEBVCSecondaryWindowRepresentation@@@Z
    virtual void OnSWRInvalidated(CSecondaryWindowRepresentation const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@CSWRListener@@EEAAXPEBVCSecondaryWindowRepresentation@@@Z
    virtual void OnSizeChanged(CSecondaryWindowRepresentation const *);
};
