#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition {
class InteropVisualReferenceController {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteropVisualReferenceController@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InteropVisualReferenceController@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InteropVisualReferenceController@Composition@UI@Windows@@QEAA@XZ
    InteropVisualReferenceController();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteropVisualReferenceController@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteropVisualReferenceController@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InteropVisualReferenceController@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z
    long RuntimeClassInitialize(WindissectOpaque *, bool);
};
} // namespace Windows::UI::Composition
