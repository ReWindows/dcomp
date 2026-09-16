#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace Windows::UI::Composition::DistantLight {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@DistantLight@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Color@Api@DistantLight@Composition@UI@Windows@@UEAAJPEAUColor@45@@Z
    virtual long get_Color(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CoordinateSpace@Api@DistantLight@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z
    virtual long get_CoordinateSpace(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Direction@Api@DistantLight@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@5@@Z
    virtual long get_Direction(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Intensity@Api@DistantLight@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_Intensity(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Color@Api@DistantLight@Composition@UI@Windows@@UEAAJUColor@45@@Z
    virtual long put_Color(::Windows::UI::Color);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CoordinateSpace@Api@DistantLight@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z
    virtual long put_CoordinateSpace(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Direction@Api@DistantLight@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@5@@Z
    virtual long put_Direction(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Intensity@Api@DistantLight@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_Intensity(float);
};
} // namespace Windows::UI::Composition::DistantLight
