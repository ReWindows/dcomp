#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition::Interactions::InteractionTracker {
class Test {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddManipulationWithChaining@Test@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUICompositionManipulationPartner@456@PEAUICompositionInteractionPartner@456@_N@Z
    virtual long AddManipulationWithChaining(WindissectOpaque *, WindissectOpaque *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInternalProperties@Test@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUInteractionTrackerInternalProperties@@@Z
    virtual long SetInternalProperties(InteractionTrackerInternalProperties *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Test@InteractionTracker@Interactions@Composition@UI@Windows@@QEAA@XZ
    Test();
};
} // namespace Windows::UI::Composition::Interactions::InteractionTracker
