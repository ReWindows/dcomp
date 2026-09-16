#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 25 member(s).
namespace DirectComposition {
class CShadowEffect {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CShadowEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CShadowEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionShadowEffect@@@Z
    static long Create(WindissectOpaque *, IDCompositionShadowEffect * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CShadowEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CShadowEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlpha@CShadowEffect@DirectComposition@@UEAAJM@Z
    virtual long SetAlpha(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlpha@CShadowEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetAlpha(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlue@CShadowEffect@DirectComposition@@UEAAJM@Z
    virtual long SetBlue(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlue@CShadowEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetBlue(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColor@CShadowEffect@DirectComposition@@UEAAJAEBUD2D_VECTOR_4F@@@Z
    virtual long SetColor(D2D_VECTOR_4F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGreen@CShadowEffect@DirectComposition@@UEAAJM@Z
    virtual long SetGreen(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGreen@CShadowEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetGreen(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRed@CShadowEffect@DirectComposition@@UEAAJM@Z
    virtual long SetRed(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRed@CShadowEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetRed(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStandardDeviation@CShadowEffect@DirectComposition@@UEAAJM@Z
    virtual long SetStandardDeviation(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStandardDeviation@CShadowEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetStandardDeviation(IDCompositionAnimation *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxInputs@CShadowEffect@DirectComposition@@MEBAIXZ
    virtual unsigned int GetMaxInputs() const;
};
} // namespace DirectComposition
