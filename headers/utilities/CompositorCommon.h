#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 95 member(s).
namespace Windows::UI::Composition {
class CompositorCommon {
public:
    class Api;
    class CaptureTest;
    class DCPrivate;
    class Native;
    class Partner;
    class Restricted;
    class Test;
    class VelocityPartnerProjectedShadow;
    class VelocityProjectedShadow;
    class Velocity_RadialGradient;
    class VisualSurface;
    class XUCPrivate;
    class XUCPrivate2;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDeferredCallbackObject@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVIDeferredCallbackObject@234@@Z
    void AddDeferredCallbackObject(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDeferredPropertyChangeNotification@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVProxyObject@234@I@Z
    void AddDeferredPropertyChangeNotification(WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWeakReference@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVCompositionObject@234@@Z
    void ClearWeakReference(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBackEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@MPEAPEAVCompositionEasingFunction@234@@Z
    long CreateBackEasingFunction(int, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBackdropBrush@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVCompositionBackdropBrush@234@@Z
    long CreateBackdropBrush(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBounceEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@HMPEAPEAVCompositionEasingFunction@234@@Z
    long CreateBounceEasingFunction(int, int, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateColorBrushWithColor@CompositorCommon@Composition@UI@Windows@@QEAAJUColor@34@PEAPEAVCompositionColorBrush@234@@Z
    long CreateColorBrushWithColor(::Windows::UI::Color, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateColorGradientStop@CompositorCommon@Composition@UI@Windows@@QEAAJMAEBU_D3DCOLORVALUE@@PEAPEAVCompositionColorGradientStop@234@@Z
    long CreateColorGradientStop(float, _D3DCOLORVALUE const &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCommitCompletionWaiter@CompositorCommon@Composition@UI@Windows@@QEAAJ_NPEAPEAVCommitCompletionWaiter@234@@Z
    long CreateCommitCompletionWaiter(bool, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositionAnimationTriggerPartner@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVExpressionAnimation@234@AEBV?$span@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@$0?0@gsl@@PEAPEAVCompositionAnimationTriggerPartner@Internal@234@@Z
    long CreateCompositionAnimationTriggerPartner(WindissectOpaque *, WindissectOpaque const &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositionDynamicTexture@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVCompositionDynamicTexture@Internal@234@@Z
    long CreateCompositionDynamicTexture(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositionMagnifierBrush@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVCompositionMagnifierBrush@Internal@234@@Z
    long CreateCompositionMagnifierBrush(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositionSurfaceForHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAUICompositionSurface@234@@Z
    long CreateCompositionSurfaceForHandle(void *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositionSurfaceForSwapChain@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAPEAUICompositionSurface@234@@Z
    long CreateCompositionSurfaceForSwapChain(IUnknown *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateContainerShape@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVCompositionContainerShape@234@@Z
    long CreateContainerShape(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateContainerVisual@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVContainerVisual@234@@Z
    long CreateContainerVisual(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCubicBezierEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAJAEAUVector2@Numerics@Foundation@4@0PEAPEAVCubicBezierEasingFunction@234@@Z
    long CreateCubicBezierEasingFunction(WindissectOpaque&, WindissectOpaque&, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDesktopWindowTarget@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUHWND__@@_NPEAPEAVDesktopWindowTarget@Desktop@234@@Z
    long CreateDesktopWindowTarget(HWND__*, bool, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEffectFactory@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUIGraphicsEffect@Effects@Graphics@4@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@PEAPEAVCompositionEffectFactory@234@@Z
    long CreateEffectFactory(::Windows::Graphics::Effects::IGraphicsEffect *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateElasticEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@HMPEAPEAVCompositionEasingFunction@234@@Z
    long CreateElasticEasingFunction(int, int, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateExponentialEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@MPEAPEAVCompositionEasingFunction@234@@Z
    long CreateExponentialEasingFunction(int, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateExpressionAnimation@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAVExpressionAnimation@234@@Z
    long CreateExpressionAnimation(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGeometricClip@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVCompositionGeometry@234@PEAPEAVCompositionGeometricClip@234@@Z
    long CreateGeometricClip(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGraphicsDevice@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAPEAVCompositionGraphicsDevice@234@@Z
    long CreateGraphicsDevice(IUnknown *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHoverPointerSource@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVVisual@234@PEAPEAVCompositionHoverPointerSource@234@@Z
    long CreateHoverPointerSource(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInsetClip@CompositorCommon@Composition@UI@Windows@@QEAAJMMMMPEAPEAVInsetClip@234@@Z
    long CreateInsetClip(float, float, float, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLinearEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVLinearEasingFunction@234@@Z
    long CreateLinearEasingFunction(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNotificationDeferral@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUICompositionDeferralHandlerPrivate@Private@234@IPEAPEAUICompositionNotificationDeferral@234@@Z
    long CreateNotificationDeferral(WindissectOpaque *, unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePathGeometry@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVCompositionPath@234@PEAPEAVCompositionPathGeometry@234@@Z
    long CreatePathGeometry(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePowerEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@MPEAPEAVCompositionEasingFunction@234@@Z
    long CreatePowerEasingFunction(int, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateProjectedShadowCaster@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVCompositionProjectedShadowCaster@234@@Z
    long CreateProjectedShadowCaster(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePropertySet@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVCompositionPropertySet@234@@Z
    long CreatePropertySet(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRectangleClip@CompositorCommon@Composition@UI@Windows@@QEAAJMMMMUVector2@Numerics@Foundation@4@000PEAPEAVRectangleClip@234@@Z
    long CreateRectangleClip(float, float, float, float, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRedirectVisual@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVVisual@234@PEAPEAVRedirectVisual@234@@Z
    long CreateRedirectVisual(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateShapeVisual@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVShapeVisual@234@@Z
    long CreateShapeVisual(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedDistantLight@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVDistantLight@234@@Z
    long CreateSharedDistantLight(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedHostProjectedShadowCaster@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVCompositionProjectedShadowCaster@234@@Z
    long CreateSharedHostProjectedShadowCaster(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedTarget@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVVisualTarget@234@@Z
    long CreateSharedTarget(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedVisual@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVVisual@234@@Z
    long CreateSharedVisual(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedVisualReferenceController@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVVisual@234@PEAPEAVVisualReferenceController@Private@234@@Z
    long CreateSharedVisualReferenceController(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSpriteShape@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVCompositionGeometry@234@PEAPEAVCompositionSpriteShape@234@@Z
    long CreateSpriteShape(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStepEasingFunctionWithStepCount@CompositorCommon@Composition@UI@Windows@@QEAAJHPEAPEAVStepEasingFunction@234@@Z
    long CreateStepEasingFunctionWithStepCount(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurfaceBrushWithSurface@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@0PEAPEAVCompositionSurfaceBrush@234@@Z
    long CreateSurfaceBrushWithSurface(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVector2KeyFrameAnimation@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVVector2KeyFrameAnimation@234@@Z
    long CreateVector2KeyFrameAnimation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVisualReferenceController@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVVisual@234@PEAPEAVVisualReferenceController@Private@234@@Z
    long CreateVisualReferenceController(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationGlobalConfiguration@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationGlobalConfiguration@234@XZ
    WindissectOpaque * GetAnimationGlobalConfiguration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBatchController@CompositorCommon@Composition@UI@Windows@@QEAAXW4CompositionBatchTypes@234@PEAPEAVBatchController@234@@Z
    void GetBatchController(int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationBindingManager@234@XZ
    WindissectOpaque * GetBindingManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommitBatch@CompositorCommon@Composition@UI@Windows@@QEAAJW4CompositionBatchTypes@234@PEAPEAVCompositionCommitBatch@234@@Z
    long GetCommitBatch(int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAPEAVCompositionEasingFunction@234@XZ
    WindissectOpaque * GetDefaultEasingFunction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteractionTrackerBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVInteractionTrackerBindingManager@Interactions@234@XZ
    WindissectOpaque * GetInteractionTrackerBindingManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemMessageSession@CompositorCommon@Composition@UI@Windows@@QEAA?AV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@XZ
    WindissectOpaque GetSystemMessageSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalCommit_Callback@CompositorCommon@Composition@UI@Windows@@QEAAJPEAX@Z
    long InternalCommit_Callback(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeOnSessionThread_NoLock@CompositorCommon@Composition@UI@Windows@@UEAAXP6AJPEAX@Z0@Z
    virtual void InvokeOnSessionThread_NoLock(long ( *)(void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkDirty@CompositorCommon@Composition@UI@Windows@@QEAAXXZ
    void MarkDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyBatchObjectCompleted@CompositorCommon@Composition@UI@Windows@@QEAAXW4CompositionBatchTypes@234@PEAUBatchMember@234@@Z
    void NotifyBatchObjectCompleted(int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedClientProjectedShadowCasterFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVCompositionProjectedShadowCaster@234@@Z
    long OpenSharedClientProjectedShadowCasterFromHandle(void *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedInteractionFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVCompositionPointerEventRouter@234@@Z
    long OpenSharedInteractionFromHandle(void *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedManipulationTransformFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVManipulationTransform@234@@Z
    long OpenSharedManipulationTransformFromHandle(void *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedReadCaptureControllerFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVSharedReadCaptureController@Internal@234@@Z
    long OpenSharedReadCaptureControllerFromHandle(void *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedResourceHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAPEAX@Z
    long OpenSharedResourceHandle(WindissectOpaque *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedTargetFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVVisualTarget@234@@Z
    long OpenSharedTargetFromHandle(void *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedVisualFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVVisual@234@@Z
    long OpenSharedVisualFromHandle(void *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedVisualReferenceFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVVisualReference@Internal@234@@Z
    long OpenSharedVisualReferenceFromHandle(void *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedWriteCaptureControllerFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVSharedWriteCaptureController@Internal@234@@Z
    long OpenSharedWriteCaptureControllerFromHandle(void *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterBatchObject@CompositorCommon@Composition@UI@Windows@@QEAAXW4CompositionBatchTypes@234@PEAUBatchMember@234@@Z
    void RegisterBatchObject(int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDeferredCallbackObject@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVIDeferredCallbackObject@234@@Z
    void RemoveDeferredCallbackObject(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDeferredPropertyChangeNotification@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVProxyObject@234@I_N@Z
    void RemoveDeferredPropertyChangeNotification(WindissectOpaque *, unsigned int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetComment@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z
    long SetComment(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGlobalPlaybackRate@CompositorCommon@Composition@UI@Windows@@QEAAJM@Z
    long SetGlobalPlaybackRate(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateCompositionBatchType@CompositorCommon@Composition@UI@Windows@@QEAAJW4CompositionBatchTypes@234@@Z
    long ValidateCompositionBatchType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_OnCallbackMessage_NoLock@CompositorCommon@Composition@UI@Windows@@SAJPEBX00I@Z
    static long s_OnCallbackMessage_NoLock(void const *, void const *, void const *, unsigned int);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositorCommon@Composition@UI@Windows@@IEAA@XZ
    CompositorCommon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositorCommon@Composition@UI@Windows@@MEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleCommitNeeded_Callback@CompositorCommon@Composition@UI@Windows@@MEAAXXZ
    virtual void HandleCommitNeeded_Callback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDeferStateTransition_Callback@CompositorCommon@Composition@UI@Windows@@MEAAX_N@Z
    virtual void NotifyDeferStateTransition_Callback(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostDestroy@CompositorCommon@Composition@UI@Windows@@MEAAXXZ
    virtual void PostDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositorCommon@Composition@UI@Windows@@IEAAJPEAUIDispatcherQueue@System@4@PEAUIUnknown@@PEAVCompositorController@Core@234@W4CreationFlags@1234@PEAUIMessageSessionStable@@W4DeviceVersion@DirectComposition@@@Z
    long RuntimeClassInitialize(::Windows::System::IDispatcherQueue *, IUnknown *, WindissectOpaque *, int, IMessageSessionStable *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositorCommon@Composition@UI@Windows@@MEAA@XZ
    virtual ~CompositorCommon();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginNewBatchCycle@CompositorCommon@Composition@UI@Windows@@AEAAXXZ
    void BeginNewBatchCycle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallCommit_NoLock@CompositorCommon@Composition@UI@Windows@@AEAAJXZ
    long CallCommit_NoLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitCompletionCallback@CompositorCommon@Composition@UI@Windows@@CAJPEAXK0@Z
    static long CommitCompletionCallback(void *, unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ
    void DisableMessageGroup();
    // Category: Method | Source: PE Export
    // Symbol: ?DummyMessageGroupCancelProc@CompositorCommon@Composition@UI@Windows@@CAJPEAX@Z
    static long DummyMessageGroupCancelProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DwmMessageAvailableCallback@CompositorCommon@Composition@UI@Windows@@CAJPEAXK0@Z
    static long DwmMessageAvailableCallback(void *, unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ
    void EnableMessageGroup();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedHandleFromIUnknown_NoLock@CompositorCommon@Composition@UI@Windows@@CAJPEAUIUnknown@@PEAPEAX@Z
    static long GetSharedHandleFromIUnknown_NoLock(IUnknown *, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWeakReferenceBase@CompositorCommon@Composition@UI@Windows@@AEAAJPEAVCompositionObject@234@PEAPEAVCWeakReferenceBase@@@Z
    long GetWeakReferenceBase(WindissectOpaque *, CWeakReferenceBase * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeDeferredCallbacks_Callback@CompositorCommon@Composition@UI@Windows@@AEAAJXZ
    long InvokeDeferredCallbacks_Callback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommitCompletion@CompositorCommon@Composition@UI@Windows@@AEAAJXZ
    long OnCommitCompletion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDwmMessageSessionForExternalDispatch@CompositorCommon@Composition@UI@Windows@@AEAAJPEAUIMessageSession@@@Z
    long RegisterDwmMessageSessionForExternalDispatch(IMessageSession *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StaticCallCommit_NoLock@CompositorCommon@Composition@UI@Windows@@CAJPEAX@Z
    static long StaticCallCommit_NoLock(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Static_InvokeDeferredCallbacks_NoLock@CompositorCommon@Composition@UI@Windows@@CAJPEAX@Z
    static long Static_InvokeDeferredCallbacks_NoLock(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterCommitCompletionWait@CompositorCommon@Composition@UI@Windows@@AEAAXXZ
    void UnregisterCommitCompletionWait();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterDwmMessageSessionForExternalDispatch@CompositorCommon@Composition@UI@Windows@@AEAAXXZ
    void UnregisterDwmMessageSessionForExternalDispatch();
};
} // namespace Windows::UI::Composition
