#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 16 member(s).
namespace DirectComposition {
class CHueRotationEffect {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHueRotationEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CHueRotationEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionHueRotationEffect@@@Z
    static long Create(WindissectOpaque *, IDCompositionHueRotationEffect * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHueRotationEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHueRotationEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAngle@CHueRotationEffect@DirectComposition@@UEAAJM@Z
    virtual long SetAngle(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAngle@CHueRotationEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetAngle(IDCompositionAnimation *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxInputs@CHueRotationEffect@DirectComposition@@MEBAIXZ
    virtual unsigned int GetMaxInputs() const;
};
} // namespace DirectComposition
