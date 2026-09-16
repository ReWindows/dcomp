#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Windows::UI::Composition {
class ContainerVisual {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ContainerVisual@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ContainerVisual@Composition@UI@Windows@@QEAA@XZ
    ContainerVisual();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ContainerVisual@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ContainerVisual@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ContainerVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I@Z
    long RuntimeClassInitialize(WindissectOpaque *, unsigned int);
};
} // namespace Windows::UI::Composition
