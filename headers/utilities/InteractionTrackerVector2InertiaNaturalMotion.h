#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 6 member(s).
namespace Windows::UI::Composition::Interactions {
class InteractionTrackerVector2InertiaNaturalMotion {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteractionTrackerVector2InertiaNaturalMotion@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteractionTrackerVector2InertiaNaturalMotion@Interactions@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteractionTrackerVector2InertiaNaturalMotion@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InteractionTrackerVector2InertiaNaturalMotion@Interactions@Composition@UI@Windows@@UEAA@XZ
    virtual ~InteractionTrackerVector2InertiaNaturalMotion();
};
} // namespace Windows::UI::Composition::Interactions
