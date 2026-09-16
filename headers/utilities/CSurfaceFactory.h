#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 29 member(s).
namespace DirectComposition {
class CSurfaceFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSurfaceFactory@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSurfaceFactory@DirectComposition@@SAJPEAVCDevice@2@PEAUIUnknown@@PEAV12@_NPEAPEAV12@@Z
    static long Create(WindissectOpaque *, IUnknown *, WindissectOpaque *, bool, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGradientSurface@CSurfaceFactory@DirectComposition@@UEAAJIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@W4D2D1_EXTEND_MODE@@PEAPEAUIDCompositionSurface@@PEAI@Z
    virtual long CreateGradientSurface(unsigned int, int, int, int, IDCompositionSurface * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@_NPEAPEAUIDCompositionSurface@@@Z
    virtual long CreateSurface(unsigned int, unsigned int, int, int, bool, IDCompositionSurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionSurface@@@Z
    virtual long CreateSurface(unsigned int, unsigned int, int, int, IDCompositionSurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVirtualSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionVirtualSurface@@@Z
    virtual long CreateVirtualSurface(unsigned int, unsigned int, int, int, IDCompositionVirtualSurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateYCbCrSurface@CSurfaceFactory@DirectComposition@@QEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEAPEAUIDCompositionYCbCrSurfacePartner@@@Z
    long CreateYCbCrSurface(unsigned int, unsigned int, int, IDCompositionYCbCrSurfacePartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CSurfaceFactory@DirectComposition@@UEAAJXZ
    virtual long Flush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushGutterExtensions@CSurfaceFactory@DirectComposition@@QEAAJXZ
    long FlushGutterExtensions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideSurfacesIfPendingOffer@CSurfaceFactory@DirectComposition@@QEAAJXZ
    long HideSurfacesIfPendingOffer();
    // Category: Method | Source: PE Export
    // Symbol: ?OfferSurfaceResources@CSurfaceFactory@DirectComposition@@UEAAJXZ
    virtual long OfferSurfaceResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OfferSurfacesIfPendingOffer@CSurfaceFactory@DirectComposition@@QEAAJXZ
    long OfferSurfacesIfPendingOffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@CSurfaceFactory@DirectComposition@@QEAAJXZ
    long Present();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSurfaceFactory@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadTexture@CSurfaceFactory@DirectComposition@@QEAAXPEAUIUnknown@@@Z
    void ReadTexture(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReclaimSurfaceResources@CSurfaceFactory@DirectComposition@@UEAAJPEAH@Z
    virtual long ReclaimSurfaceResources(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSurfaceFactory@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDeadSurfaces@CSurfaceFactory@DirectComposition@@QEAAXPEAUSurfaceRequestStruct@2@_N@Z
    void RemoveDeadSurfaces(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSurfaceUpdate@CSurfaceFactory@DirectComposition@@QEAAXPEAVCBitmapInfoFront@2@@Z
    void RemoveSurfaceUpdate(WindissectOpaque *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSurfaceFactory@DirectComposition@@IEAA@PEAVCDevice@1@_N@Z
    CSurfaceFactory(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSurfaceFactory@DirectComposition@@IEAAJPEAUIUnknown@@PEAV12@@Z
    long Initialize(IUnknown *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSurfaceFactory@DirectComposition@@MEAA@XZ
    virtual ~CSurfaceFactory();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupSurfaceManagers@CSurfaceFactory@DirectComposition@@AEAAXXZ
    void CleanupSurfaceManagers();
};
} // namespace DirectComposition
