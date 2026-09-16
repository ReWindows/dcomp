#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 29 member(s).
namespace Windows::UI::Composition {
class AnimationControllerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@AnimationControllerFactory@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AnimationControllerFactory@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AnimationControllerFactory@Composition@UI@Windows@@QEAA@XZ
    AnimationControllerFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AnimationControllerFactory@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AnimationControllerFactory@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AnimationControllerFactory@Composition@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@AnimationControllerFactory@Composition@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@AnimationControllerFactory@Composition@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AnimationControllerFactory@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AnimationControllerFactory@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxPlaybackRate@AnimationControllerFactory@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_MaxPlaybackRate(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinPlaybackRate@AnimationControllerFactory@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_MinPlaybackRate(float *);
};
} // namespace Windows::UI::Composition
