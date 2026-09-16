#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 4 member(s).
namespace DirectComposition {
class CSharedTransform3DProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSharedTransform3DProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSharedTransform3DProxy@DirectComposition@@QEAA@I@Z
    CSharedTransform3DProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSharedTransform3DProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSharedTransform3DProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace DirectComposition
