#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition::Scenes {
class SceneSurfaceMaterialInput {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSurface@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@345@@Z
    long SetSurface(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAA@XZ
    virtual ~SceneSurfaceMaterialInput();
};
} // namespace Windows::UI::Composition::Scenes
