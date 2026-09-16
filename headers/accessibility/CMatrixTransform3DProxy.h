#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace DirectComposition {
class CMatrixTransform3DProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMatrixTransform3DProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMatrixTransform3DProxy@DirectComposition@@QEAA@I@Z
    CMatrixTransform3DProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMatrixTransform3DProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMatrixTransform3DProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMatrix@CMatrixTransform3DProxy@DirectComposition@@UEAAJAEBU_D3DMATRIX@@@Z
    virtual long SetMatrix(_D3DMATRIX const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMatrixElement@CMatrixTransform3DProxy@DirectComposition@@UEAAJHHM@Z
    virtual long SetMatrixElement(int, int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMatrixElement@CMatrixTransform3DProxy@DirectComposition@@UEAAJHHPEAUIDCompositionAnimation@@@Z
    virtual long SetMatrixElement(int, int, IDCompositionAnimation *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceHelper@CMatrixTransform3DProxy@DirectComposition@@IEAAJAEBU_GUID@@PEAPEAXPEAX@Z
    long QueryInterfaceHelper(_GUID const &, void * *, void *);
};
} // namespace DirectComposition
