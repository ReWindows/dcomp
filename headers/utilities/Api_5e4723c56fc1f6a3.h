#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::CompositionRectangleGeometry {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionRectangleGeometry@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Offset@Api@CompositionRectangleGeometry@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z
    virtual long get_Offset(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@Api@CompositionRectangleGeometry@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z
    virtual long get_Size(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Offset@Api@CompositionRectangleGeometry@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z
    virtual long put_Offset(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Size@Api@CompositionRectangleGeometry@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z
    virtual long put_Size(WindissectOpaque);
};
} // namespace Windows::UI::Composition::CompositionRectangleGeometry
