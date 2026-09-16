#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::CompositionEllipseGeometry {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionEllipseGeometry@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Center@Api@CompositionEllipseGeometry@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z
    virtual long get_Center(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Radius@Api@CompositionEllipseGeometry@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z
    virtual long get_Radius(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Center@Api@CompositionEllipseGeometry@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z
    virtual long put_Center(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Radius@Api@CompositionEllipseGeometry@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z
    virtual long put_Radius(WindissectOpaque);
};
} // namespace Windows::UI::Composition::CompositionEllipseGeometry
