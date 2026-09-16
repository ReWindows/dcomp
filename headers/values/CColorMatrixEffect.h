#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 19 member(s).
namespace DirectComposition {
class CColorMatrixEffect {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CColorMatrixEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CColorMatrixEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionColorMatrixEffect@@@Z
    static long Create(WindissectOpaque *, IDCompositionColorMatrixEffect * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CColorMatrixEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CColorMatrixEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaMode@CColorMatrixEffect@DirectComposition@@UEAAJW4D2D1_COLORMATRIX_ALPHA_MODE@@@Z
    virtual long SetAlphaMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClampOutput@CColorMatrixEffect@DirectComposition@@UEAAJH@Z
    virtual long SetClampOutput(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMatrix@CColorMatrixEffect@DirectComposition@@UEAAJAEBUD2D_MATRIX_5X4_F@@@Z
    virtual long SetMatrix(D2D_MATRIX_5X4_F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMatrixElement@CColorMatrixEffect@DirectComposition@@UEAAJHHM@Z
    virtual long SetMatrixElement(int, int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMatrixElement@CColorMatrixEffect@DirectComposition@@UEAAJHHPEAUIDCompositionAnimation@@@Z
    virtual long SetMatrixElement(int, int, IDCompositionAnimation *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxInputs@CColorMatrixEffect@DirectComposition@@MEBAIXZ
    virtual unsigned int GetMaxInputs() const;
};
} // namespace DirectComposition
