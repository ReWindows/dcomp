#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 10 member(s).
namespace DirectComposition {
class CRotateTransformProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRotateTransformProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRotateTransformProxy@DirectComposition@@QEAA@I@Z
    CRotateTransformProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRotateTransformProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRotateTransformProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAngle@CRotateTransformProxy@DirectComposition@@UEAAJM@Z
    virtual long SetAngle(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAngle@CRotateTransformProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetAngle(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterX@CRotateTransformProxy@DirectComposition@@UEAAJM@Z
    virtual long SetCenterX(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterX@CRotateTransformProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetCenterX(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterY@CRotateTransformProxy@DirectComposition@@UEAAJM@Z
    virtual long SetCenterY(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterY@CRotateTransformProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetCenterY(IDCompositionAnimation *);
};
} // namespace DirectComposition
