#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 14 member(s).
namespace Windows::UI::Composition::Scenes {
class SceneNode {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SceneNode@Scenes@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@SceneNode@Scenes@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTransform@SceneNode@Scenes@Composition@UI@Windows@@QEAAJXZ
    long EnsureTransform();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFirstComponentOfType@SceneNode@Scenes@Composition@UI@Windows@@QEAAPEAVSceneComponent@2345@W4SceneComponentType@2345@@Z
    WindissectOpaque * FindFirstComponentOfType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDelayedDestructionRequest@SceneNode@Scenes@Composition@UI@Windows@@UEAA_NXZ
    virtual bool HandleDelayedDestructionRequest();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SceneNode@Scenes@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RebuildInternal@SceneNode@Scenes@Composition@UI@Windows@@UEAAJXZ
    virtual long RebuildInternal();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SceneNode@Scenes@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SceneNode@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRoot@SceneNode@Scenes@Composition@UI@Windows@@QEAAXPEAV12345@@Z
    void UpdateRoot(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatesSurfaces@SceneNode@Scenes@Composition@UI@Windows@@UEAA_NXZ
    virtual bool UpdatesSurfaces();
};
} // namespace Windows::UI::Composition::Scenes
