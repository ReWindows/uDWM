# `global` :: `CDesktopManager`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `uDWM.dll`. Total members: **102**.

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

// Reconstructed from uDWM.dll by Windissect. 102 member(s).
class CDesktopManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ
    static CAnimationEngine * AcquireAnimationEngine();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z
    static long ActivateLivePreview(LivePreviewRequest *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z
    static bool AdjustDesktopWindowSize(HWND__*, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyColorizationParameters@CDesktopManager@@QEAA_NPEAVCGlassColorizationParameters@@@Z
    bool ApplyColorizationParameters(CGlassColorizationParameters *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z
    static bool CheckAnyPolicy(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAnyPreference@CDesktopManager@@SA_NK@Z
    static bool CheckAnyPreference(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPreferences@CDesktopManager@@SAXK@Z
    static void ClearPreferences(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDesktopManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z
    static long Create(IUnknown *, CDesktopManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDesktopWindowReplacement@CDesktopManager@@SAX_K@Z
    static void CreateDesktopWindowReplacement(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z
    static void DestroyDesktopWindowReplacement(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z
    static long EnableInputHooksHelper(bool, bool, unsigned short const *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z
    static long EnableLivePreviewInputHooks(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z
    long EnableMonitorRenderTargets(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDCompResources@CDesktopManager@@QEAAJXZ
    long EnsureDCompResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCCachedVisualImageProxy@@@Z
    static void FreeCVIIntoCache(int, int, CCachedVisualImageProxy *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccentColor@CDesktopManager@@QEAA_N_NPEAK@Z
    bool GetAccentColor(bool, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z
    static long GetCVIFromCache(int, int, CCachedVisualImageProxy * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorPrevalence@CDesktopManager@@QEAAKXZ
    unsigned long GetColorPrevalence();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2D1InteropDevice@CDesktopManager@@SAPEAUID2D1Device@@XZ
    static ID2D1Device * GetD2D1InteropDevice();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayDPIScale@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEAM@Z
    long GetDisplayDPIScale(HMONITOR__*, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z
    long GetDisplayRect(HMONITOR__*, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplaySDRWhiteLevel@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEAM@Z
    long GetDisplaySDRWhiteLevel(HMONITOR__*, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@_NPEAVCGlassColorizationParameters@@@Z
    void GetEffectiveGlassColorizationParameters(float, WindissectOpaque, bool, CGlassColorizationParameters *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@PEAK@Z
    void GetEffectiveWindowColorizationColor(float, WindissectOpaque, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalTime@CDesktopManager@@SANXZ
    static double GetGlobalTime();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGraphicsDeviceNoRef@CDesktopManager@@SAJPEAVCGraphicsDeviceGuard@CGraphicsDeviceManager@@PEAPEAUICompositionGraphicsDevice@Composition@UI@Windows@@@Z
    static long GetGraphicsDeviceNoRef(WindissectOpaque *, ::Windows::UI::Composition::ICompositionGraphicsDevice * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorRectAtIndex@CDesktopManager@@SA_NIPEAUtagRECT@@@Z
    static bool GetMonitorRectAtIndex(unsigned int, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z
    float GetScalingFactorForCVI(tagRECT const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z
    static void * GetTheme(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowAnimationSettings@CDesktopManager@@SAAEBUWindowAnimationSettings@1@XZ
    static WindissectOpaque const & GetWindowAnimationSettings();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAccentColor@CDesktopManager@@QEAA_N_N@Z
    bool HasAccentColor(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ
    long ImmediateCancelLivePreview();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCurrentSessionRemotable@CDesktopManager@@SA_NXZ
    static bool IsCurrentSessionRemotable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z
    static bool IsFeatureEnabled(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHighContrastMode@CDesktopManager@@SA_NXZ
    static bool IsHighContrastMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLivePreviewAllowed@CDesktopManager@@SA_NXZ
    static bool IsLivePreviewAllowed();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z
    static bool IsLogonDesktop(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMonitorVirtual@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEA_N@Z
    long IsMonitorVirtual(HMONITOR__*, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ
    static bool IsWindowAnimationEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ
    bool LoadAccentColorSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ModeChange@CDesktopManager@@QEAAJXZ
    long ModeChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ModernDDAWnfCallback@CDesktopManager@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long ModernDDAWnfCallback(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z
    static unsigned int MonitorDpiFromPoint(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ
    long NotifyRedirectionShutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGraphicsDeviceLost@CDesktopManager@@SAXXZ
    static void OnGraphicsDeviceLost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z
    long PostActivateLivePreview(MILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z
    long PostEventMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostFlickFeedback@CDesktopManager@@QEAAJ_NI@Z
    long PostFlickFeedback(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostInitializeComObjects@CDesktopManager@@QEAAJXZ
    long PostInitializeComObjects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostKeystateFeedback@CDesktopManager@@QEAAJ_NK@Z
    long PostKeystateFeedback(bool, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostStartAnimations@CDesktopManager@@QEAAJXZ
    long PostStartAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z
    static long RegisterForGlobalTimeChangeNotification(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterTimeline@CDesktopManager@@SAXPEAVCTimelineBase@@@Z
    static void RegisterTimeline(CTimelineBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z
    static long RegisterWindowClass(unsigned short const *, int64_t ( *)(HWND__*, unsigned int, uint64_t, int64_t), unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseCVICache@CDesktopManager@@SAXXZ
    static void ReleaseCVICache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z
    long SendRoundTripRequest(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z
    static long SendSwitchModeCommand(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z
    static void SetBackStop(CAccent *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForegroundWindowAsync@CDesktopManager@@SAJPEAUHWND__@@0_N@Z
    static long SetForegroundWindowAsync(HWND__*, HWND__*, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGlassColorizationColorResource@CDesktopManager@@QEAAJPEAVCGlassColorizationResources@@U?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@M@Z
    long SetGlassColorizationColorResource(CGlassColorizationResources *, WindissectOpaque, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferences@CDesktopManager@@SAXK@Z
    static void SetPreferences(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTimelineDirty@CDesktopManager@@SAXXZ
    static void SetTimelineDirty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowAnimation@CDesktopManager@@SAX_N@Z
    static void SetWindowAnimation(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupDPIValues@CDesktopManager@@QEAAXXZ
    void SetupDPIValues();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z
    void ShowDesktopWindowReplacement(bool, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TabletModeWnfCallback@CDesktopManager@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long TabletModeWnfCallback(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z
    static bool UnregisterForGlobalTimeChangeNotification(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z
    long UpdateSDRToHDRBoost(HMONITOR__*, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z
    long UpdateSettings(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTabletMode@CDesktopManager@@QEAAJH@Z
    long UpdateTabletMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ
    void UpdateWindowShadows();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AbandonActiveAnimations@CDesktopManager@@AEAAXXZ
    void AbandonActiveAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z
    void AdvanceTimelines(double);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDesktopManager@@AEAA@XZ
    CDesktopManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForActiveAnimations@CDesktopManager@@AEAA_NXZ
    bool CheckForActiveAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClampToMaxTextureSizeImpl@CDesktopManager@@AEAA?AUD2D_SIZE_F@@KK@Z
    D2D_SIZE_F ClampToMaxTextureSizeImpl(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ
    long CreateMonitorRenderTargets();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z
    static unsigned long DwmEventThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DwmLivePreviewWndProc@CDesktopManager@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t DwmLivePreviewWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDDisplayManager@CDesktopManager@@AEAAJXZ
    long EnsureDDisplayManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z
    long EnumerateMonitors(CDWMDisplaySet * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireTimeEvents@CDesktopManager@@AEAAJPEA_N@Z
    long FireTimeEvents(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z
    static void HandleThreadMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z
    long Initialize(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeComObjects@CDesktopManager@@AEAAJXZ
    long InitializeComObjects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeHighContrast@CDesktopManager@@AEAAXXZ
    void InitializeHighContrast();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadTheme@CDesktopManager@@AEAAJXZ
    long LoadTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAnimationTick@CDesktopManager@@CAJPEAT_LARGE_INTEGER@@0PEA_N@Z
    static long ProcessAnimationTick(_LARGE_INTEGER *, _LARGE_INTEGER *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadProductType@CDesktopManager@@AEAAXXZ
    void ReadProductType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCompResources@CDesktopManager@@AEAAXXZ
    void ReleaseDCompResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ
    long ReleaseMonitorRenderTargets();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupColorization@CDesktopManager@@AEAAXXZ
    void SetupColorization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnloadTheme@CDesktopManager@@AEAAXXZ
    void UnloadTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGlobalTime@CDesktopManager@@AEAAJNPEA_N@Z
    long UpdateGlobalTime(double, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRemotingMode@CDesktopManager@@AEAA_NXZ
    bool UpdateRemotingMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z
    long UpdateSceneImpl(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeWnf@CDesktopManager@@AEAAJXZ
    long _InitializeWnf();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsMultiMon@CDesktopManager@@AEBA_NXZ
    bool _IsMultiMon() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSameAsTargetCachedCVI@CDesktopManager@@CA_NHH@Z
    static bool _IsSameAsTargetCachedCVI(int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDesktopManager@@EEAA@XZ
    virtual ~CDesktopManager();
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `HandleThreadMessage` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateTabletMode` | `long` | `Method` | `Pdb` | No (PDB) |
| `ActivateLivePreview` | `long` | `Method` | `Pdb` | No (PDB) |
| `EnableLivePreviewInputHooks` | `long` | `Method` | `Pdb` | No (PDB) |
| `EnableInputHooksHelper` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetWindowAnimationSettings` | `struct CDesktopManager::WindowAnimationSettings const &` | `Accessor` | `Pdb` | No (PDB) |
| `RegisterForGlobalTimeChangeNotification` | `long` | `Method` | `Pdb` | No (PDB) |
| `RegisterTimeline` | `void` | `Method` | `Pdb` | No (PDB) |
| `CheckAnyPreference` | `bool` | `Method` | `Pdb` | No (PDB) |
| `GetTheme` | `void *` | `Accessor` | `Pdb` | No (PDB) |
| `DestroyDesktopWindowReplacement` | `void` | `Method` | `Pdb` | No (PDB) |
| `CreateDesktopWindowReplacement` | `void` | `Method` | `Pdb` | No (PDB) |
| `IsFeatureEnabled` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `ProcessAnimationTick` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateGlobalTime` | `long` | `Method` | `Pdb` | No (PDB) |
| `AdvanceTimelines` | `void` | `Method` | `Pdb` | No (PDB) |
| `FireTimeEvents` | `long` | `Method` | `Pdb` | No (PDB) |
| `CheckForActiveAnimations` | `bool` | `Method` | `Pdb` | No (PDB) |
| `GetGlobalTime` | `double` | `Accessor` | `Pdb` | No (PDB) |
| `SetGlassColorizationColorResource` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetEffectiveGlassColorizationParameters` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `GetColorPrevalence` | `unsigned long` | `Accessor` | `Pdb` | No (PDB) |
| `LoadAccentColorSettings` | `bool` | `Method` | `Pdb` | No (PDB) |
| `GetAccentColor` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsHighContrastMode` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsLogonDesktop` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `GetEffectiveWindowColorizationColor` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `AcquireAnimationEngine` | `class CAnimationEngine *` | `Method` | `Pdb` | No (PDB) |
| `UpdateSceneImpl` | `long` | `Method` | `Pdb` | No (PDB) |
| `AdjustDesktopWindowSize` | `bool` | `Method` | `Pdb` | No (PDB) |
| `PostStartAnimations` | `long` | `Method` | `Pdb` | No (PDB) |
| `UnregisterForGlobalTimeChangeNotification` | `bool` | `Method` | `Pdb` | No (PDB) |
| `IsWindowAnimationEnabled` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `GetD2D1InteropDevice` | `struct ID2D1Device *` | `Accessor` | `Pdb` | No (PDB) |
| `GetCVIFromCache` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `FreeCVIIntoCache` | `void` | `Method` | `Pdb` | No (PDB) |
| `_IsSameAsTargetCachedCVI` | `bool` | `Method` | `Pdb` | No (PDB) |
| `GetScalingFactorForCVI` | `float` | `Accessor` | `Pdb` | No (PDB) |
| `_IsMultiMon` | `bool` | `Method` | `Pdb` | No (PDB) |
| `UpdateSettings` | `long` | `Method` | `Pdb` | No (PDB) |
| `LoadTheme` | `long` | `Method` | `Pdb` | No (PDB) |
| `MonitorDpiFromPoint` | `unsigned int` | `Method` | `Pdb` | No (PDB) |
| `SetTimelineDirty` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetBackStop` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `EnumerateMonitors` | `long` | `Method` | `Pdb` | No (PDB) |
| `SendSwitchModeCommand` | `long` | `Method` | `Pdb` | No (PDB) |
| `EnsureDCompResources` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetWindowAnimation` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetupColorization` | `void` | `Method` | `Pdb` | No (PDB) |
| `ApplyColorizationParameters` | `bool` | `Method` | `Pdb` | No (PDB) |
| `CheckAnyPolicy` | `bool` | `Method` | `Pdb` | No (PDB) |
| `ClampToMaxTextureSizeImpl` | `struct D2D_SIZE_F` | `Method` | `Pdb` | No (PDB) |
| `HasAccentColor` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `SendRoundTripRequest` | `long` | `Method` | `Pdb` | No (PDB) |
| `ShowDesktopWindowReplacement` | `void` | `Method` | `Pdb` | No (PDB) |
| `DwmLivePreviewWndProc` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `UnloadTheme` | `void` | `Method` | `Pdb` | No (PDB) |
| `Create` | `long` | `Method` | `Pdb` | No (PDB) |
| `Initialize` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsLivePreviewAllowed` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `EnsureDDisplayManager` | `long` | `Method` | `Pdb` | No (PDB) |
| `ReleaseCVICache` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetupDPIValues` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateWindowShadows` | `void` | `Method` | `Pdb` | No (PDB) |
| `EnableMonitorRenderTargets` | `long` | `Method` | `Pdb` | No (PDB) |
| `RegisterWindowClass` | `long` | `Method` | `Pdb` | No (PDB) |
| `ReadProductType` | `void` | `Method` | `Pdb` | No (PDB) |
| `CreateMonitorRenderTargets` | `long` | `Method` | `Pdb` | No (PDB) |
| `DwmEventThreadProc` | `unsigned long` | `Method` | `Pdb` | No (PDB) |
| `InitializeComObjects` | `long` | `Method` | `Pdb` | No (PDB) |
| `ModeChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `TabletModeWnfCallback` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateRemotingMode` | `bool` | `Method` | `Pdb` | No (PDB) |
| `_InitializeWnf` | `long` | `Method` | `Pdb` | No (PDB) |
| `PostActivateLivePreview` | `long` | `Method` | `Pdb` | No (PDB) |
| `ReleaseMonitorRenderTargets` | `long` | `Method` | `Pdb` | No (PDB) |
| `ClearPreferences` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetDisplayRect` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetMonitorRectAtIndex` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `InitializeHighContrast` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetPreferences` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `GetGraphicsDeviceNoRef` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `IsCurrentSessionRemotable` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `CDesktopManager` | `void` | `Ctor` | `Pdb` | No (PDB) |
| `~CDesktopManager` | `void` | `Dtor` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `AbandonActiveAnimations` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetDisplayDPIScale` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetDisplaySDRWhiteLevel` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `ImmediateCancelLivePreview` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsMonitorVirtual` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `ModernDDAWnfCallback` | `long` | `Method` | `Pdb` | No (PDB) |
| `NotifyRedirectionShutdown` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnGraphicsDeviceLost` | `void` | `Method` | `Pdb` | No (PDB) |
| `PostEventMessage` | `long` | `Method` | `Pdb` | No (PDB) |
| `PostFlickFeedback` | `long` | `Method` | `Pdb` | No (PDB) |
| `PostInitializeComObjects` | `long` | `Method` | `Pdb` | No (PDB) |
| `PostKeystateFeedback` | `long` | `Method` | `Pdb` | No (PDB) |
| `ReleaseDCompResources` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetForegroundWindowAsync` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateSDRToHDRBoost` | `long` | `Method` | `Pdb` | No (PDB) |
