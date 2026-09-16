#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
namespace DirectComposition {
class CBitmapInfoBack {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DirtyGuttersForUpdate@CBitmapInfoBack@DirectComposition@@QEAAXAEBUtagRECT@@PEAUDCOMPOSITION_GUTTERS@@@Z
    void DirtyGuttersForUpdate(tagRECT const &, DCOMPOSITION_GUTTERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ
    void EndDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtendEdgesForInvalidGutters@CBitmapInfoBack@DirectComposition@@QEAAJXZ
    long ExtendEdgesForInvalidGutters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushD2DRendering@CBitmapInfoBack@DirectComposition@@QEAAXXZ
    void FlushD2DRendering();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSurfaceHidden@CBitmapInfoBack@DirectComposition@@UEAAJXZ
    virtual long HandleSurfaceHidden();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSurfaceReclaimed@CBitmapInfoBack@DirectComposition@@UEAAJ_N0@Z
    virtual long HandleSurfaceReclaimed(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromSurface@CBitmapInfoBack@DirectComposition@@QEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@PEBU4@@Z
    void InitializeFromSurface(WindissectOpaque *, tagRECT const &, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeGutterDirtiness@CBitmapInfoBack@DirectComposition@@QEAAXPEAV12@@Z
    void InitializeGutterDirtiness(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ
    void ResumeDraw();
};
} // namespace DirectComposition
