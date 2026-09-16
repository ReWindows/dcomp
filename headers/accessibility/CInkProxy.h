#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
namespace DirectComposition {
class CInkProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInkProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSegments@CInkProxy@DirectComposition@@UEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@I@Z
    virtual long AddSegments(D2D1_INK_BEZIER_SEGMENT const *, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInkProxy@DirectComposition@@QEAA@I@Z
    CInkProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInkProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInkProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSegmentsAtEnd@CInkProxy@DirectComposition@@UEAAJI@Z
    virtual long RemoveSegmentsAtEnd(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColor@CInkProxy@DirectComposition@@UEAAJAEBU_D3DCOLORVALUE@@@Z
    virtual long SetColor(_D3DCOLORVALUE const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSegmentAtEnd@CInkProxy@DirectComposition@@UEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@@Z
    virtual long SetSegmentAtEnd(D2D1_INK_BEZIER_SEGMENT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSegments@CInkProxy@DirectComposition@@UEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@I@Z
    virtual long SetSegments(unsigned int, D2D1_INK_BEZIER_SEGMENT const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStartPoint@CInkProxy@DirectComposition@@UEAAJPEBUD2D1_INK_POINT@@@Z
    virtual long SetStartPoint(D2D1_INK_POINT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStyle@CInkProxy@DirectComposition@@UEAAJPEBUD2D1_INK_STYLE_PROPERTIES@@@Z
    virtual long SetStyle(D2D1_INK_STYLE_PROPERTIES const *);
};
} // namespace DirectComposition
