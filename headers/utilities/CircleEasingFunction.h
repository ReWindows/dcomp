#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition {
class CircleEasingFunction {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CircleEasingFunction@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CircleEasingFunction@Composition@UI@Windows@@QEAA@XZ
    CircleEasingFunction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@CircleEasingFunction@Composition@UI@Windows@@UEAAJPEAM000@Z
    virtual long GetParameters(float *, float *, float *, float *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CircleEasingFunction@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CircleEasingFunction@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CircleEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4CompositionEasingFunctionMode@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, int);
};
} // namespace Windows::UI::Composition
