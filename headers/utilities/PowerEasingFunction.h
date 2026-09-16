#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition {
class PowerEasingFunction {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PowerEasingFunction@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@PowerEasingFunction@Composition@UI@Windows@@UEAAJPEAM000@Z
    virtual long GetParameters(float *, float *, float *, float *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PowerEasingFunction@Composition@UI@Windows@@QEAA@XZ
    PowerEasingFunction();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PowerEasingFunction@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PowerEasingFunction@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PowerEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4CompositionEasingFunctionMode@234@M@Z
    long RuntimeClassInitialize(WindissectOpaque *, int, float);
};
} // namespace Windows::UI::Composition
