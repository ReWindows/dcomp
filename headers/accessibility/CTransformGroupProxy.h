#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace DirectComposition {
class CTransformGroupProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTransformGroupProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTransformGroupProxy@DirectComposition@@QEAA@I@Z
    CTransformGroupProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTransformGroupProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformList@CTransformGroupProxy@DirectComposition@@QEAAJPEAPEAUIDCompositionTransform@@I@Z
    long SetTransformList(IDCompositionTransform * *, unsigned int);
};
} // namespace DirectComposition
