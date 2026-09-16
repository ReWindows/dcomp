#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 65 member(s).
namespace DirectComposition {
class CVirtualSurface {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CVirtualSurface@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDraw@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@@Z
    virtual long BeginDraw(tagRECT const *, _GUID const &, void * *, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDrawWithClear@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@@Z
    virtual long BeginDrawWithClear(tagRECT const *, _GUID const &, void * *, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDrawWithGutters@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z
    virtual long BeginDrawWithGutters(tagRECT const *, _GUID const &, void * *, tagPOINT *, DCOMPOSITION_GUTTERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToSurfaceBrush@CVirtualSurface@DirectComposition@@QEAAJPEAVCSurfaceBrushProxy@2@@Z
    long BindToSurfaceBrush(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySurface@CVirtualSurface@DirectComposition@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z
    virtual long CopySurface(IUnknown *, int, int, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySurface@CVirtualSurface@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBUtagRECT@@_N@Z
    long CopySurface(ID3D11Resource *, int, int, tagRECT const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySurface@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z
    virtual long CopySurface(tagRECT const *, IDXGISurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CVirtualSurface@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAV12@@Z
    static long Create(WindissectOpaque *, unsigned int, unsigned int, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDraw@CVirtualSurface@DirectComposition@@UEAAJXZ
    virtual long EndDraw();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOcclusionRect@CVirtualSurface@DirectComposition@@QEAA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    bool GetOcclusionRect(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceProxyNoRef@CVirtualSurface@DirectComposition@@QEAAJPEAPEAUIUnknown@@@Z
    long GetResourceProxyNoRef(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CVirtualSurface@DirectComposition@@UEBA?AW4Enum@NotifierType@2@XZ
    virtual int GetType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasValidPixels@CVirtualSurface@DirectComposition@@UEAAJPEAH@Z
    virtual long HasValidPixels(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PixelsDiscarded@CVirtualSurface@DirectComposition@@UEAAXXZ
    virtual void PixelsDiscarded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PixelsReclaimed@CVirtualSurface@DirectComposition@@UEAAJXZ
    virtual long PixelsReclaimed();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CVirtualSurface@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReclumpRegion@CVirtualSurface@DirectComposition@@QEAAJAEBVCRegion@@@Z
    long ReclumpRegion(CRegion const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecoverValidRegions@CVirtualSurface@DirectComposition@@QEAAXXZ
    void RecoverValidRegions();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CVirtualSurface@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEmptyClumps@CVirtualSurface@DirectComposition@@QEAAXXZ
    void RemoveEmptyClumps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@CVirtualSurface@DirectComposition@@UEAAJII@Z
    virtual long Resize(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeDraw@CVirtualSurface@DirectComposition@@UEAAJXZ
    virtual long ResumeDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scroll@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z
    virtual long Scroll(tagRECT const *, tagRECT const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SurfaceHidden@CVirtualSurface@DirectComposition@@UEAAJXZ
    virtual long SurfaceHidden();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendDraw@CVirtualSurface@DirectComposition@@UEAAJXZ
    virtual long SuspendDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SynchronizeMarshalerState@CVirtualSurface@DirectComposition@@QEAAJXZ
    long SynchronizeMarshalerState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Trim@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@I@Z
    virtual long Trim(tagRECT const *, unsigned int);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVirtualSurface@DirectComposition@@IEAA@PEAVCSurfaceFactory@1@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@@Z
    CVirtualSurface(WindissectOpaque *, unsigned int, unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CVirtualSurface@DirectComposition@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVirtualSurface@DirectComposition@@MEAA@XZ
    virtual ~CVirtualSurface();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNewClump@CVirtualSurface@DirectComposition@@AEAAJPEAVCTileClump@2@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z
    long AddNewClump(WindissectOpaque *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDrawInternal@CVirtualSurface@DirectComposition@@AEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@PEAPEAXPEAI3PEAUDCOMPOSITION_GUTTERS@@@Z
    long BeginDrawInternal(WindissectOpaque const &, _GUID const &, void * *, unsigned int *, unsigned int *, DCOMPOSITION_GUTTERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanBeginDraw@CVirtualSurface@DirectComposition@@AEAAJ_N@Z
    long CanBeginDraw(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanEndDraw@CVirtualSurface@DirectComposition@@AEAAJXZ
    long CanEndDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanResumeDraw@CVirtualSurface@DirectComposition@@AEAAJXZ
    long CanResumeDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanSuspendDraw@CVirtualSurface@DirectComposition@@AEAAJXZ
    long CanSuspendDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanTrim@CVirtualSurface@DirectComposition@@AEAAJXZ
    long CanTrim();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyAllTilesAndClumps@CVirtualSurface@DirectComposition@@AEAAXXZ
    void DestroyAllTilesAndClumps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDrawInternal@CVirtualSurface@DirectComposition@@AEAAJPEAVCRegion@@@Z
    long EndDrawInternal(CRegion *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePrimitive@CVirtualSurface@DirectComposition@@AEAAJ_N@Z
    long EnsurePrimitive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReclumpRect@CVirtualSurface@DirectComposition@@AEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z
    long ReclumpRect(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAndReleasePrimitive@CVirtualSurface@DirectComposition@@AEAA_NXZ
    bool RemoveAndReleasePrimitive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionDrawingState@CVirtualSurface@DirectComposition@@AEAAXW4SurfaceState@2@@Z
    void TransitionDrawingState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrimTileClumps@CVirtualSurface@DirectComposition@@AEAAJPEBUtagRECT@@I@Z
    long TrimTileClumps(tagRECT const *, unsigned int);
};
} // namespace DirectComposition
