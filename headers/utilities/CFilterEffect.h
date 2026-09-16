#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 14 member(s).
namespace DirectComposition {
class CFilterEffect {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisposeOnDelayedDestruction@CFilterEffect@DirectComposition@@UEAAXXZ
    virtual void DisposeOnDelayedDestruction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceProxy@CFilterEffect@DirectComposition@@UEAAPEAVCFilterEffectProxy@2@XZ
    virtual WindissectOpaque * GetResourceProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDelayedDestructionRequest@CFilterEffect@DirectComposition@@UEAA_NXZ
    virtual bool HandleDelayedDestructionRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate@CFilterEffect@DirectComposition@@UEAAXPEAVCDirtyNotifier@2@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual void Invalidate(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMarshalerRelease@CFilterEffect@DirectComposition@@UEAAXXZ
    virtual void OnMarshalerRelease();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFilterEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RebuildInternal@CFilterEffect@DirectComposition@@UEAAJXZ
    virtual long RebuildInternal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInput@CFilterEffect@DirectComposition@@QEAAJIPEAUIUnknown@@I@Z
    long SetInput(unsigned int, IUnknown *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatesSurfaces@CFilterEffect@DirectComposition@@UEAA_NXZ
    virtual bool UpdatesSurfaces();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFilterEffect@DirectComposition@@IEAA@PEAVCFilterEffectProxy@1@@Z
    CFilterEffect(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurfaceProperties@CFilterEffect@DirectComposition@@IEAAJPEAVCBitmapInfoFront@2@PEAPEAUIUnknown@@PEAUtagRECT@@@Z
    long GetSurfaceProperties(WindissectOpaque *, IUnknown * *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFilterEffect@DirectComposition@@IEAAJXZ
    long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSurfaceReferenceAtIndex@CFilterEffect@DirectComposition@@IEAAXIPEAVCBitmapInfoFront@2@@Z
    void SetSurfaceReferenceAtIndex(unsigned int, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFilterEffect@DirectComposition@@MEAA@XZ
    virtual ~CFilterEffect();
};
} // namespace DirectComposition
