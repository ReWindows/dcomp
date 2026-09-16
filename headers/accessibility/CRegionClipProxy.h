#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace DirectComposition {
class CRegionClipProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRegionClipProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRegionClipProxy@DirectComposition@@QEAA@I@Z
    CRegionClipProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRegionClipProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRegionClipProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRectangles@CRegionClipProxy@DirectComposition@@UEAAJPEBUtagRECT@@IHH@Z
    virtual long SetRectangles(tagRECT const *, unsigned int, int, int);
};
} // namespace DirectComposition
