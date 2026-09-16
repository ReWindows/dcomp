#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 18 member(s).
namespace DirectComposition {
class CRotateTransform3DProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRotateTransform3DProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRotateTransform3DProxy@DirectComposition@@QEAA@I@Z
    CRotateTransform3DProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRotateTransform3DProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRotateTransform3DProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAngle@CRotateTransform3DProxy@DirectComposition@@UEAAJM@Z
    virtual long SetAngle(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAngle@CRotateTransform3DProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetAngle(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAxisX@CRotateTransform3DProxy@DirectComposition@@UEAAJM@Z
    virtual long SetAxisX(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAxisX@CRotateTransform3DProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetAxisX(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAxisY@CRotateTransform3DProxy@DirectComposition@@UEAAJM@Z
    virtual long SetAxisY(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAxisY@CRotateTransform3DProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetAxisY(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAxisZ@CRotateTransform3DProxy@DirectComposition@@UEAAJM@Z
    virtual long SetAxisZ(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAxisZ@CRotateTransform3DProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetAxisZ(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterX@CRotateTransform3DProxy@DirectComposition@@UEAAJM@Z
    virtual long SetCenterX(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterX@CRotateTransform3DProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetCenterX(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterY@CRotateTransform3DProxy@DirectComposition@@UEAAJM@Z
    virtual long SetCenterY(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterY@CRotateTransform3DProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetCenterY(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterZ@CRotateTransform3DProxy@DirectComposition@@UEAAJM@Z
    virtual long SetCenterZ(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterZ@CRotateTransform3DProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetCenterZ(IDCompositionAnimation *);
};
} // namespace DirectComposition
