#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 13 member(s).
namespace Windows::UI::Composition::Scenes::SceneModelTransform {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@SceneModelTransform@Scenes@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Orientation@Api@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJPEAUQuaternion@Numerics@Foundation@6@@Z
    virtual long get_Orientation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RotationAngle@Api@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_RotationAngle(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RotationAngleInDegrees@Api@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_RotationAngleInDegrees(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RotationAxis@Api@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@6@@Z
    virtual long get_RotationAxis(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Scale@Api@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@6@@Z
    virtual long get_Scale(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Translation@Api@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@6@@Z
    virtual long get_Translation(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Orientation@Api@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJUQuaternion@Numerics@Foundation@6@@Z
    virtual long put_Orientation(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RotationAngle@Api@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_RotationAngle(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RotationAngleInDegrees@Api@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_RotationAngleInDegrees(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RotationAxis@Api@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@6@@Z
    virtual long put_RotationAxis(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Scale@Api@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@6@@Z
    virtual long put_Scale(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Translation@Api@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@6@@Z
    virtual long put_Translation(WindissectOpaque);
};
} // namespace Windows::UI::Composition::Scenes::SceneModelTransform
