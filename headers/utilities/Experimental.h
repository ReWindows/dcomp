#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 2 member(s).
namespace Windows::UI::Composition::Compositor {
class Experimental {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CompositionTexturesLost@Experimental@Compositor@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCompositor@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_CompositionTexturesLost(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CompositionTexturesLost@Experimental@Compositor@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CompositionTexturesLost(EventRegistrationToken);
};
} // namespace Windows::UI::Composition::Compositor
