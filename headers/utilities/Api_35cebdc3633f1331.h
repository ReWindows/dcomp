#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::LayerVisual {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@LayerVisual@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Effect@Api@LayerVisual@Composition@UI@Windows@@UEAAJPEAPEAUICompositionEffectBrush@345@@Z
    virtual long get_Effect(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Shadow@Api@LayerVisual@Composition@UI@Windows@@UEAAJPEAPEAUICompositionShadow@345@@Z
    virtual long get_Shadow(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Effect@Api@LayerVisual@Composition@UI@Windows@@UEAAJPEAUICompositionEffectBrush@345@@Z
    virtual long put_Effect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Shadow@Api@LayerVisual@Composition@UI@Windows@@UEAAJPEAUICompositionShadow@345@@Z
    virtual long put_Shadow(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::LayerVisual
