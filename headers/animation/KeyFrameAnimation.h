#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 26 member(s).
namespace Windows::UI::Composition {
class KeyFrameAnimation {
public:
    class Api;
    class Internal;
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@KeyFrameAnimation@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@KeyFrameAnimation@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@KeyFrameAnimation@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertBooleanKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJM_N@Z
    long InsertBooleanKeyFrame(float, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertColorKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAU_D3DCOLORVALUE@@PEAVCompositionEasingFunction@234@@Z
    long InsertColorKeyFrame(float, _D3DCOLORVALUE &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertExpressionKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMPEAUHSTRING__@@PEAVCompositionEasingFunction@234@@Z
    long InsertExpressionKeyFrame(float, HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertQuaternionKeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAUQuaternion@Numerics@Foundation@4@PEAVCompositionEasingFunction@234@@Z
    long InsertQuaternionKeyFrame(float, WindissectOpaque &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertVector2KeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAUVector2@Numerics@Foundation@4@PEAVCompositionEasingFunction@234@@Z
    long InsertVector2KeyFrame(float, WindissectOpaque&, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertVector3KeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAUVector3@Numerics@Foundation@4@PEAVCompositionEasingFunction@234@@Z
    long InsertVector3KeyFrame(float, WindissectOpaque&, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertVector4KeyFrame@KeyFrameAnimation@Composition@UI@Windows@@QEAAJMAEAUVector4@Numerics@Foundation@4@PEAVCompositionEasingFunction@234@@Z
    long InsertVector4KeyFrame(float, WindissectOpaque&, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0KeyFrameAnimation@Composition@UI@Windows@@QEAA@XZ
    KeyFrameAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalTypeSpecificData@KeyFrameAnimation@Composition@UI@Windows@@UEAAJIPEAPEAVKeyFrameAnimationResources@234@@Z
    virtual long MarshalTypeSpecificData(unsigned int, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@KeyFrameAnimation@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@KeyFrameAnimation@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@KeyFrameAnimation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDelayBehavior@KeyFrameAnimation@Composition@UI@Windows@@QEAAJW4AnimationDelayBehavior@234@@Z
    long SetDelayBehavior(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDelayTime@KeyFrameAnimation@Composition@UI@Windows@@QEAAJUTimeSpan@Foundation@4@@Z
    long SetDelayTime(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirection@KeyFrameAnimation@Composition@UI@Windows@@QEAAJW4AnimationDirection@234@@Z
    long SetDirection(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIterationCount2@KeyFrameAnimation@Composition@UI@Windows@@QEAAJM@Z
    long SetIterationCount2(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStopBehavior@KeyFrameAnimation@Composition@UI@Windows@@QEAAJW4AnimationStopBehavior@234@@Z
    long SetStopBehavior(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1KeyFrameAnimation@Composition@UI@Windows@@UEAA@XZ
    virtual ~KeyFrameAnimation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinition@@PEAVCompositionEasingFunction@234@@Z
    long InsertKeyFrameHelper(float, KeyframeValueDefinition &, WindissectOpaque *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeyframeData@KeyFrameAnimation@Composition@UI@Windows@@AEAAJPEAUKeyframeList@@MAEAUKeyframeValueDefinition@@PEAVCompositionEasingFunction@234@@Z
    long SetKeyframeData(KeyframeList *, float, KeyframeValueDefinition &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateKeyAndOutputType@KeyFrameAnimation@Composition@UI@Windows@@AEAAJMW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    long ValidateKeyAndOutputType(float, int);
};
} // namespace Windows::UI::Composition
