#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::CompositionLineGeometry {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionLineGeometry@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_End@Api@CompositionLineGeometry@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z
    virtual long get_End(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Start@Api@CompositionLineGeometry@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z
    virtual long get_Start(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_End@Api@CompositionLineGeometry@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z
    virtual long put_End(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Start@Api@CompositionLineGeometry@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z
    virtual long put_Start(WindissectOpaque);
};
} // namespace Windows::UI::Composition::CompositionLineGeometry
