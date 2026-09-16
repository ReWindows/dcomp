#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 4 member(s).
namespace Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner {
class Partner {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Partner@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@QEAA@XZ
    Partner();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNotificationId@Partner@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAAJ_K0@Z
    virtual long SetNotificationId(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TriggerFired@Partner@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@PEAVCompositionAnimationTriggerPartnerFiredEventArgs@2345@@Foundation@6@PEAUEventRegistrationToken@@@Z
    virtual long add_TriggerFired(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TriggerFired@Partner@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TriggerFired(EventRegistrationToken);
};
} // namespace Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner
