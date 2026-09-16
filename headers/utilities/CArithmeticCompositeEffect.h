#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 24 member(s).
namespace DirectComposition {
class CArithmeticCompositeEffect {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CArithmeticCompositeEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CArithmeticCompositeEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionArithmeticCompositeEffect@@@Z
    static long Create(WindissectOpaque *, IDCompositionArithmeticCompositeEffect * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CArithmeticCompositeEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CArithmeticCompositeEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClampOutput@CArithmeticCompositeEffect@DirectComposition@@UEAAJH@Z
    virtual long SetClampOutput(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoefficient1@CArithmeticCompositeEffect@DirectComposition@@UEAAJM@Z
    virtual long SetCoefficient1(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoefficient1@CArithmeticCompositeEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetCoefficient1(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoefficient2@CArithmeticCompositeEffect@DirectComposition@@UEAAJM@Z
    virtual long SetCoefficient2(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoefficient2@CArithmeticCompositeEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetCoefficient2(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoefficient3@CArithmeticCompositeEffect@DirectComposition@@UEAAJM@Z
    virtual long SetCoefficient3(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoefficient3@CArithmeticCompositeEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetCoefficient3(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoefficient4@CArithmeticCompositeEffect@DirectComposition@@UEAAJM@Z
    virtual long SetCoefficient4(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoefficient4@CArithmeticCompositeEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetCoefficient4(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoefficients@CArithmeticCompositeEffect@DirectComposition@@UEAAJAEBUD2D_VECTOR_4F@@@Z
    virtual long SetCoefficients(D2D_VECTOR_4F const &);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxInputs@CArithmeticCompositeEffect@DirectComposition@@MEBAIXZ
    virtual unsigned int GetMaxInputs() const;
};
} // namespace DirectComposition
