#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition::CompositionPathGeometry {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionPathGeometry@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Path@Api@CompositionPathGeometry@Composition@UI@Windows@@UEAAJPEAPEAUICompositionPath@345@@Z
    virtual long get_Path(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Path@Api@CompositionPathGeometry@Composition@UI@Windows@@UEAAJPEAUICompositionPath@345@@Z
    virtual long put_Path(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::CompositionPathGeometry
