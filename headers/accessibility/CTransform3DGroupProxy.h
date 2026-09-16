#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace DirectComposition {
class CTransform3DGroupProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTransform3DGroupProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTransform3DGroupProxy@DirectComposition@@QEAA@I@Z
    CTransform3DGroupProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTransform3DGroupProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTransform3DGroupProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformList@CTransform3DGroupProxy@DirectComposition@@QEAAJPEAPEAUIDCompositionTransform3D@@I@Z
    long SetTransformList(IDCompositionTransform3D * *, unsigned int);
};
} // namespace DirectComposition
