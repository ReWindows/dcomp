#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 10 member(s).
namespace Windows::UI::Composition {
class CompositionTexture {
public:
    class Api;
    class Interop;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionTexture@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionTexture@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionTexture@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionTexture@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionTexture@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCCompositionTexture@DirectComposition@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionTexture@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionTexture();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceRect@CompositionTexture@Composition@UI@Windows@@AEAAJPEAURectInt32@Graphics@4@@Z
    long get_SourceRect(::Windows::Graphics::RectInt32*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SourceRect@CompositionTexture@Composition@UI@Windows@@AEAAJURectInt32@Graphics@4@@Z
    long put_SourceRect(::Windows::Graphics::RectInt32);
};
} // namespace Windows::UI::Composition
