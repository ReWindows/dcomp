#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 6 member(s).
namespace Windows::UI::Composition::Scenes::SceneMeshRendererComponent {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Material@Api@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneMaterial@3456@@Z
    virtual long get_Material(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Mesh@Api@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneMesh@3456@@Z
    virtual long get_Mesh(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UVMappings@Api@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneMeshMaterialAttributeMap@3456@@Z
    virtual long get_UVMappings(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Material@Api@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneMaterial@3456@@Z
    virtual long put_Material(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Mesh@Api@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneMesh@3456@@Z
    virtual long put_Mesh(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::Scenes::SceneMeshRendererComponent
