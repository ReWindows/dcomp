#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 6 member(s).
namespace Windows::UI::Composition::Scenes::SceneBoundingBox {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@SceneBoundingBox@Scenes@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Center@Api@SceneBoundingBox@Scenes@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@6@@Z
    virtual long get_Center(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Extents@Api@SceneBoundingBox@Scenes@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@6@@Z
    virtual long get_Extents(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Max@Api@SceneBoundingBox@Scenes@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@6@@Z
    virtual long get_Max(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Min@Api@SceneBoundingBox@Scenes@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@6@@Z
    virtual long get_Min(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@Api@SceneBoundingBox@Scenes@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@6@@Z
    virtual long get_Size(WindissectOpaque*);
};
} // namespace Windows::UI::Composition::Scenes::SceneBoundingBox
