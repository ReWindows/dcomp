#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::CompositionProjectedShadowCaster {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Brush@Api@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBrush@345@@Z
    virtual long get_Brush(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CastingVisual@Api@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z
    virtual long get_CastingVisual(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Brush@Api@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z
    virtual long put_Brush(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CastingVisual@Api@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z
    virtual long put_CastingVisual(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::CompositionProjectedShadowCaster
