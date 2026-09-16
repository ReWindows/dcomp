#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
namespace Windows::UI::Composition::CompositionViewBox {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionViewBox@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalAlignmentRatio@Api@CompositionViewBox@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_HorizontalAlignmentRatio(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Offset@Api@CompositionViewBox@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z
    virtual long get_Offset(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@Api@CompositionViewBox@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z
    virtual long get_Size(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Stretch@Api@CompositionViewBox@Composition@UI@Windows@@UEAAJPEAW4CompositionStretch@345@@Z
    virtual long get_Stretch(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalAlignmentRatio@Api@CompositionViewBox@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_VerticalAlignmentRatio(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HorizontalAlignmentRatio@Api@CompositionViewBox@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_HorizontalAlignmentRatio(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Offset@Api@CompositionViewBox@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z
    virtual long put_Offset(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Size@Api@CompositionViewBox@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z
    virtual long put_Size(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Stretch@Api@CompositionViewBox@Composition@UI@Windows@@UEAAJW4CompositionStretch@345@@Z
    virtual long put_Stretch(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VerticalAlignmentRatio@Api@CompositionViewBox@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_VerticalAlignmentRatio(float);
};
} // namespace Windows::UI::Composition::CompositionViewBox
