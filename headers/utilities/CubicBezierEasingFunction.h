#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition {
class CubicBezierEasingFunction {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CubicBezierEasingFunction@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CubicBezierEasingFunction@Composition@UI@Windows@@QEAA@XZ
    CubicBezierEasingFunction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@CubicBezierEasingFunction@Composition@UI@Windows@@UEAAJPEAM000@Z
    virtual long GetParameters(float *, float *, float *, float *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CubicBezierEasingFunction@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CubicBezierEasingFunction@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CubicBezierEasingFunction@Composition@UI@Windows@@QEAAJPEAVCompositor@234@MMMM@Z
    long RuntimeClassInitialize(WindissectOpaque *, float, float, float, float);
};
} // namespace Windows::UI::Composition
