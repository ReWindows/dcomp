#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 12 member(s).
namespace DirectComposition {
class CColorBrushProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CColorBrushProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CColorBrushProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CColorBrushProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlpha@CColorBrushProxy@DirectComposition@@UEAAJM@Z
    virtual long SetAlpha(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlpha@CColorBrushProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetAlpha(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlue@CColorBrushProxy@DirectComposition@@UEAAJM@Z
    virtual long SetBlue(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlue@CColorBrushProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetBlue(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColor@CColorBrushProxy@DirectComposition@@UEAAJAEBU_D3DCOLORVALUE@@@Z
    virtual long SetColor(_D3DCOLORVALUE const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGreen@CColorBrushProxy@DirectComposition@@UEAAJM@Z
    virtual long SetGreen(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGreen@CColorBrushProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetGreen(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRed@CColorBrushProxy@DirectComposition@@UEAAJM@Z
    virtual long SetRed(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRed@CColorBrushProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetRed(IDCompositionAnimation *);
};
} // namespace DirectComposition
