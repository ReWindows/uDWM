#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 36 member(s).
class CThumbnailVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CThumbnailVisual@@SAJPEAPEAV1@@Z
    static long Create(CThumbnailVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoHitTest@CThumbnailVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z
    virtual bool DoHitTest(tagPOINT const &, CVisual * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndTransition@CThumbnailVisual@@UEAAXXZ
    virtual void EndTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z
    long EnsureSecondaryWindowRepresentation(CSecondaryWindowRepresentation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ
    long EnsureSecondaryWindowVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ
    long EnsureVisualBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAUD2D_POINT_3F@@@Z
    long GetCVI(tagRECT const *, CCachedVisualImageProxy * *, D2D_POINT_3F *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestinationClientRectChanged@CThumbnailVisual@@QEAAXXZ
    void OnDestinationClientRectChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ
    void OnRepresentationTypeUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRootVisualChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z
    virtual void OnRootVisualChanged(CSecondaryWindowRepresentation const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSWRInvalidated@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z
    virtual void OnSWRInvalidated(CSecondaryWindowRepresentation const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z
    virtual void OnSizeChanged(CSecondaryWindowRepresentation const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourceWindowClientMarginsChanged@CThumbnailVisual@@QEAAXXZ
    void OnSourceWindowClientMarginsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourceWindowVisualCreated@CThumbnailVisual@@QEAAXXZ
    void OnSourceWindowVisualCreated();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirtyChildren@CThumbnailVisual@@UEAAXXZ
    virtual void SetDirtyChildren();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z
    virtual void SetDirtyFlags(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThumbnailData@CThumbnailVisual@@QEAAXPEAVCThumbnailData@@@Z
    void SetThumbnailData(CThumbnailData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ
    long UpdateDestinationRect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z
    long UpdateProperties(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ
    long UpdateSourceRect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVisual@CThumbnailVisual@@UEAAJXZ
    virtual long ValidateVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CalculateSWRUsageFlags@CThumbnailVisual@@SA?AU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@H_NK@Z
    static WindissectOpaque s_CalculateSWRUsageFlags(int, bool, unsigned long);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CThumbnailVisual@@IEAA@XZ
    CThumbnailVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CThumbnailVisual@@MEAAJXZ
    virtual long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CThumbnailVisual@@MEAA@XZ
    virtual ~CThumbnailVisual();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ
    long _AddBorderInstructions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDestWidth@CThumbnailVisual@@AEAAHXZ
    int _GetDestWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HasBorder@CThumbnailVisual@@AEAA_NXZ
    bool _HasBorder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ
    bool _IsImmersiveIconic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ
    bool _IsThumbnailCVIStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ
    bool _ShouldUseSecondaryWindowVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z
    long _UpdateAnimatedProperties(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NMM@Z
    static bool s_IsCloseEnoughToReuse(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NPEBUtagRECT@@0@Z
    static bool s_IsCloseEnoughToReuse(tagRECT const *, tagRECT const *);
};
