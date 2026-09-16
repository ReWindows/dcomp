#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition::Scenes::SceneVisual {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@SceneVisual@Scenes@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Root@Api@SceneVisual@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneNode@3456@@Z
    virtual long get_Root(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Root@Api@SceneVisual@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneNode@3456@@Z
    virtual long put_Root(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::Scenes::SceneVisual
