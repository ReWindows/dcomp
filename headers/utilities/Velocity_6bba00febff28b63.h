#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::CompositionProjectedShadowCaster {
class Velocity {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Velocity@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAA@XZ
    Velocity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AncestorClip@Velocity@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z
    virtual long get_AncestorClip(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Mask@Velocity@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBrush@345@@Z
    virtual long get_Mask(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AncestorClip@Velocity@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z
    virtual long put_AncestorClip(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Mask@Velocity@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z
    virtual long put_Mask(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::CompositionProjectedShadowCaster
