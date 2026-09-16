#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 67 member(s).
namespace Windows::UI::Composition {
class VisualCommon {
public:
    class Api;
    class Partner;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLight@VisualCommon@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z
    long AddLight(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureAsync@VisualCommon@Composition@UI@Windows@@QEAAJPEAVVisual@234@PEAVCompositionGraphicsDevice@234@HHW4DirectXPixelFormat@DirectX@Graphics@4@W4DirectXAlphaMode@894@MPEAPEAVVisualCapture@234@@Z
    long CaptureAsync(WindissectOpaque *, WindissectOpaque *, int, int, int, int, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@VisualCommon@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableHeatMap@VisualCommon@Composition@UI@Windows@@QEAAXW4Enum@MilHeatMapMode@@AEBU_D3DCOLORVALUE@@W4CompositionDebugOverdrawContentKinds@Diagnostics@234@@Z
    void EnableHeatMap(int, _D3DCOLORVALUE const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnchorPoint@VisualCommon@Composition@UI@Windows@@QEAAAEBUVector2@Numerics@Foundation@4@XZ
    WindissectOpaque & GetAnchorPoint();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@VisualCommon@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCenterPoint@VisualCommon@Composition@UI@Windows@@QEAAAEBUVector3@Numerics@Foundation@4@XZ
    WindissectOpaque & GetCenterPoint();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClosedEventHandle@VisualCommon@Composition@UI@Windows@@QEAAJPEAPEAX@Z
    long GetClosedEventHandle(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageCallType@VisualCommon@Composition@UI@Windows@@UEAAPEBUMsgCallTypeDefinition@@XZ
    virtual MsgCallTypeDefinition const * GetMessageCallType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateNonDefaultPointerEventRouter@VisualCommon@Composition@UI@Windows@@QEAAJPEAPEAUICompositionInteractionPartner@234@@Z
    long GetOrCreateNonDefaultPointerEventRouter(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrientation@VisualCommon@Composition@UI@Windows@@QEAAAEBUQuaternion@Numerics@Foundation@4@XZ
    WindissectOpaque const & GetOrientation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwnerNoRef@VisualCommon@Composition@UI@Windows@@QEAAPEAUIVisualOwnerPrivate@Private@234@XZ
    WindissectOpaque * GetOwnerNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerEventRouter@VisualCommon@Composition@UI@Windows@@QEAAJPEAPEAUICompositionInteractionPartner@234@@Z
    long GetPointerEventRouter(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRotationAngle@VisualCommon@Composition@UI@Windows@@QEAAMXZ
    float GetRotationAngle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRotationAngleInDegrees@VisualCommon@Composition@UI@Windows@@QEAAMXZ
    float GetRotationAngleInDegrees();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRotationAxis@VisualCommon@Composition@UI@Windows@@QEAAAEBUVector3@Numerics@Foundation@4@XZ
    WindissectOpaque & GetRotationAxis();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScale@VisualCommon@Composition@UI@Windows@@QEAAAEBUVector3@Numerics@Foundation@4@XZ
    WindissectOpaque & GetScale();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChild@VisualCommon@Composition@UI@Windows@@QEAAJPEAVVisual@234@_N0@Z
    long InsertChild(WindissectOpaque *, bool, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@VisualCommon@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllChildren@VisualCommon@Composition@UI@Windows@@QEAAJXZ
    long RemoveAllChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveChild@VisualCommon@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z
    long RemoveChild(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveLight@VisualCommon@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z
    long RemoveLight(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePointerEventRouter@VisualCommon@Composition@UI@Windows@@QEAAXXZ
    void RemovePointerEventRouter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSharedLight@VisualCommon@Composition@UI@Windows@@QEAAJPEAVSharedLight@Private@234@W4LightBehavior@234@@Z
    long RemoveSharedLight(WindissectOpaque *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnchorPoint@VisualCommon@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z
    long SetAnchorPoint(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackfaceVisibility@VisualCommon@Composition@UI@Windows@@QEAAJW4CompositionBackfaceVisibility@234@@Z
    long SetBackfaceVisibility(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorderMode@VisualCommon@Composition@UI@Windows@@QEAAJW4CompositionBorderMode@234@@Z
    long SetBorderMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterPoint@VisualCommon@Composition@UI@Windows@@QEAAJAEBUVector3@Numerics@Foundation@4@@Z
    long SetCenterPoint(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClip@VisualCommon@Composition@UI@Windows@@QEAAXPEAVCompositionClip@234@@Z
    void SetClip(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositeMode@VisualCommon@Composition@UI@Windows@@QEAAJW4CompositionCompositeMode@234@@Z
    long SetCompositeMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDepthMode@VisualCommon@Composition@UI@Windows@@QEAAJW4CompositionDepthMode@Private@234@@Z
    long SetDepthMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@VisualCommon@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputSinkHandle@VisualCommon@Composition@UI@Windows@@QEAAJPEAX@Z
    long SetInputSinkHandle(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInteraction@VisualCommon@Composition@UI@Windows@@QEAAXPEAVCompositionPointerEventRouter@234@@Z
    void SetInteraction(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOpacity@VisualCommon@Composition@UI@Windows@@QEAAJM@Z
    long SetOpacity(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOrientation@VisualCommon@Composition@UI@Windows@@QEAAJAEBUQuaternion@Numerics@Foundation@4@@Z
    long SetOrientation(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwnerNoRef@VisualCommon@Composition@UI@Windows@@QEAAXPEAUIVisualOwnerPrivate@Private@234@_N@Z
    void SetOwnerNoRef(WindissectOpaque *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParentForTransform@VisualCommon@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z
    long SetParentForTransform(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParentForTransformFromReference@VisualCommon@Composition@UI@Windows@@QEAAJPEAVVisualReference@Internal@234@@Z
    long SetParentForTransformFromReference(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyChangedListener@VisualCommon@Composition@UI@Windows@@QEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUICompositionPropertyChangedListenerPartner@234@@Z
    long SetPropertyChangedListener(int, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRasterizationScaleOverride@VisualCommon@Composition@UI@Windows@@QEAAJM@Z
    long SetRasterizationScaleOverride(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotationAngle@VisualCommon@Composition@UI@Windows@@QEAAJM@Z
    long SetRotationAngle(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotationAngleInDegrees@VisualCommon@Composition@UI@Windows@@QEAAJM@Z
    long SetRotationAngleInDegrees(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotationAxis@VisualCommon@Composition@UI@Windows@@QEAAJAEBUVector3@Numerics@Foundation@4@@Z
    long SetRotationAxis(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScale@VisualCommon@Composition@UI@Windows@@QEAAJAEBUVector3@Numerics@Foundation@4@@Z
    long SetScale(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUpVectorOverride@VisualCommon@Composition@UI@Windows@@QEAAJUVector3@Numerics@Foundation@4@@Z
    long SetUpVectorOverride(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowBackgroundTreatment@VisualCommon@Composition@UI@Windows@@QEAAXPEAVCompositionBrush@234@@Z
    void SetWindowBackgroundTreatment(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VisualCommon@Composition@UI@Windows@@UEAA@XZ
    virtual ~VisualCommon();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotificationId@VisualCommon@Composition@UI@Windows@@MEBA?AW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@I@Z
    virtual int GetNotificationId(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@VisualCommon@Composition@UI@Windows@@IEAAJPEAVCompositor@234@I_NPEAX@Z
    long RuntimeClassInitialize(WindissectOpaque *, unsigned int, bool, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRegisterCallbackId@VisualCommon@Composition@UI@Windows@@MEAA_NXZ
    virtual bool ShouldRegisterCallbackId();
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateChanges@VisualCommon@Composition@UI@Windows@@MEAAJXZ
    virtual long UpdateChanges();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanUpAllChildren@VisualCommon@Composition@UI@Windows@@AEAAXXZ
    void CleanUpAllChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureComponentTransform@VisualCommon@Composition@UI@Windows@@AEAAJXZ
    long EnsureComponentTransform();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSparse_ExcludedLightsWeak@VisualCommon@Composition@UI@Windows@@AEBAPEAV?$DynArray@PEAVCompositionLight@Composition@UI@Windows@@$0A@@@XZ
    WindissectOpaque * GetSparse_ExcludedLightsWeak() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSparse_LightsWeak@VisualCommon@Composition@UI@Windows@@AEBAPEAV?$DynArray@PEAVCompositionLight@Composition@UI@Windows@@$0A@@@XZ
    WindissectOpaque * GetSparse_LightsWeak() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSparse_Opacity@VisualCommon@Composition@UI@Windows@@AEBAMXZ
    float GetSparse_Opacity() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSparse_RelativeOffsetAdjustment@VisualCommon@Composition@UI@Windows@@AEBA?AUVector3@Numerics@Foundation@4@XZ
    WindissectOpaque GetSparse_RelativeOffsetAdjustment() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSparse_RelativeSizeAdjustment@VisualCommon@Composition@UI@Windows@@AEBA?AUVector2@Numerics@Foundation@4@XZ
    WindissectOpaque GetSparse_RelativeSizeAdjustment() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSparse_ExcludedLightsWeak@VisualCommon@Composition@UI@Windows@@AEAAXPEAV?$DynArray@PEAVCompositionLight@Composition@UI@Windows@@$0A@@@@Z
    void SetSparse_ExcludedLightsWeak(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSparse_LightsWeak@VisualCommon@Composition@UI@Windows@@AEAAXPEAV?$DynArray@PEAVCompositionLight@Composition@UI@Windows@@$0A@@@@Z
    void SetSparse_LightsWeak(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSparse_Opacity@VisualCommon@Composition@UI@Windows@@AEAAXM@Z
    void SetSparse_Opacity(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSparse_RasterizationScaleOverride@VisualCommon@Composition@UI@Windows@@AEAAXM@Z
    void SetSparse_RasterizationScaleOverride(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSparse_RelativeOffsetAdjustment@VisualCommon@Composition@UI@Windows@@AEAAXUVector3@Numerics@Foundation@4@@Z
    void SetSparse_RelativeOffsetAdjustment(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSparse_RelativeSizeAdjustment@VisualCommon@Composition@UI@Windows@@AEAAXUVector2@Numerics@Foundation@4@@Z
    void SetSparse_RelativeSizeAdjustment(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSharedLights@VisualCommon@Composition@UI@Windows@@AEAAJW4LightBehavior@234@@Z
    long UpdateSharedLights(int);
};
} // namespace Windows::UI::Composition
