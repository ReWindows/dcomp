#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 28 member(s).
namespace DirectComposition {
class CSurfaceManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AlignSurfaceSize@CSurfaceManager@DirectComposition@@SA?AVSizeU@2@AEBV32@@Z
    static WindissectOpaque AlignSurfaceSize(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CapMaximumAllocations@CSurfaceManager@DirectComposition@@QEAAX_N@Z
    void CapMaximumAllocations(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CSurfaceManager@DirectComposition@@QEAAXXZ
    void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectDeadSurfaces@CSurfaceManager@DirectComposition@@QEAAX_NPEAUSurfaceRequestStruct@2@0@Z
    void CollectDeadSurfaces(bool, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSurfaceManager@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAV12@PEAPEAV12@@Z
    static long Create(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@CSurfaceManager@DirectComposition@@QEAAXXZ
    void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushD2DContexts@CSurfaceManager@DirectComposition@@QEAAXXZ
    void FlushD2DContexts();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHintTileHeight@CSurfaceManager@DirectComposition@@QEAAIVSizeU@2@@Z
    unsigned int GetHintTileHeight(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CSurfaceManager@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OfferSurfaceResources@CSurfaceManager@DirectComposition@@QEAAJXZ
    long OfferSurfaceResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreallocateDynamicPools@CSurfaceManager@DirectComposition@@QEAAJXZ
    long PreallocateDynamicPools();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordSurfaceDestruction@CSurfaceManager@DirectComposition@@QEAAXPEBVCAtlasSurfacePool@2@@Z
    void RecordSurfaceDestruction(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordSurfaceStateChange@CSurfaceManager@DirectComposition@@QEAAXPEAVCAtlasSurface@2@W4State@CCompositorSynchronizedObject@2@1@Z
    void RecordSurfaceStateChange(WindissectOpaque *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordUtilizationInfo@CSurfaceManager@DirectComposition@@QEAAXXZ
    void RecordUtilizationInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestLargeSurface@CSurfaceManager@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBUSurfaceRequestStruct@2@_N@Z
    long RequestLargeSurface(WindissectOpaque * *, WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtlasSurface@2@@Z
    long RequestSurface(int, bool, WindissectOpaque const &, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHintTiles@CSurfaceManager@DirectComposition@@QEAAXPEBUtagRECT@@I@Z
    void SetHintTiles(tagRECT const *, unsigned int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeVideoMemoryBreakdown@CSurfaceManager@DirectComposition@@IEAAXXZ
    void ComputeVideoMemoryBreakdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrimLargeSurfaces@CSurfaceManager@DirectComposition@@IEAAXXZ
    void TrimLargeSurfaces();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSurfaceManager@DirectComposition@@AEAA@XZ
    CSurfaceManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeAtlasSize@CSurfaceManager@DirectComposition@@AEAAXAEBUSurfaceRequestStruct@2@W4DXGI_FORMAT@@_NPEAVSizeU@2@@Z
    void ComputeAtlasSize(WindissectOpaque const &, int, bool, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeLargeSurfaceAllocationSizes@CSurfaceManager@DirectComposition@@AEAAXAEBUSurfaceRequestStruct@2@_NPEAVSizeU@2@PEAUDCOMPOSITION_GUTTERS@@PEA_N@Z
    void ComputeLargeSurfaceAllocationSizes(WindissectOpaque const &, bool, WindissectOpaque *, DCOMPOSITION_GUTTERS *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardLargeSurface@CSurfaceManager@DirectComposition@@AEAAXPEAVCAtlasSurface@2@@Z
    void DiscardLargeSurface(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSurfaceManager@DirectComposition@@AEAAJPEAVCSurfaceFactory@2@PEAV12@@Z
    long Initialize(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SortHintTiles@CSurfaceManager@DirectComposition@@AEAAXXZ
    void SortHintTiles();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSurfaceManager@DirectComposition@@EEAA@XZ
    virtual ~CSurfaceManager();
};
} // namespace DirectComposition
