#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition::Internal::HolographicCompositor {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@HolographicCompositor@Internal@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_StatusChanged@Api@HolographicCompositor@Internal@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@6@PEAUEventRegistrationToken@@@Z
    virtual long add_StatusChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_StatusChanged@Api@HolographicCompositor@Internal@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_StatusChanged(EventRegistrationToken);
};
} // namespace Windows::UI::Composition::Internal::HolographicCompositor
