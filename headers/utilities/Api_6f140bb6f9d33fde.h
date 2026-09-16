#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTipPoints@Api@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAJIIPEAE@Z
    virtual long AddTipPoints(unsigned int, unsigned int, unsigned char *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertiesForPresentCount@Api@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAJIEIPEAE@Z
    virtual long SetPropertiesForPresentCount(unsigned int, unsigned char, unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ReferenceSwapChain@Api@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSurfaceBrush@456@@Z
    virtual long get_ReferenceSwapChain(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ReferenceSwapChain@Api@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAJPEAUICompositionSurfaceBrush@456@@Z
    virtual long put_ReferenceSwapChain(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource
