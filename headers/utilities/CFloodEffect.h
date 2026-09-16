#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 15 member(s).
namespace DirectComposition {
class CFloodEffect {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFloodEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CFloodEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionFloodEffect@@@Z
    static long Create(WindissectOpaque *, IDCompositionFloodEffect * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFloodEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFloodEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColor@CFloodEffect@DirectComposition@@UEAAJAEBUD2D_VECTOR_4F@@@Z
    virtual long SetColor(D2D_VECTOR_4F const &);
protected:
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetMaxInputs@CFloodEffect@DirectComposition@@MEBAIXZ
    virtual unsigned int GetMaxInputs() const;
};
} // namespace DirectComposition
