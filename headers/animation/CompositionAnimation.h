#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 45 member(s).
namespace Windows::UI::Composition {
class CompositionAnimation {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionAnimation@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllParameters@CompositionAnimation@Composition@UI@Windows@@QEAAJXZ
    long ClearAllParameters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z
    long ClearParameter(HSTRING__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionAnimation@Composition@UI@Windows@@QEAA@XZ
    CompositionAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionAnimation@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@CompositionAnimation@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInitialValueExpressions@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAPEAVInitialValueExpressionCollection@234@@Z
    long GetInitialValueExpressions(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTarget@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAPEAUHSTRING__@@@Z
    void GetTarget(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasInitialValueExpressions@CompositionAnimation@Composition@UI@Windows@@QEBA_NXZ
    bool HasInitialValueExpressions() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionAnimation@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionAnimation@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBooleanParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@_N@Z
    long SetBooleanParameter(HSTRING__*, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@U_D3DCOLORVALUE@@@Z
    long SetColorParameter(HSTRING__*, _D3DCOLORVALUE);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDebuggingInformation@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAVExpressionObjectPropertyInfo@@PEAVCompositionPropertyAnimator@234@@Z
    long SetDebuggingInformation(ExpressionObjectPropertyInfo *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExpressionReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAUIAnimationObject@234@@Z
    long SetExpressionReferenceParameter(HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMatrix3x2Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUMatrix3x2@Numerics@Foundation@4@@Z
    long SetMatrix3x2Parameter(HSTRING__*, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMatrix4x4Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUMatrix4x4@Numerics@Foundation@4@@Z
    long SetMatrix4x4Parameter(HSTRING__*, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQuaternionParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUQuaternion@Numerics@Foundation@4@@Z
    long SetQuaternionParameter(HSTRING__*, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAVCompositionObject@234@_N@Z
    long SetReferenceParameter(HSTRING__*, WindissectOpaque *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScalarParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@M@Z
    long SetScalarParameter(HSTRING__*, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTarget@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAUHSTRING__@@@Z
    void SetTarget(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVector2Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector2@Numerics@Foundation@4@@Z
    long SetVector2Parameter(HSTRING__*, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVector3Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector3@Numerics@Foundation@4@@Z
    long SetVector3Parameter(HSTRING__*, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVector4Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector4@Numerics@Foundation@4@@Z
    long SetVector4Parameter(HSTRING__*, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@PEAUVector3@Numerics@Foundation@4@@Z
    int TryGetConstantParameter(HSTRING__*, WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetConstantParameter@CompositionAnimation@Composition@UI@Windows@@QEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@PEAU_D3DCOLORVALUE@@@Z
    int TryGetConstantParameter(HSTRING__*, _D3DCOLORVALUE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetParameterType@CompositionAnimation@Composition@UI@Windows@@QEAA_NPEAUHSTRING__@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    bool TryGetParameterType(HSTRING__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@PEAPEAVCompositionObject@234@PEAW4AnimationReferenceType@@@Z
    int TryGetReferenceParameter(HSTRING__*, WindissectOpaque * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryPopulateAnimationObjectParametersInfo@CompositionAnimation@Composition@UI@Windows@@QEAAX_N@Z
    void TryPopulateAnimationObjectParametersInfo(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionAnimation@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionAnimation();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSparse_AnimationScenarioGUID@CompositionAnimation@Composition@UI@Windows@@IEBA?AU_GUID@@XZ
    _GUID GetSparse_AnimationScenarioGUID() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateCache@CompositionAnimation@Composition@UI@Windows@@IEAAXXZ
    void InvalidateCache();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSparse_AnimationScenarioGUID@CompositionAnimation@Composition@UI@Windows@@IEAAXU_GUID@@@Z
    void SetSparse_AnimationScenarioGUID(_GUID);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementForKey@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAUHSTRING__@@_NPEAPEAVParameterEntry@@PEA_N@Z
    void GetElementForKey(HSTRING__*, bool, ParameterEntry * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnParameterEntryChange@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAVParameterEntry@@_N@Z
    void OnParameterEntryChange(ParameterEntry *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetParameterEntry@CompositionAnimation@Composition@UI@Windows@@AEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVParameterEntry@@@Z
    int TryGetParameterEntry(HSTRING__*, int, ParameterEntry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateKey@CompositionAnimation@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@@Z
    long ValidateKey(HSTRING__*);
};
} // namespace Windows::UI::Composition
