#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 37 member(s).
namespace DirectComposition {
class CPrimitiveGroup {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPrimitiveGroup@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitSurfaceUpdates@CPrimitiveGroup@DirectComposition@@QEAAJXZ
    long CommitSurfaceUpdates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisposeOnDelayedDestruction@CPrimitiveGroup@DirectComposition@@UEAAXXZ
    virtual void DisposeOnDelayedDestruction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDelayedDestructionRequest@CPrimitiveGroup@DirectComposition@@UEAA_NXZ
    virtual bool HandleDelayedDestructionRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LinkPrimitive@CPrimitiveGroup@DirectComposition@@UEAAJPEAUIDCompositionPrimitivePartner@@H@Z
    virtual long LinkPrimitive(IDCompositionPrimitivePartner *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LinkPrimitives@CPrimitiveGroup@DirectComposition@@UEAAJPEAUIDCompositionPrimitiveGroupPartner@@H@Z
    virtual long LinkPrimitives(IDCompositionPrimitiveGroupPartner *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMarshalerRelease@CPrimitiveGroup@DirectComposition@@UEAAXXZ
    virtual void OnMarshalerRelease();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPrimitiveGroup@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPrimitiveGroup@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatesSurfaces@CPrimitiveGroup@DirectComposition@@UEAA_NXZ
    virtual bool UpdatesSurfaces();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAdditionalHitTestPrimitive@CPrimitiveGroup@DirectComposition@@IEAAXPEAVCVirtualSurfacePrimitive@2@@Z
    void AddAdditionalHitTestPrimitive(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddClippingPrimitive@CPrimitiveGroup@DirectComposition@@IEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAI@Z
    long AddClippingPrimitive(D2D_RECT_F const &, D2D_MATRIX_3X2_F const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPrimitiveInternal@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOccluder@2@1@Z
    long AddPrimitiveInternal(WindissectOpaque *, unsigned int, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BatchPrimitive@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOccluder@2@PEAPEAVCPrimitiveBatch@2@@Z
    long BatchPrimitive(WindissectOpaque *, unsigned int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPrimitiveGroup@DirectComposition@@IEAA@PEAVCPrimitiveGroupProxy@1@@Z
    CPrimitiveGroup(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandBufferSize@CPrimitiveGroup@DirectComposition@@IEBAJPEAI@Z
    long GetCommandBufferSize(unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DCommandList@CPrimitiveGroup@DirectComposition@@IEAAJPEAUID2D1DeviceContext@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z
    long GetD2DCommandList(ID2D1DeviceContext *, ID2D1PrivateCompositorCommandList * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimitiveBufferSize@CPrimitiveGroup@DirectComposition@@IEBAJPEAI@Z
    long GetPrimitiveBufferSize(unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate@CPrimitiveGroup@DirectComposition@@IEAAXPEAVCPrimitive@2@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    void Invalidate(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateRealization@CPrimitiveGroup@DirectComposition@@IEAAXXZ
    void InvalidateRealization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyVirtualSurfaceDestroyed@CPrimitiveGroup@DirectComposition@@IEAAXXZ
    void NotifyVirtualSurfaceDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RebuildAndRemoveFromDirtyList@CPrimitiveGroup@DirectComposition@@IEAAJXZ
    long RebuildAndRemoveFromDirtyList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ
    virtual long RebuildInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseAllResources@CPrimitiveGroup@DirectComposition@@IEAAXXZ
    void ReleaseAllResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveGuardRects@CPrimitiveGroup@DirectComposition@@IEAAXXZ
    void RemoveGuardRects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreGuardRects@CPrimitiveGroup@DirectComposition@@IEAAXXZ
    void RestoreGuardRects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteCommandBuffer@CPrimitiveGroup@DirectComposition@@IEAAXPEAEI@Z
    void WriteCommandBuffer(unsigned char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WritePrimitiveBuffer@CPrimitiveGroup@DirectComposition@@IEAAXPEAEIPEAI@Z
    void WritePrimitiveBuffer(unsigned char *, unsigned int, unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPrimitiveGroup@DirectComposition@@MEAA@XZ
    virtual ~CPrimitiveGroup();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EtwLogPrimitives@CPrimitiveGroup@DirectComposition@@AEAAXPEBUBatchedOccluder@2@@Z
    void EtwLogPrimitives(WindissectOpaque const *);
};
} // namespace DirectComposition
