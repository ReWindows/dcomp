#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::CompositionCapabilities {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionCapabilities@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreEffectsFast@Api@CompositionCapabilities@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long AreEffectsFast(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreEffectsSupported@Api@CompositionCapabilities@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long AreEffectsSupported(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Changed@Api@CompositionCapabilities@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCompositionCapabilities@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_Changed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Changed@Api@CompositionCapabilities@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Changed(EventRegistrationToken);
};
} // namespace Windows::UI::Composition::CompositionCapabilities
