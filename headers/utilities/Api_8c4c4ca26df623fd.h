#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 4 member(s).
namespace Windows::UI::Composition::Internal::CompositionVailSuperWetInkSource {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableForVail@Api@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAJU_GUID@@III0III0@Z
    virtual long EnableForVail(_GUID, unsigned int, unsigned int, unsigned int, _GUID, unsigned int, unsigned int, unsigned int, _GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ReferenceSwapChain@Api@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSurfaceBrush@456@@Z
    virtual long get_ReferenceSwapChain(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ReferenceSwapChain@Api@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAJPEAUICompositionSurfaceBrush@456@@Z
    virtual long put_ReferenceSwapChain(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::Internal::CompositionVailSuperWetInkSource
