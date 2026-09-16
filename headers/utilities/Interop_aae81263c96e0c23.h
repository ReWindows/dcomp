#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
namespace Windows::UI::Composition::CompositionVirtualDrawingSurface {
class Interop {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDraw@Interop@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@@Z
    virtual long BeginDraw(tagRECT const *, _GUID const &, void * *, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDrawWithGutters@Interop@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z
    virtual long BeginDrawWithGutters(tagRECT const *, _GUID const &, void * *, tagPOINT *, DCOMPOSITION_GUTTERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySurface@Interop@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z
    virtual long CopySurface(IUnknown *, int, int, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySurface@Interop@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z
    virtual long CopySurface(tagRECT const *, IDXGISurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDraw@Interop@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJXZ
    virtual long EndDraw();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasValidPixels@Interop@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJPEAH@Z
    virtual long HasValidPixels(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Interop@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAA@XZ
    Interop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@Interop@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJUtagSIZE@@@Z
    virtual long Resize(tagSIZE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeDraw@Interop@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJXZ
    virtual long ResumeDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scroll@Interop@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJPEBUtagRECT@@0HH@Z
    virtual long Scroll(tagRECT const *, tagRECT const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendDraw@Interop@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJXZ
    virtual long SuspendDraw();
};
} // namespace Windows::UI::Composition::CompositionVirtualDrawingSurface
