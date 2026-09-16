#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 21 member(s).
namespace DirectComposition {
class CTurbulenceEffect {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTurbulenceEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTurbulenceEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionTurbulenceEffect@@@Z
    static long Create(WindissectOpaque *, IDCompositionTurbulenceEffect * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTurbulenceEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTurbulenceEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBaseFrequency@CTurbulenceEffect@DirectComposition@@UEAAJAEBUD2D_VECTOR_2F@@@Z
    virtual long SetBaseFrequency(D2D_VECTOR_2F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNoise@CTurbulenceEffect@DirectComposition@@UEAAJW4D2D1_TURBULENCE_NOISE@@@Z
    virtual long SetNoise(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNumOctaves@CTurbulenceEffect@DirectComposition@@UEAAJI@Z
    virtual long SetNumOctaves(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffset@CTurbulenceEffect@DirectComposition@@UEAAJAEBUD2D_VECTOR_2F@@@Z
    virtual long SetOffset(D2D_VECTOR_2F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSeed@CTurbulenceEffect@DirectComposition@@UEAAJI@Z
    virtual long SetSeed(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CTurbulenceEffect@DirectComposition@@UEAAJAEBUD2D_VECTOR_2F@@@Z
    virtual long SetSize(D2D_VECTOR_2F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStitchable@CTurbulenceEffect@DirectComposition@@UEAAJH@Z
    virtual long SetStitchable(int);
protected:
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMaxInputs@CTurbulenceEffect@DirectComposition@@MEBAIXZ
    virtual unsigned int GetMaxInputs() const;
};
} // namespace DirectComposition
