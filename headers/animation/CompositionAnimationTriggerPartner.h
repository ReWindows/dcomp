#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 14 member(s).
namespace Windows::UI::Composition::Internal {
class CompositionAnimationTriggerPartner {
public:
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@QEAA@XZ
    CompositionAnimationTriggerPartner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@345@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Message_TriggerFired_Callback@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@QEAAJXZ
    long Message_TriggerFired_Callback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAVExpressionAnimation@345@AEBV?$span@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@$0?0@gsl@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionAnimationTriggerPartner();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageCallType@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@MEAAPEBUMsgCallTypeDefinition@@XZ
    virtual MsgCallTypeDefinition const * GetMessageCallType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRegisterCallbackId@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@MEAA_NXZ
    virtual bool ShouldRegisterCallbackId();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateAnimators@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@AEAAJXZ
    long GenerateAnimators();
};
} // namespace Windows::UI::Composition::Internal
