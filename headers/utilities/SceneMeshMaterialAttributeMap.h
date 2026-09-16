#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
namespace Windows::UI::Composition::Scenes {
class SceneMeshMaterialAttributeMap {
public:
    class Api;
    class ApiSceneObject;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@QEAAJXZ
    long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@QEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@5@@Z
    long First(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@W4SceneAttributeSemantic@2345@PEAE@Z
    long Insert(HSTRING__*, int, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@UEAA@XZ
    virtual ~SceneMeshMaterialAttributeMap();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@AEAAXXZ
    void OnCollectionChanged();
};
} // namespace Windows::UI::Composition::Scenes
