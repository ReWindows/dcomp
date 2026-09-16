#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 15 member(s).
namespace DirectComposition {
class CCompositeEffect {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCompositeEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCompositeEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionCompositeEffect@@@Z
    static long Create(WindissectOpaque *, IDCompositionCompositeEffect * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCompositeEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCompositeEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMode@CCompositeEffect@DirectComposition@@UEAAJW4D2D1_COMPOSITE_MODE@@@Z
    virtual long SetMode(int);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxInputs@CCompositeEffect@DirectComposition@@MEBAIXZ
    virtual unsigned int GetMaxInputs() const;
};
} // namespace DirectComposition
