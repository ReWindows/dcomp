#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
namespace Windows::UI::Composition::Scenes {
class SceneComponentCollection {
public:
    class Api;
    class ApiSceneObject;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SceneComponentCollection@Scenes@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectionItemFromApi@SceneComponentCollection@Scenes@Composition@UI@Windows@@QEAA@PEAUISceneComponent@2345@PEAJ@Z
    CollectionItemFromApi(WindissectOpaque *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@SceneComponentCollection@Scenes@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@SceneComponentCollection@Scenes@Composition@UI@Windows@@UEAAXXZ
    virtual void OnCollectionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreAddItem@SceneComponentCollection@Scenes@Composition@UI@Windows@@UEAAJAEBV?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@Z
    virtual long PreAddItem(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreRemoveItem@SceneComponentCollection@Scenes@Composition@UI@Windows@@UEAAXAEBV?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@Z
    virtual void PreRemoveItem(WindissectOpaque const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SceneComponentCollection@Scenes@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SceneComponentCollection@Scenes@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SceneComponentCollection@Scenes@Composition@UI@Windows@@UEAA@XZ
    virtual ~SceneComponentCollection();
};
} // namespace Windows::UI::Composition::Scenes
