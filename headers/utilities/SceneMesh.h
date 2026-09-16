#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace Windows::UI::Composition::Scenes {
class SceneMesh {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SceneMesh@Scenes@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillMeshAttribute@SceneMesh@Scenes@Composition@UI@Windows@@QEAAJW4SceneAttributeSemantic@2345@W4DirectXPixelFormat@DirectX@Graphics@5@PEAUIMemoryBuffer@Foundation@5@@Z
    long FillMeshAttribute(int, int, WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SceneMesh@Scenes@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SceneMesh@Scenes@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SceneMesh@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SceneMesh@Scenes@Composition@UI@Windows@@UEAA@XZ
    virtual ~SceneMesh();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBounds@SceneMesh@Scenes@Composition@UI@Windows@@AEAAXXZ
    void UpdateBounds();
};
} // namespace Windows::UI::Composition::Scenes
