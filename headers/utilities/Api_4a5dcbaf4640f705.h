#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::SpriteVisual {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@SpriteVisual@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Brush@Api@SpriteVisual@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBrush@345@@Z
    virtual long get_Brush(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Shadow@Api@SpriteVisual@Composition@UI@Windows@@UEAAJPEAPEAUICompositionShadow@345@@Z
    virtual long get_Shadow(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Brush@Api@SpriteVisual@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z
    virtual long put_Brush(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Shadow@Api@SpriteVisual@Composition@UI@Windows@@UEAAJPEAUICompositionShadow@345@@Z
    virtual long put_Shadow(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::SpriteVisual
