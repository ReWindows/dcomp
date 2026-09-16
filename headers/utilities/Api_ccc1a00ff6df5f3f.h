#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 13 member(s).
namespace Windows::UI::Composition::CompositionShape {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionShape@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CenterPoint@Api@CompositionShape@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z
    virtual long get_CenterPoint(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Offset@Api@CompositionShape@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z
    virtual long get_Offset(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RotationAngle@Api@CompositionShape@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_RotationAngle(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RotationAngleInDegrees@Api@CompositionShape@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_RotationAngleInDegrees(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Scale@Api@CompositionShape@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z
    virtual long get_Scale(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TransformMatrix@Api@CompositionShape@Composition@UI@Windows@@UEAAJPEAUMatrix3x2@Numerics@Foundation@5@@Z
    virtual long get_TransformMatrix(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CenterPoint@Api@CompositionShape@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z
    virtual long put_CenterPoint(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Offset@Api@CompositionShape@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z
    virtual long put_Offset(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RotationAngle@Api@CompositionShape@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_RotationAngle(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RotationAngleInDegrees@Api@CompositionShape@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_RotationAngleInDegrees(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Scale@Api@CompositionShape@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z
    virtual long put_Scale(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TransformMatrix@Api@CompositionShape@Composition@UI@Windows@@UEAAJUMatrix3x2@Numerics@Foundation@5@@Z
    virtual long put_TransformMatrix(WindissectOpaque);
};
} // namespace Windows::UI::Composition::CompositionShape
