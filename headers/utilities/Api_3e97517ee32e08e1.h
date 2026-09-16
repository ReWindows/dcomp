#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 4 member(s).
namespace Windows::UI::Composition::ShapeVisual {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@ShapeVisual@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Shapes@Api@ShapeVisual@Composition@UI@Windows@@UEAAJPEAPEAU?$IVector@PEAVCompositionShape@Composition@UI@Windows@@@Collections@Foundation@5@@Z
    virtual long get_Shapes(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewBox@Api@ShapeVisual@Composition@UI@Windows@@UEAAJPEAPEAUICompositionViewBox@345@@Z
    virtual long get_ViewBox(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ViewBox@Api@ShapeVisual@Composition@UI@Windows@@UEAAJPEAUICompositionViewBox@345@@Z
    virtual long put_ViewBox(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::ShapeVisual
