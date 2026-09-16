#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 21 member(s).
namespace DirectComposition {
class CAffineTransform2DEffect {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAffineTransform2DEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CAffineTransform2DEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionAffineTransform2DEffect@@@Z
    static long Create(WindissectOpaque *, IDCompositionAffineTransform2DEffect * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAffineTransform2DEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAffineTransform2DEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorderMode@CAffineTransform2DEffect@DirectComposition@@UEAAJW4D2D1_BORDER_MODE@@@Z
    virtual long SetBorderMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInterpolationMode@CAffineTransform2DEffect@DirectComposition@@UEAAJW4D2D1_2DAFFINETRANSFORM_INTERPOLATION_MODE@@@Z
    virtual long SetInterpolationMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSharpness@CAffineTransform2DEffect@DirectComposition@@UEAAJM@Z
    virtual long SetSharpness(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSharpness@CAffineTransform2DEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetSharpness(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformMatrix@CAffineTransform2DEffect@DirectComposition@@UEAAJAEBUD2D_MATRIX_3X2_F@@@Z
    virtual long SetTransformMatrix(D2D_MATRIX_3X2_F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformMatrixElement@CAffineTransform2DEffect@DirectComposition@@UEAAJHHM@Z
    virtual long SetTransformMatrixElement(int, int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformMatrixElement@CAffineTransform2DEffect@DirectComposition@@UEAAJHHPEAUIDCompositionAnimation@@@Z
    virtual long SetTransformMatrixElement(int, int, IDCompositionAnimation *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxInputs@CAffineTransform2DEffect@DirectComposition@@MEBAIXZ
    virtual unsigned int GetMaxInputs() const;
};
} // namespace DirectComposition
