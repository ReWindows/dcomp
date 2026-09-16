#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 14 member(s).
namespace Windows::UI::Composition::Scenes {
class SceneMeshRendererComponent {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetComponentType@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEBA?AW4SceneComponentType@2345@XZ
    virtual int GetComponentType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDelayedDestructionRequest@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAA_NXZ
    virtual bool HandleDelayedDestructionRequest();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RebuildInternal@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAJXZ
    virtual long RebuildInternal();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@QEAA@XZ
    SceneMeshRendererComponent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatesSurfaces@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAA_NXZ
    virtual bool UpdatesSurfaces();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAA@XZ
    virtual ~SceneMeshRendererComponent();
};
} // namespace Windows::UI::Composition::Scenes
