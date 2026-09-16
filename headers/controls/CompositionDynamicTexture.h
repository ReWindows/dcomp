#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 10 member(s).
namespace Windows::UI::Composition::Internal {
class CompositionDynamicTexture {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionDynamicTexture@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionDynamicTexture@Internal@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionDynamicTexture@Internal@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionDynamicTexture@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionDynamicTexture@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAVCCompositionDynamicTextureProxy@DirectComposition@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionDynamicTexture@Internal@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionDynamicTexture();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTexture@CompositionDynamicTexture@Internal@Composition@UI@Windows@@AEAAJPEAUICompositionTexture@345@@Z
    long SetTexture(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextureWithDirtyRects@CompositionDynamicTexture@Internal@Composition@UI@Windows@@AEAAJPEAUICompositionTexture@345@IPEAURectInt32@Graphics@5@@Z
    long SetTextureWithDirtyRects(WindissectOpaque *, unsigned int, ::Windows::Graphics::RectInt32*);
};
} // namespace Windows::UI::Composition::Internal
