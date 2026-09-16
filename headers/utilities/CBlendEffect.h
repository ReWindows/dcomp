#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 15 member(s).
namespace DirectComposition {
class CBlendEffect {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBlendEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CBlendEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionBlendEffect@@@Z
    static long Create(WindissectOpaque *, IDCompositionBlendEffect * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBlendEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBlendEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMode@CBlendEffect@DirectComposition@@UEAAJW4D2D1_BLEND_MODE@@@Z
    virtual long SetMode(int);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxInputs@CBlendEffect@DirectComposition@@MEBAIXZ
    virtual unsigned int GetMaxInputs() const;
};
} // namespace DirectComposition
