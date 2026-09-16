#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@Api@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@Api@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@6@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@Api@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@Collections@Foundation@6@@Z
    virtual long GetView(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKey@Api@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long HasKey(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@Api@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@W4SceneAttributeSemantic@3456@PEAE@Z
    virtual long Insert(HSTRING__*, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lookup@Api@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAW4SceneAttributeSemantic@3456@@Z
    virtual long Lookup(HSTRING__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@Api@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long Remove(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@Api@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
};
} // namespace Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap
