#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Windows::UI::Composition {
class CompositionMaskBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionMaskBrush@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMask@CompositionMaskBrush@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z
    long SetMask(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate_Mask@CompositionMaskBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234@PEAPEAVCompositionBrush@234@@Z
    long Validate_Mask(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate_Source@CompositionMaskBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234@PEAPEAVCompositionBrush@234@@Z
    long Validate_Source(WindissectOpaque *, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionMaskBrush@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionMaskBrush();
};
} // namespace Windows::UI::Composition
