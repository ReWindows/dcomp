#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition {
class CompositionEasingFunction {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionEasingFunction@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionEasingFunction@Composition@UI@Windows@@QEAA@XZ
    CompositionEasingFunction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@CompositionEasingFunction@Composition@UI@Windows@@UEAAJPEAM000@Z
    virtual long GetParameters(float *, float *, float *, float *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionEasingFunction@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionEasingFunction@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4EasingFunctionKind@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, int);
};
} // namespace Windows::UI::Composition
