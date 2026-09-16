#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace DirectComposition {
class CHolographicExclusiveModeProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHolographicExclusiveModeProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHolographicExclusiveModeProxy@DirectComposition@@QEAA@I@Z
    CHolographicExclusiveModeProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHolographicExclusiveModeProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHolographicExclusiveModeProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveExclusiveView@CHolographicExclusiveModeProxy@DirectComposition@@UEAAJI@Z
    virtual long SetActiveExclusiveView(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveExclusiveViewForZone@CHolographicExclusiveModeProxy@DirectComposition@@UEAAJIW4HolographicExclusiveZone@@@Z
    virtual long SetActiveExclusiveViewForZone(unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExclusiveOpacity@CHolographicExclusiveModeProxy@DirectComposition@@UEAAJM@Z
    virtual long SetExclusiveOpacity(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExclusiveOpacity@CHolographicExclusiveModeProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetExclusiveOpacity(IDCompositionAnimation *);
};
} // namespace DirectComposition
