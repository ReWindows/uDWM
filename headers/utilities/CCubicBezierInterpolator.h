#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 17 member(s).
class CCubicBezierInterpolator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCubicBezierInterpolator@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEAPEAUIUIAnimationTransition2@@@Z
    static long CreateTransition(IUIAnimationTransitionFactory2*, double, double *, unsigned int, float, float, float, float, IUIAnimationTransition2* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDependencies@CCubicBezierInterpolator@@UEAAJPEAW4__MIDL___MIDL_itf_UIAnimation_0000_0010_0001@@00@Z
    virtual long GetDependencies(int*, int*, int*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDimension@CCubicBezierInterpolator@@UEAAJPEAI@Z
    virtual long GetDimension(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDuration@CCubicBezierInterpolator@@UEAAJPEAN@Z
    virtual long GetDuration(double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFinalValue@CCubicBezierInterpolator@@UEAAJPEANI@Z
    virtual long GetFinalValue(double *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimitiveInterpolation@CCubicBezierInterpolator@@UEAAJPEAUIUIAnimationPrimitiveInterpolation@@I@Z
    virtual long GetPrimitiveInterpolation(IUIAnimationPrimitiveInterpolation *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InterpolateValue@CCubicBezierInterpolator@@UEAAJNPEANI@Z
    virtual long InterpolateValue(double, double *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InterpolateVelocity@CCubicBezierInterpolator@@UEAAJNPEANI@Z
    virtual long InterpolateVelocity(double, double *, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCubicBezierInterpolator@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCubicBezierInterpolator@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDuration@CCubicBezierInterpolator@@UEAAJN@Z
    virtual long SetDuration(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitialValueAndVelocity@CCubicBezierInterpolator@@UEAAJPEAN0I@Z
    virtual long SetInitialValueAndVelocity(double *, double *, unsigned int);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCubicBezierInterpolator@@IEAA@NNNN@Z
    CCubicBezierInterpolator(double, double, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CCubicBezierInterpolator@@IEAAXXZ
    void Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCubicBezierInterpolator@@IEAAJNPEANI@Z
    long Initialize(double, double *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCubicBezierInterpolator@@IEAA@XZ
    ~CCubicBezierInterpolator();
};
