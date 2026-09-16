#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
namespace Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BaseColorFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAUVector4@Numerics@Foundation@6@@Z
    virtual long get_BaseColorFactor(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BaseColorInput@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneMaterialInput@3456@@Z
    virtual long get_BaseColorInput(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MetallicFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_MetallicFactor(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MetallicRoughnessInput@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneMaterialInput@3456@@Z
    virtual long get_MetallicRoughnessInput(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RoughnessFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_RoughnessFactor(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BaseColorFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJUVector4@Numerics@Foundation@6@@Z
    virtual long put_BaseColorFactor(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BaseColorInput@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneMaterialInput@3456@@Z
    virtual long put_BaseColorInput(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MetallicFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_MetallicFactor(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MetallicRoughnessInput@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneMaterialInput@3456@@Z
    virtual long put_MetallicRoughnessInput(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RoughnessFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_RoughnessFactor(float);
};
} // namespace Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial
