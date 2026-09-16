#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace DirectComposition {
class CMatrixTransformProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMatrixTransformProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMatrixTransformProxy@DirectComposition@@QEAA@I@Z
    CMatrixTransformProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMatrixTransformProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMatrixTransformProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMatrix@CMatrixTransformProxy@DirectComposition@@UEAAJAEBUD2D_MATRIX_3X2_F@@@Z
    virtual long SetMatrix(D2D_MATRIX_3X2_F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMatrixElement@CMatrixTransformProxy@DirectComposition@@UEAAJHHM@Z
    virtual long SetMatrixElement(int, int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMatrixElement@CMatrixTransformProxy@DirectComposition@@UEAAJHHPEAUIDCompositionAnimation@@@Z
    virtual long SetMatrixElement(int, int, IDCompositionAnimation *);
};
} // namespace DirectComposition
