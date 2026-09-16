#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::Scenes::SceneMesh {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@SceneMesh@Scenes@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillMeshAttribute@Api@SceneMesh@Scenes@Composition@UI@Windows@@UEAAJW4SceneAttributeSemantic@3456@W4DirectXPixelFormat@DirectX@Graphics@6@PEAUIMemoryBuffer@Foundation@6@@Z
    virtual long FillMeshAttribute(int, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Bounds@Api@SceneMesh@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneBoundingBox@3456@@Z
    virtual long get_Bounds(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrimitiveTopology@Api@SceneMesh@Scenes@Composition@UI@Windows@@UEAAJPEAW4DirectXPrimitiveTopology@DirectX@Graphics@6@@Z
    virtual long get_PrimitiveTopology(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PrimitiveTopology@Api@SceneMesh@Scenes@Composition@UI@Windows@@UEAAJW4DirectXPrimitiveTopology@DirectX@Graphics@6@@Z
    virtual long put_PrimitiveTopology(int);
};
} // namespace Windows::UI::Composition::Scenes::SceneMesh
