#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition {
class BounceEasingFunction {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BounceEasingFunction@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BounceEasingFunction@Composition@UI@Windows@@QEAA@XZ
    BounceEasingFunction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@BounceEasingFunction@Composition@UI@Windows@@UEAAJPEAM000@Z
    virtual long GetParameters(float *, float *, float *, float *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BounceEasingFunction@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BounceEasingFunction@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@BounceEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4CompositionEasingFunctionMode@234@HM@Z
    long RuntimeClassInitialize(WindissectOpaque *, int, int, float);
};
} // namespace Windows::UI::Composition
