#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 17 member(s).
namespace DirectComposition {
class CTileClump {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearValidRegion@CTileClump@DirectComposition@@QEAAXK@Z
    void ClearValidRegion(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyRegionToClump@CTileClump@DirectComposition@@QEAAJPEAV12@PEAUID3D11Texture2D@@AEBVCRegion@@K@Z
    long CopyRegionToClump(WindissectOpaque *, ID3D11Texture2D *, CRegion const &, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyRegionToSurface@CTileClump@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBVCRegion@@_N@Z
    long CopyRegionToSurface(ID3D11Resource *, int, int, CRegion const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySurface@CTileClump@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z
    virtual long CopySurface(tagRECT const *, IDXGISurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTileClump@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAVCVirtualSurface@2@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAV12@@Z
    static long Create(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDraw@CTileClump@DirectComposition@@QEAAXXZ
    void EndDraw();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAvailableRegion@CTileClump@DirectComposition@@QEAAJPEAVCRegion@@@Z
    long GetAvailableRegion(CRegion *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromValidRegion@CTileClump@DirectComposition@@QEAAJAEBVCRegion@@K@Z
    long RemoveFromValidRegion(CRegion const &, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendDraw@CTileClump@DirectComposition@@QEAAXXZ
    void SuspendDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SynchronizeMarshalerState@CTileClump@DirectComposition@@QEAAJXZ
    long SynchronizeMarshalerState();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CTileClump@DirectComposition@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTileClump@DirectComposition@@IEAAJXZ
    long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTileClump@DirectComposition@@MEAA@XZ
    virtual ~CTileClump();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDrawInternal@CTileClump@DirectComposition@@AEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@_NPEAPEAXPEAI4PEAUDCOMPOSITION_GUTTERS@@@Z
    long BeginDrawInternal(WindissectOpaque const &, _GUID const &, bool, void * *, unsigned int *, unsigned int *, DCOMPOSITION_GUTTERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueUnavailableRegion@CTileClump@DirectComposition@@AEAAXAEBVCRegion@@K@Z
    void QueueUnavailableRegion(CRegion const &, unsigned long);
};
} // namespace DirectComposition
