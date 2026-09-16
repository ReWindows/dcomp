#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Windows::UI::Composition::Internal {
class VisualReference {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VisualReference@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VisualReference@Internal@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VisualReference@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@VisualReference@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@I_NPEAX@Z
    long RuntimeClassInitialize(WindissectOpaque *, unsigned int, bool, void *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VisualReference@Internal@Composition@UI@Windows@@QEAA@XZ
    VisualReference();
};
} // namespace Windows::UI::Composition::Internal
