#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 19 member(s).
class CDWriteText {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneVisualTree@CDWriteText@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z
    virtual long CloneVisualTree(CVisual * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDWriteText@@SAJPEAPEAV1@@Z
    static long Create(CDWriteText * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGraphicsDeviceLost@CDWriteText@@QEAAXXZ
    void OnGraphicsDeviceLost();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackgroundColor@CDWriteText@@UEAAXK@Z
    virtual void SetBackgroundColor(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColor@CDWriteText@@UEAAXK@Z
    virtual void SetColor(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFont@CDWriteText@@UEAAXAEBUtagLOGFONTW@@@Z
    virtual void SetFont(tagLOGFONTW const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRTLReading@CDWriteText@@UEAAX_N@Z
    virtual void SetRTLReading(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReverseAlignment@CDWriteText@@UEAAX_N@Z
    virtual void SetReverseAlignment(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScalingFactor@CDWriteText@@UEAAXN@Z
    virtual void SetScalingFactor(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetText@CDWriteText@@UEAAJPEBG@Z
    virtual long SetText(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVisual@CDWriteText@@UEAAJXZ
    virtual long ValidateVisual();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDWriteText@@UEAA@XZ
    virtual ~CDWriteText();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTextBrush@CDWriteText@@IEAAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z
    long CreateTextBrush(::Windows::UI::Composition::ICompositionBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeVisualTreeClone@CDWriteText@@IEAAJPEAV1@W4CloneOptions@@@Z
    long InitializeVisualTreeClone(CDWriteText *, int);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDWriteText@@AEAA@XZ
    CDWriteText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTextFormat@CDWriteText@@AEAAJXZ
    long CreateTextFormat();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTextLayout@CDWriteText@@AEAAJXZ
    long CreateTextLayout();
};
