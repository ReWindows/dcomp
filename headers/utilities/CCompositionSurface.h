#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 34 member(s).
namespace DirectComposition {
class CCompositionSurface {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCompositionSurface@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDraw@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@@Z
    virtual long BeginDraw(tagRECT const *, _GUID const &, void * *, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDrawHelper@CCompositionSurface@DirectComposition@@QEAAJPEBUtagRECT@@AEBU_GUID@@_NPEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z
    long BeginDrawHelper(tagRECT const *, _GUID const &, bool, void * *, tagPOINT *, DCOMPOSITION_GUTTERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDrawWithClear@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@@Z
    virtual long BeginDrawWithClear(tagRECT const *, _GUID const &, void * *, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDrawWithGutters@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z
    virtual long BeginDrawWithGutters(tagRECT const *, _GUID const &, void * *, tagPOINT *, DCOMPOSITION_GUTTERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToSurfaceBrush@CCompositionSurface@DirectComposition@@UEAAJPEAVCSurfaceBrushProxy@2@@Z
    virtual long BindToSurfaceBrush(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAndGetCompositionSurfaceNoRef@CCompositionSurface@DirectComposition@@SAJPEAUIDCompositionSurface@@PEAPEAV12@@Z
    static long CheckAndGetCompositionSurfaceNoRef(IDCompositionSurface *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z
    virtual long CopySurface(tagRECT const *, IDXGISurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z
    virtual long CopySurface(IUnknown *, int, int, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCompositionSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAW4D2D1_EXTEND_MODE@@_NPEAPEAV12@PEAI@Z
    static long Create(WindissectOpaque *, unsigned int, unsigned int, int, int, int *, bool, WindissectOpaque * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDraw@CCompositionSurface@DirectComposition@@UEAAJXZ
    virtual long EndDraw();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionSurfaceProxyNoRef@CCompositionSurface@DirectComposition@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetCompositionSurfaceProxyNoRef(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormat@CCompositionSurface@DirectComposition@@UEAA?AW4DXGI_FORMAT@@XZ
    virtual int GetPixelFormat();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasValidPixels@CCompositionSurface@DirectComposition@@UEAAJPEAH@Z
    virtual long HasValidPixels(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PixelsDiscarded@CCompositionSurface@DirectComposition@@UEAAXXZ
    virtual void PixelsDiscarded();
    // Category: Method | Source: PE Export
    // Symbol: ?PixelsReclaimed@CCompositionSurface@DirectComposition@@UEAAJXZ
    virtual long PixelsReclaimed();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCompositionSurface@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCompositionSurface@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@CCompositionSurface@DirectComposition@@UEAAJII@Z
    virtual long Resize(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeDraw@CCompositionSurface@DirectComposition@@UEAAJXZ
    virtual long ResumeDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z
    virtual long Scroll(tagRECT const *, tagRECT const *, int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?SurfaceHidden@CCompositionSurface@DirectComposition@@UEAAJXZ
    virtual long SurfaceHidden();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendDraw@CCompositionSurface@DirectComposition@@UEAAJXZ
    virtual long SuspendDraw();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDrawInternal@CCompositionSurface@DirectComposition@@AEAAJAEBUtagRECT@@AEBU_GUID@@_N2PEAPEAXPEAI4PEAUDCOMPOSITION_GUTTERS@@@Z
    long BeginDrawInternal(tagRECT const &, _GUID const &, bool, bool, void * *, unsigned int *, unsigned int *, DCOMPOSITION_GUTTERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDrawInternal@CCompositionSurface@DirectComposition@@AEAAXXZ
    void EndDrawInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRealization@CCompositionSurface@DirectComposition@@AEAAJXZ
    long EnsureRealization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateUpdateParameters@CCompositionSurface@DirectComposition@@AEAAJPEBUtagRECT@@_N@Z
    long ValidateUpdateParameters(tagRECT const *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompositionSurface@DirectComposition@@AEAA@XZ
    ~CCompositionSurface();
};
} // namespace DirectComposition
