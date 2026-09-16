#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 17 member(s).
namespace Windows::UI::Composition {
class CompositionManipulation {
public:
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionManipulation@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionManipulation@Composition@UI@Windows@@QEAA@XZ
    CompositionManipulation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EdgySetEdgeId@CompositionManipulation@Composition@UI@Windows@@QEAAXPEAUHSTRING__@@@Z
    void EdgySetEdgeId(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@CompositionManipulation@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@CompositionManipulation@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionManipulation@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionManipulation@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionManipulation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4SystemManipulationMode@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetChainingModeForAxis@CompositionManipulation@Composition@UI@Windows@@QEAAXW4ScrollAxis@@W4InteractionChainingMode@Interactions@234@@Z
    void SetChainingModeForAxis(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInertiaEnabledForAxis@CompositionManipulation@Composition@UI@Windows@@QEAAXW4ScrollAxis@@_N@Z
    void SetInertiaEnabledForAxis(int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceModifier@CompositionManipulation@Composition@UI@Windows@@QEAAXW4SourceModifierIndex@@PEAVConditionalExpressionAnimator@234@@Z
    void SetSourceModifier(int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInjectionAnimation@CompositionManipulation@Composition@UI@Windows@@QEAAJPEAVInjectionAnimation@234@@Z
    long StartInjectionAnimation(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionManipulation@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionManipulation();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageCallType@CompositionManipulation@Composition@UI@Windows@@MEAAPEBUMsgCallTypeDefinition@@XZ
    virtual MsgCallTypeDefinition const * GetMessageCallType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRegisterCallbackId@CompositionManipulation@Composition@UI@Windows@@MEAA_NXZ
    virtual bool ShouldRegisterCallbackId();
};
} // namespace Windows::UI::Composition
