#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition {
class SineEasingFunction {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SineEasingFunction@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@SineEasingFunction@Composition@UI@Windows@@UEAAJPEAM000@Z
    virtual long GetParameters(float *, float *, float *, float *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SineEasingFunction@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SineEasingFunction@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SineEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4CompositionEasingFunctionMode@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SineEasingFunction@Composition@UI@Windows@@QEAA@XZ
    SineEasingFunction();
};
} // namespace Windows::UI::Composition
