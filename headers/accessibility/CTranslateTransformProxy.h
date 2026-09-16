#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace DirectComposition {
class CTranslateTransformProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTranslateTransformProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTranslateTransformProxy@DirectComposition@@QEAA@I@Z
    CTranslateTransformProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTranslateTransformProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTranslateTransformProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetX@CTranslateTransformProxy@DirectComposition@@UEAAJM@Z
    virtual long SetOffsetX(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetX@CTranslateTransformProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetOffsetX(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetY@CTranslateTransformProxy@DirectComposition@@UEAAJM@Z
    virtual long SetOffsetY(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetY@CTranslateTransformProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetOffsetY(IDCompositionAnimation *);
};
} // namespace DirectComposition
