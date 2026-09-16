#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 4 member(s).
namespace Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner {
class Partner {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Partner@CompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@QEAA@XZ
    Partner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Animation@Partner@CompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@UEAAJPEAPEAUICompositionAnimationBase@456@@Z
    virtual long get_Animation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetObject@Partner@CompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@UEAAJPEAPEAUIAnimationObject@456@@Z
    virtual long get_TargetObject(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetProperty@Partner@CompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TargetProperty(HSTRING__* *);
};
} // namespace Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner
