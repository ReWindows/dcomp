#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace DirectComposition {
class CCompositionDynamicTextureProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCompositionDynamicTextureProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCompositionDynamicTextureProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCompositionDynamicTextureProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTexture@CCompositionDynamicTextureProxy@DirectComposition@@UEAAJPEAUIDCompositionTexture@@@Z
    virtual long SetTexture(IDCompositionTexture *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTexture@CCompositionDynamicTextureProxy@DirectComposition@@UEAAJPEAUIDCompositionTexture@@PEBUtagRECT@@_K@Z
    virtual long SetTexture(IDCompositionTexture *, tagRECT const *, uint64_t);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirtyRectsProperty@CCompositionDynamicTextureProxy@DirectComposition@@IEAAJPEBUtagRECT@@_K@Z
    long SetDirtyRectsProperty(tagRECT const *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextureProperty@CCompositionDynamicTextureProxy@DirectComposition@@IEAAJPEAUIDCompositionTexture@@@Z
    long SetTextureProperty(IDCompositionTexture *);
};
} // namespace DirectComposition
