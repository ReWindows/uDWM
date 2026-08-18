#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 14 member(s).
namespace CThemeAnimationScheduleHelper {
class CCubicBezierChopper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCubic@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAJNMMMM@Z
    virtual long AddCubic(double, float, float, float, float);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRepeat@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAJNN@Z
    virtual long AddRepeat(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSinusoidal@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAJNMMMM@Z
    virtual long AddSinusoidal(double, float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTransitionToChoppedValue@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNNN@Z
    long AddTransitionToChoppedValue(double, double, double);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@PEAUIUIAnimationStoryboard2@@PEAUIUIAnimationVariable2@@PEAUIUIAnimationTransitionLibrary2@@PEAN3IPEAU__MIDL___MIDL_itf_UIAnimation_0000_0002_0003@@NNI@Z
    CCubicBezierChopper(IUIAnimationStoryboard2*, IUIAnimationVariable2*, IUIAnimationTransitionLibrary2*, double *, double *, unsigned int, __MIDL___MIDL_itf_UIAnimation_0000_0002_0003*, double, double, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContinueTo@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNN@Z
    long ContinueTo(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?End@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAJNM@Z
    virtual long End(double, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWithinRange@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA_NNNN@Z
    bool IsWithinRange(double, double, double);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAJXZ
    virtual long Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAbsoluteBeginTime@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAJT_LARGE_INTEGER@@@Z
    virtual long SetAbsoluteBeginTime(_LARGE_INTEGER);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@XZ
    ~CCubicBezierChopper();
};
} // namespace CThemeAnimationScheduleHelper
