# `global` :: `CStoryboard`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `uDWM.dll`. Total members: **65**.

```cpp
#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
class CAnimationEngine; 
class CCaptureManager; 
class CImmersiveIconicBitmapRegistry; 
class CMagnifierControl; 
class CProjectedShadowScene; 
class CThemeAnimationScheduleHelper; 
class CTopLevelWindow; 
class CWindowBorder; 
class CWindowPropertyTracker; 
class CapturedWindowRepresentation; 
namespace Microsoft { namespace WRL { class Details; } } 
class WindowFrameLoggingTelemetry; 
class tson; 
class winrt; 
class ACCENT_POLICY; class AnimationClockLogging; class AnimationIdInfo; class AtlasedRects; class CAccent; class CAccentAcrylicBlurBehind; class CAccentTransition; class CAccentTransitionAnimatedVisual; class CAcrylicSheet; class CAcrylicSystemBackdropVisual; class CAnalogCompositorManager; class CAnimatedTransitionVisual; class CAnimationClock; class CAnimationClockCoordinator; class CAnimationClockFactory; class CAnimationComponent; class CAnimationEngine; class CAnimationProxy; class CAnimationResource; class CAnimationScheduler; class CAnimationTriggerProxy; class CAppArrangementBase; class CAppArrangementDelayed; class CAppArrangementImmediate; class CAppLaunch; class CAppLaunchSwitch; class CAppSwitch; class CAtlasButton; class CAtlasedImage; class CAtlasedRectsGroupProxy; class CAtlasedRectsMeshProxy; class CAtlasedRectsVisual; class CAutoRestoreAnimationWindowData; class CBaseGeometryProxy; class CBaseImageProxy; class CBaseLegacyMilBrushProxy; class CBaseObject; class CBaseRenderTargetProxy; class CBaseTransformProxy; class CBitmapSource; class CBitmapSourceArray; class CBitmapSourceProxy; class CButton; class CCachedVisualImageProxy; class CCanvasVisual; class CCaptureBorderVisual; class CCaptureControllerProxy; class CCaptureManager; class CChangePanel; class CClientArea; class CColorTransformResourceProxy; class CCombinedGeometryProxy; class CCompositionEffectCache; class CCompositor; class CContactManager; class CContactStationaryVisual; class CContainerVisual; class CContainerVisualProxy; class CCrossFade; class CCubicBezierInterpolator; class CCursorVisual; class CCursorVisualProxy; class CDCompDesktopThumbnail; class CDCompDesktopThumbnailCVI; class CDCompThumbnailData; class CDCompVirtualDesktopThumbnailData; class CDDisplayManager; class CDWMDXGIAdapter; class CDWMDXGIEnumeration; class CDWMDisplay; class CDWMDisplaySet; class CDWriteText; class CDesktop; class CDesktopManager; class CDesktopThumbnail; class CDesktopThumbnailBase; class CDesktopThumbnailCVI; class CDesktopThumbnailCVIVisual; class CDesktopWindowReplacement; class CDialogSwitch; class CDirectTouchVisual; class CDisplayAnimatedVisual; class CDisplayBlackCurtainAnimatedVisual; class CDisplayBroker; class CDisplayDisconnectAnimatedVisual; class CDisplayDuplicateAnimatedVisual; class CDisplayDuplicateToExtendAnimatedVisual; class CDisplayExtendAnimatedVisual; class CDisplayExtendToDuplicateAnimatedVisual; class CDisplayMixedModeAnimatedVisual; class CDisplayModeChangeAnimationHelper; class CDisplayModeChangeHelper; class CDisplaySecondaryOnlyAnimatedVisual; class CDisplaySecondaryOnlyToDuplicateAnimatedVisual; class CDisplaySecondaryOnlyToExtendAnimatedVisual; class CDoubleResourceProxy; class CDrawBitmapInstruction; class CDrawGeometryInstruction; class CDrawMesh2DInstruction; class CDrawNineGridInstruction; class CDrawTileImageInstruction; class CDrawVisualTreeInstruction; class CEffectGroupProxy; class CFade; class CFadeIn; class CFadeOut; class CFlickVisual; class CFlyoutPopup; class CFullScreenMagnifier; class CGaussianBlurEffectProxy; class CGeometry2dGroupProxy; class CGlassColorizationParameters; class CGlassColorizationResources; class CGlobalLightSet; class CGlobalTimeTrackVisual; class CGraphicsDeviceManager; class CGroupingStoryboard; class CGrowPanel; class CHidePopup; class CHolographicInteropTextureProxy; class CHolographicSlate; class CIconicAnimatedVisual; class CIconicBitmapRegistry; class CImage; class CImageLegacyMilBrushProxy; class CImmersiveColor; class CImmersiveIconicBitmapRegistry; class CImmersiveOrPrimaryMonitor; class CImmersiveState; class CImmersiveWindowIconic; class CIndirectSwapchainRenderTargetProxy; class CIndirectTouchVisual; class CInplaceResize; class CInputView; class CInputView_DockedToFloating; class CInputView_FloatingToDocked; class CInputView_SizeChangeOnly; class CInputView_SizeOrModeChangeBase; class CKeystateTextFeedback; class CLaunchSwitchBase; class CLauncherAnimationBase; class CLauncherDismiss; class CLauncherLaunch; class CLegacyNonClientBackground; class CLegacyVisualCaptureRenderTargetProxy; class CLightMicaSystemBackdropVisual; class CLinearGradientLegacyMilBrushProxy; class CLivePreview; class CLivePreviewTimeline; class CLoginTransition; class CMILRefCountBase; class CMagnifier; class CMagnifierControl; class CMagnifierRenderTargetProxy; class CMatrixTransform3dProxy; class CMatrixTransformProxy; class CMeshGeometry2dProxy; class CMicaSystemBackdropVisual; class CNoAnimation; class CPPIWorkAreaResize; class CPanelAnimation; class CPenBarrelKeyVisual; class CPenContact; class CPenPressHoldVisual; class CPerMonitorDesktopThumbnail; class CPopInstruction; class CPressTapVisual; class CProjectedShadowScene; class CProjectionBorderManager; class CProjectionBorderVisual; class CProjectionBorderVisualShim; class CPushTransformInstruction; class CRectResourceProxy; class CRectangleGeometryProxy; class CRectangleInstruction; class CRedirectVisualProxy; class CRegion; class CRenderDataInstruction; class CRenderDataProxy; class CRenderDataVisual; class CReposition; class CResource; class CResourceProxy; class CRgnGeometryProxy; class CRotateTransformProxy; class CSSCrossFade; class CSWRListener; class CScaleTransformProxy; class CScreenshotFadeOut; class CSecondaryWindowRepresentation; class CShowPopup; class CShrinkPanel; class CSizeResourceProxy; class CSlide; class CSlideIn; class CSlideInAppBar; class CSlideInCharm; class CSlideInLong; class CSlideOut; class CSlideOutAppBar; class CSlideOutCharm; class CSlideOutLong; class CSolidColorLegacyMilBrushProxy; class CSolidRectangleInstruction; class CSolidRectangleVisual; class CSpriteVisual; class CStoryboard; class CStoryboardFactory; class CSystemBackdropVisual; class CTDBN; class CTabSwitch; class CTabletModeTransition; class CTetherVisual; class CThemeAnimationScheduleHelper; class CThumbnailAnimatedVisual; class CThumbnailData; class CThumbnailTransition; class CThumbnailVisual; class CTimeline; class CTimelineBase; class CTimer; class CTopLevelAtlasedRectsVisual; class CTopLevelWindow; class CTopLevelWindow3D; class CTouchContact; class CTouchDragVisual; class CTouchDragVisualHelper; class CTouchPressHoldVisual; class CTouchVisual; class CTrackingTooltip; class CTransform3dGroupProxy; class CTransformGroupProxy; class CTransitionVisualController; class CTransitionWindowSnapshot; class CTranslateTransformProxy; class CVirtualDesktopSwitch; class CVirtualDesktopThumbnail; class CVirtualDesktopThumbnailCVI; class CVisual; class CVisualGroupProxy; class CVisualProxy; class CVisualSurfaceProxy; class CVisualTargetProxy; class CWaitForService; class CWindowArrangementTransition; class CWindowBackgroundTreatmentVisual; class CWindowBorder; class CWindowClose; class CWindowData; class CWindowIconic; class CWindowList; class CWindowPropertyTracker; class CWindowRepresentation; class CWindowSnapshot; class CWindowTarget; class CapturedWindowRepresentation; class CloseHandle; class CoTaskMemFree; class ColorCache; class D2DMatrix; class D2DQuaternion; class D2DVector2; class D2DVector2const; class D2DVector3; class D2DVector3const; class D2D_MATRIX_3X2_F; class D2D_POINTANDSIZE_F; class D2D_POINTANDSIZE_L; class D2D_POINT_2F; class D2D_POINT_3F; class D2D_RECT_F; class D2D_RECT_U; class D2D_SIZE_F; class D2D_VECTOR_3F; class DISPLAYCONFIG_PATH_INFO; class DWM_CAPTURE_TOKEN; class DWM_WINDOW_CLOSE_EVENT_TOKEN; class DXGIOutputInfo; class DefaultHeap; class DesktopWorkAreaInfo; class Destroy; class DwmAnimationPrimitive; class DynArray; class FEATURE_ERROR; class FEATURE_LOGGED_TRAITS; class FEATURE_STATE_CHANGE_SUBSCRIPTION__; class GpCC; class HBITMAP__; class HBRUSH__; class HCMNOTIFICATION__; class HDC__; class HICON__; class HINSTANCE__; class HKEY__; class HMONITOR__; class HRGN__; class HSTRING__; class HWND__; class IActivationFactory; class IAnimatedVisual; class IAnimationClockEventListener; class IAnimationListener; class IBitmapManager; class ID2D1Device; class ID2D1DeviceContext; class ID2D1Effect; class ID2D1Factory2; class ID2D1Multithread; class ID3D10Multithread; class ID3D11Device4; class IDCompositionAnimationTriggerPartner; class IDCompositionClip; class IDCompositionDesktopDevicePartner; class IDCompositionDesktopDevicePartner4; class IDCompositionDesktopDeviceRestricted; class IDCompositionEffect; class IDCompositionHolographicDevicePartner; class IDCompositionHolographicInteropTexture; class IDCompositionRemoteAppRenderTargetPartner; class IDCompositionRenderTargetPartner; class IDCompositionRenderTargetPartner2; class IDCompositionTarget; class IDCompositionTransform; class IDCompositionVisual; class IDCompositionVisual2; class IDCompositionVisualPartnerWinRTInterop; class IDCompositionVisualRestricted; class IDXGIAdapter; class IDXGIDevice1; class IDXGIFactory1; class IDXGIFactory4; class IDXGIFactory7; class IDisplayPathInterop; class IDwmChannel; class IDwmWindow; class IInspectable; class IRenderDataBuilder; class ISecondaryWindowRepresentationChangedListener; class ISoftwareCursorChangeListener; class IStream; class ITimerCallbackListener; class ITransitionAnimationVisualNative; class ITransitionStateNative; class ITransitionStateNativePrivate; class IUIAnimationManager2; class IUIAnimationPrimitiveInterpolation; class IUIAnimationStoryboard2; class IUIAnimationTransition2; class IUIAnimationTransitionFactory2; class IUIAnimationTransitionLibrary2; class IUIAnimationVariable2; class IUnknown; class IUserResizeVisualNative; class IWICBitmap; class IWICBitmapSource; class IWeakReference; class InterpolationParameters; class LeaveCriticalSection; class LivePreviewRequest; class LivePreviewResource; class LivePreviewVisual; class LivePreviewWindow; class MAGN_ADAPTERTEXTURES; class MAGN_FILTERLIST; class MAGN_UPDATE_TEXTURES_PARAM; class MILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY; class MILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE; class MILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW; class MILCMD_DWM_REDIRECTION_BUILDCAPTUREWINDOWVISUALEXCLUSIONLIST; class MILCMD_DWM_REDIRECTION_CLEARTAGGEDWINDOWRECT; class MILCMD_DWM_REDIRECTION_ENDTRANSITION; class MILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS; class MILCMD_DWM_REDIRECTION_GETGLOBALSTATE; class MILCMD_DWM_REDIRECTION_GETHMDSTATUS; class MILCMD_DWM_REDIRECTION_GETTITLEBARINFO; class MILCMD_DWM_REDIRECTION_HITTESTQUERY; class MILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS; class MILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW; class MILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT; class MILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT; class MILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE; class MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE; class MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE; class MILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE; class MILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE; class MILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE; class MILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE; class MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE; class MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE; class MILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE; class MILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL; class MILCMD_DWM_REDIRECTION_RENDERFLICK; class MILCMD_DWM_REDIRECTION_RENDERGESTURE; class MILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS; class MILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP; class MILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL; class MILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICDEFAULTCOLOR; class MILCMD_DWM_REDIRECTION_SETTAGGEDWINDOWRECT; class MILCMD_DWM_REDIRECTION_SHOWCONTACT; class MILCMD_DWM_REDIRECTION_STARTTRANSITION; class MILCMD_DWM_REDIRECTION_TETHERCONTACT; class MILCMD_DWM_REDIRECTION_TRANSITIONBITMAP; class MILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL; class MILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL; class MILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES; class MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION; class MILCMD_DWM_WINDOWATTRIBUTE; class MIL_MESSAGE; class MagnifierExperienceHelper; class Mesh2D; class MilColorTransform; class MilGradientStop; class NCADORNMENT_INFO; class NCPART_COLOR; class NineGridLayout; class RegCloseKey; class ReleaseSRWLockExclusive; class ResourceHelper; class RtlUnsubscribeWnfStateChangeNotification; class SCALINGINFO; class ScalingCompatLogging; class StoryboardInfo; class TA_TIMINGFUNCTION; class TA_TRANSFORM_2D; class TA_TRANSFORM_3D; class TA_TRANSFORM_CLIP; class TA_TRANSFORM_OPACITY; class TMilRect; class TMilRect_; class TOUCH_DRAG_POINT; class TaskbarAcrylic; class TipReportingInfo; class UDwmTrace; class VisualCollection; class VisualCollectionIterator; class WindowFrameLogging; class WindowFrameLoggingTelemetry; class WindowsAnimation; class _CM_NOTIFY_EVENT_DATA; class _CONTEXT; class _D3DCOLORVALUE; class _D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_const; class _D3DMATRIX; class _DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO; class _DPI_INFORMATION; class _DWMCaptureWindowInformation; class _DWM_BLURBEHIND; class _DWM_THUMBNAIL_PROPERTIES; class _EVENT_FILTER_DESCRIPTOR; class _EXCEPTION_RECORD; class _GUID; class _LARGE_INTEGER; class _LIST_ENTRY; class _LUID; class _MARGINS; class _REMOTE_PORT_VIEW; class _RTL_CRITICAL_SECTION; class _RTL_GENERIC_TABLE; class _RTL_SRWLOCK; class _TP_CALLBACK_INSTANCE; class _TP_TIMER; class _TP_WAIT; class _WNF_STATE_NAME; class _WNF_TYPE_ID; class _WNF_USER_SUBSCRIPTION; class __MIDL___MIDL_itf_UIAnimation_0000_0002_0003; class __WIL_RTL_FEATURE_USAGE_DATA; class __WIL__WNF_STATE_NAME; class _tlgProvider_t; class _tlgWrapSz; class _tlgWrapperByRef; class _tlgWrapperByVal; class iterator; class lambda_05cef1f6fdf474c9f3ed207deba0f73b; class lambda_8db0ce862824541f40dfb767113f1e28; class lambda_b70241e9b5ebaad244db3e52d52cab17; class lambda_f0b0058c35c91142d2603957657c1ded; class tagLOGFONTW; class tagPOINT; class tagRECT; class tagSIZE; class tagTITLEBARINFOEX; class thunk; class tson; class type; class type_info; class wil_FeatureState; class wil_details_FeatureReportingCache; class wil_details_FeatureStateCache; class wil_details_FeatureUsageSRUM; class winrt; 
namespace AnimationClockLoggingTelemetry { class AnimationClockStateChange; class BeginAnimationClock; class CreateAnimationClock; class EndAnimationClock; class GetCommitHandle; class TriggerClock; } 
namespace D2D1 { class Matrix4x4F; } 
namespace DispBrokerDesktop { class ISessionBrokerInstance; } 
namespace FastRegion { class CRegion; } 
namespace FastRegion { namespace Internal { class CRgnData; class CStripe; } } 
namespace Microsoft { namespace Internal { namespace UI { namespace Composition { namespace Effects { class GaussianBlurEffect; class IGaussianBlurEffect; } } } } } 
namespace Microsoft { namespace WRL { class ComPtr; class Details; class FtmBase; class RuntimeClassFlags; } } 
namespace Microsoft { namespace WRL { namespace Wrappers { class HStringReference; } } } 
namespace RectUniqueness { class NotNeeded; class _CMILSurfaceRect_; class _CMilRectL_; } 
namespace ScalingCompatTelemetry { class CScalingCompatTelemetry; } 
namespace Udwm { namespace Transitions { namespace Private { namespace Tip { class _tip_ResponsiveScreenRotationAnimationTest; } } } } 
namespace Windows { class Foundation; } 
namespace Windows { namespace Devices { namespace Display { namespace Core { class DisplayManager; class DisplayManagerChangedEventArgs; class DisplayManagerDisabledEventArgs; class DisplayManagerEnabledEventArgs; class DisplayManagerPathsFailedOrInvalidatedEventArgs; class DisplayTarget; class IDisplayManager; class IDisplayManagerStatics; } } } } 
namespace Windows { namespace Graphics { namespace Effects { class IGraphicsEffect; class IGraphicsEffectD2D1Interop; class IGraphicsEffectSource; } } } 
namespace Windows { namespace Graphics { namespace Holographic { namespace Internal { class IHolographicDisplayMonitorManager; } } } } 
namespace Windows { namespace Mirage { class HolographicDriverDetectedWatcher; } } 
namespace Windows { namespace UI { class Color; } } 
namespace Windows { namespace UI { namespace Composition { class ICompositionBrush; class ICompositionDrawingSurfaceInterop; class ICompositionEffectFactory; class ICompositionEffectSourceParameterFactory; class ICompositionGraphicsDevice; class ICompositionLight; class ICompositionProjectedShadow; class ICompositionProjectedShadowReceiver; class ICompositionSurface; class ICompositor; class ICompositor2; class ICompositorInterop; class IExpCompositionProjectedShadow; class IInteropCompositorFactoryRestricted; class ISpriteVisual; class IVisual; class IVisual2; } } } 
namespace Windows { namespace UI { namespace Composition { namespace Internal { class ICompositorInternal; } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Media { class IAcrylicBrushStaticsPrivate; } } } } 
namespace std { class _Atomic_padded; class _Func_base; class _Func_class; class _Hash_find_last_result; class _Iterator_base0; class _List_iterator; class _List_node; class _List_simple_types; class _List_unchecked_iterator; class _List_val; class _Simple_types; class _Tree_const_iterator; class _Tree_find_result; class _Tree_id; class _Tree_node; class _Tree_simple_types; class _Tree_unchecked_const_iterator; class _Tree_val; class _Uhash_compare; class _Vector_const_iterator; class _Vector_iterator; class _Vector_val; class allocator; class basic_string; class basic_string_view; class char_traits; class default_delete; class equal_to; class function; class hash; class invalid_argument; class logic_error; class nothrow_t; class nullptr_t; class optional; class pair; class shared_ptr; class unique_ptr; class unordered_map; class vector; class weak_ptr; } 
namespace stdext { class bad_alloc; class bad_array_new_length; class exception; } 
namespace tip2 { class details; class test_flag; class test_info; class test_requirement; class test_state; class test_watcher; class vector_nothrow; } 
namespace wil { class CallContextInfo; class FailureInfo; class ResultException; class StoredFailureInfo; class WNF_CHANGE_STAMP_STRUCT; class com_ptr_t; class err_returncode_policy; class event_watcher_t; class process_heap_deleter; class srwlock; class unique_any_t; class vector_range_nothrow; } 
namespace wil { namespace details { class DestroyThreadPoolTimer; class EnabledStateManager; class FeatureLogging; class FeatureStateManager; class IFailureCallback; class ResultStatus; class SystemThreadPoolMethods; class ThreadFailureCallbackHolder; class delete_event_watcher_state; class delete_wnf_subscription_state; class event_watcher_state; class handle_null_resource_policy; class out_param_t; class pointer_range; class resource_policy; class unique_storage; class wnf_subscription_state; class wnf_subscription_state_base; } } 
namespace wil { namespace details_abi { class FeatureStateData; class ProcessLocalData; class ProcessLocalStorageData; class RawUsageIndex; class ThreadLocalData; class ThreadLocalFailureInfo; class UsageIndexProperty; class UsageIndexes; class heap_buffer; class heap_vector; } } 
namespace wistd { class function; class integral_constant; class unique_ptr; } 
namespace wistd { namespace __function { class __base; } } 

// Reconstructed from uDWM.dll by Windissect. 65 member(s).
class CStoryboard {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Abandon@CStoryboard@@QEAAXXZ
    void Abandon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Block@CStoryboard@@QEAAXXZ
    void Block();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanCoexist@CStoryboard@@SA_NPEAV1@0@Z
    static bool CanCoexist(CStoryboard *, CStoryboard *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CStoryboard@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAnimatingTarget@CStoryboard@@QEAAPEAVCAnimationComponent@@W4DWMTRANSITION_TARGET@@@Z
    CAnimationComponent * FindAnimatingTarget(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPVLTarget@CStoryboard@@UEAAHW4DWMTRANSITION_TARGET@@@Z
    virtual int GetPVLTarget(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialTargetInfo@CStoryboard@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z
    virtual int GetSpecialTargetInfo(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z
    static CWindowData * GetTaggedWindow(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeout@CStoryboard@@UEAAKXZ
    virtual unsigned long GetTimeout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GhostTargets@CStoryboard@@QEAAXW4DWMTRANSITION_TARGET@@@Z
    void GhostTargets(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z
    bool HasAnimatingOwnerWindow(CWindowData *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z
    bool HasAnimationComponent(HWND__*, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@CStoryboard@@UEAA_NXZ
    virtual bool IsEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIndependent@CStoryboard@@UEAA_NXZ
    virtual bool IsIndependent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRTL@CStoryboard@@SA_NXZ
    static bool IsRTL();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationComplete@CStoryboard@@UEAAJI@Z
    virtual long OnAnimationComplete(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationStart@CStoryboard@@UEAAJXZ
    virtual long OnAnimationStart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeginTransitionRequest@CStoryboard@@UEAAJXZ
    virtual long OnBeginTransitionRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ
    virtual long OnEndTransitionRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStoryboardTimeout@CStoryboard@@QEAAJXZ
    long OnStoryboardTimeout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransitionWindow@CStoryboard@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z
    virtual long OnTransitionWindow(CWindowData *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CStoryboard@@QEAAKXZ
    unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z
    static void ResizeToSnapshot(HWND__*, tagRECT const &, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ
    long ScheduleStartAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ
    long ScheduleStopAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleToRun@CStoryboard@@QEAAXXZ
    void ScheduleToRun();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompSyncHandle@CStoryboard@@UEAAXPEAX@Z
    virtual void SetCompSyncHandle(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z
    void SetParentStoryboard(CStoryboard *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStartTrigger@CStoryboard@@QEAAXPEAVCAnimationTriggerProxy@@@Z
    void SetStartTrigger(CAnimationTriggerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z
    static bool ShouldAnimateShowWindow(CWindowData const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldBlock@CStoryboard@@SA_NPEAV1@0@Z
    static bool ShouldBlock(CStoryboard *, CStoryboard *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldCancelLivePreview@CStoryboard@@UEAA_NXZ
    virtual bool ShouldCancelLivePreview();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseTransitionBitmap@CStoryboard@@UEAA_NXZ
    virtual bool ShouldUseTransitionBitmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseCommitHandle@CStoryboard@@UEAA_NXZ
    virtual bool UseCommitHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseDComposition@CStoryboard@@QEAA_NXZ
    bool UseDComposition();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStoryboard@@UEAA@XZ
    virtual ~CStoryboard();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CStoryboard@@IEAA@_N@Z
    CStoryboard(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CStoryboard@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z
    long _AddAnimationComponent(CAnimationComponent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Cleanup@CStoryboard@@IEAAXXZ
    void _Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponent@@@Z
    long _CreateAndAddAnimationComponent(CWindowData *, bool, int, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z
    long _CreateAndAddAnimationComponentControlReuse(CWindowData *, bool, int, tagRECT *, tagRECT *, int, bool, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddAnimationComponentWithRect@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2HPEAPEAVCAnimationComponent@@@Z
    long _CreateAndAddAnimationComponentWithRect(CWindowData *, bool, int, tagRECT *, tagRECT *, int, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAPEAVCAnimationComponent@@@Z
    long _CreateAndAddBitmapAnimationComponent(HWND__*, int, int, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z
    long _CreateAndAddDesktopAnimationComponent(CWindowData *, int, tagRECT const &, bool, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAPEAVCAnimationComponent@@3@Z
    long _CreateAndAddGutterAnimationComponentsForRect(HWND__*, int, int, tagRECT const *, tagRECT const *, CAnimationComponent * *, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddNullComponent@CStoryboard@@IEAAJHPEAPEAVCAnimationComponent@@@Z
    long _CreateAndAddNullComponent(int, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z
    long _CreateAndAddNullComponentWithWindow(CWindowData *, int, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z
    long _CreateAndAddNullComponentWithWindowScreen(CWindowData *, int, bool, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsurePriority@CStoryboard@@IEAAXXZ
    void _EnsurePriority();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z
    long _EnumerateWindows(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z
    static void _GetIdealRects(CWindowData *, tagRECT const *, tagRECT *, tagRECT * *, tagRECT *, tagRECT * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIdealWindowRect@CStoryboard@@KAXPEAVCWindowData@@_NPEBUtagRECT@@PEAU3@PEAPEAU3@@Z
    static void _GetIdealWindowRect(CWindowData *, bool, tagRECT const *, tagRECT *, tagRECT * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWPT@CStoryboard@@IEAAPEAVCWindowPropertyTracker@@XZ
    CWindowPropertyTracker * _GetWPT();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z
    bool _HasUsableBitmapResource(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z
    bool _InvokeWindowEnumCallback(CWindowData *, int, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ
    void _LogStoryboardEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z
    void _NotifyStoryboardState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyStoryboardTimeout@CStoryboard@@IEAAXXZ
    void _NotifyStoryboardTimeout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z
    long _RemoveAnimationComponent(CAnimationComponent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z
    long _StopTrackingWindow(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WillWindowEndCloaked@CStoryboard@@KA_NPEBVCWindowData@@@Z
    static bool _WillWindowEndCloaked(CWindowData const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WindowEnumCallback@CStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z
    virtual bool _WindowEnumCallback(CWindowData *, int, long *);
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `GetSpecialTargetInfo` | `enum SpecialTargetInfo` | `Accessor` | `Pdb` | No (PDB) |
| `OnAnimationStart` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnBeginTransitionRequest` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnTransitionWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnAnimationComplete` | `long` | `Method` | `Pdb` | No (PDB) |
| `_NotifyStoryboardState` | `void` | `Method` | `Pdb` | No (PDB) |
| `_Cleanup` | `void` | `Method` | `Pdb` | No (PDB) |
| `_LogStoryboardEvent` | `void` | `Method` | `Pdb` | No (PDB) |
| `ScheduleToRun` | `void` | `Method` | `Pdb` | No (PDB) |
| `Destroy` | `void` | `Method` | `Pdb` | No (PDB) |
| `ScheduleStartAnimation` | `long` | `Method` | `Pdb` | No (PDB) |
| `Abandon` | `void` | `Method` | `Pdb` | No (PDB) |
| `Release` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `ShouldBlock` | `bool` | `Method` | `Pdb` | No (PDB) |
| `IsEnabled` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `_GetIdealRects` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetIdealWindowRect` | `void` | `Method` | `Pdb` | No (PDB) |
| `_GetWPT` | `class CWindowPropertyTracker *` | `Method` | `Pdb` | No (PDB) |
| `_WillWindowEndCloaked` | `bool` | `Method` | `Pdb` | No (PDB) |
| `HasAnimationComponent` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `_CreateAndAddAnimationComponent` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CreateAndAddAnimationComponentWithRect` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CreateAndAddAnimationComponentControlReuse` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddAnimationComponent` | `long` | `Method` | `Pdb` | No (PDB) |
| `UseDComposition` | `bool` | `Method` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `~CStoryboard` | `void` | `Dtor` | `Pdb` | No (PDB) |
| `OnEndTransitionRequest` | `long` | `Method` | `Pdb` | No (PDB) |
| `_EnumerateWindows` | `long` | `Method` | `Pdb` | No (PDB) |
| `_InvokeWindowEnumCallback` | `bool` | `Method` | `Pdb` | No (PDB) |
| `ShouldAnimateShowWindow` | `bool` | `Method` | `Pdb` | No (PDB) |
| `CStoryboard` | `void` | `Ctor` | `Pdb` | No (PDB) |
| `Initialize` | `long` | `Method` | `Pdb` | No (PDB) |
| `_EnsurePriority` | `void` | `Method` | `Pdb` | No (PDB) |
| `IsRTL` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `_CreateAndAddNullComponentWithWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CreateAndAddNullComponentWithWindowScreen` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetCompSyncHandle` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `GetTimeout` | `unsigned long` | `Accessor` | `Pdb` | No (PDB) |
| `ScheduleStopAnimation` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CreateAndAddNullComponent` | `long` | `Method` | `Pdb` | No (PDB) |
| `ResizeToSnapshot` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetParentStoryboard` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `IsIndependent` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `ShouldCancelLivePreview` | `bool` | `Method` | `Pdb` | No (PDB) |
| `ShouldUseTransitionBitmap` | `bool` | `Method` | `Pdb` | No (PDB) |
| `UseCommitHandle` | `bool` | `Method` | `Pdb` | No (PDB) |
| `_HasUsableBitmapResource` | `bool` | `Method` | `Pdb` | No (PDB) |
| `SetStartTrigger` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `Block` | `void` | `Method` | `Pdb` | No (PDB) |
| `CanCoexist` | `bool` | `Method` | `Pdb` | No (PDB) |
| `FindAnimatingTarget` | `class CAnimationComponent *` | `Method` | `Pdb` | No (PDB) |
| `GetPVLTarget` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetTaggedWindow` | `class CWindowData *` | `Accessor` | `Pdb` | No (PDB) |
| `GhostTargets` | `void` | `Method` | `Pdb` | No (PDB) |
| `HasAnimatingOwnerWindow` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `OnStoryboardTimeout` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CreateAndAddBitmapAnimationComponent` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CreateAndAddDesktopAnimationComponent` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CreateAndAddGutterAnimationComponentsForRect` | `long` | `Method` | `Pdb` | No (PDB) |
| `_NotifyStoryboardTimeout` | `void` | `Method` | `Pdb` | No (PDB) |
| `_RemoveAnimationComponent` | `long` | `Method` | `Pdb` | No (PDB) |
| `_StopTrackingWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `_WindowEnumCallback` | `bool` | `Method` | `Pdb` | No (PDB) |
