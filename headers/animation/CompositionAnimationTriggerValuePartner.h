#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Windows::UI::Composition::Internal {
class CompositionAnimationTriggerValuePartner {
public:
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAUHSTRING__@@PEAUIAnimationObject@345@PEAUICompositionAnimationBase@345@@Z
    long RuntimeClassInitialize(WindissectOpaque *, HSTRING__*, WindissectOpaque *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionAnimationTriggerValuePartner();
};
} // namespace Windows::UI::Composition::Internal
