#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace DirectComposition {
class CEffectGroupProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEffectGroupProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEffectGroupProxy@DirectComposition@@QEAA@I@Z
    CEffectGroupProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEffectGroupProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEffectGroupProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOpacity@CEffectGroupProxy@DirectComposition@@UEAAJM@Z
    virtual long SetOpacity(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOpacity@CEffectGroupProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetOpacity(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform3D@CEffectGroupProxy@DirectComposition@@UEAAJPEAUIDCompositionTransform3D@@@Z
    virtual long SetTransform3D(IDCompositionTransform3D *);
};
} // namespace DirectComposition
