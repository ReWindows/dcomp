#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 6 member(s).
namespace Windows::UI::Composition::Scenes::SceneNode {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@SceneNode@Scenes@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFirstComponentOfType@Api@SceneNode@Scenes@Composition@UI@Windows@@UEAAJW4SceneComponentType@3456@PEAPEAUISceneComponent@3456@@Z
    virtual long FindFirstComponentOfType(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Children@Api@SceneNode@Scenes@Composition@UI@Windows@@UEAAJPEAPEAU?$IVector@PEAVSceneNode@Scenes@Composition@UI@Windows@@@Collections@Foundation@6@@Z
    virtual long get_Children(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Components@Api@SceneNode@Scenes@Composition@UI@Windows@@UEAAJPEAPEAU?$IVector@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@Collections@Foundation@6@@Z
    virtual long get_Components(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Parent@Api@SceneNode@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneNode@3456@@Z
    virtual long get_Parent(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Transform@Api@SceneNode@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneModelTransform@3456@@Z
    virtual long get_Transform(WindissectOpaque * *);
};
} // namespace Windows::UI::Composition::Scenes::SceneNode
