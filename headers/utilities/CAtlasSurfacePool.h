#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 35 member(s).
namespace DirectComposition {
class CAtlasSurfacePool {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDraw@CAtlasSurfacePool@DirectComposition@@QEAAJAEBUtagRECT@@PEBU3@AEBU_GUID@@_NW4DXGI_ALPHA_MODE@@PEAPEAXPEAPEAUID2D1Bitmap@@PEAPEAUID2D1DrawingStateBlock@@@Z
    long BeginDraw(tagRECT const &, tagRECT const *, _GUID const &, bool, int, void * *, ID2D1Bitmap * *, ID2D1DrawingStateBlock * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAtlasSurfacePool@DirectComposition@@QEAA@PEAVCSurfaceManager@1@AEBVSizeU@1@W4DXGI_FORMAT@@_N3@Z
    CAtlasSurfacePool(WindissectOpaque *, WindissectOpaque const &, int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitRendering@CAtlasSurfacePool@DirectComposition@@QEAAXXZ
    void CommitRendering();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySurface@CAtlasSurfacePool@DirectComposition@@QEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z
    void CopySurface(ID3D11Resource *, unsigned int, unsigned int, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CAtlasSurfacePool@DirectComposition@@SAJPEAVCSurfaceManager@2@AEBVSizeU@2@W4DXGI_FORMAT@@_N3PEAPEAV12@@Z
    static long Create(WindissectOpaque *, WindissectOpaque const &, int, bool, bool, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisposeAndDeleteWhitePixelSurface@CAtlasSurfacePool@DirectComposition@@QEAAXXZ
    void DisposeAndDeleteWhitePixelSurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteGutterExtensions@CAtlasSurfacePool@DirectComposition@@QEAAJXZ
    long ExecuteGutterExtensions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushD2DRendering@CAtlasSurfacePool@DirectComposition@@QEAAXK@Z
    void FlushD2DRendering(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DBitmap@CAtlasSurfacePool@DirectComposition@@QEAAJPEAUID2D1DeviceContext@@W4DXGI_ALPHA_MODE@@PEAPEAUID2D1Bitmap1@@@Z
    long GetD2DBitmap(ID2D1DeviceContext *, int, ID2D1Bitmap1* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPendingReleaseSpace@CAtlasSurfacePool@DirectComposition@@QEBA_KXZ
    uint64_t GetPendingReleaseSpace() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurfaceProxyNoRef@CAtlasSurfacePool@DirectComposition@@QEAAJW4DXGI_ALPHA_MODE@@PEAPEAVCCompositionSurfaceProxy@2@@Z
    long GetSurfaceProxyNoRef(int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAged@CAtlasSurfacePool@DirectComposition@@QEBA_NK@Z
    bool HasAged(unsigned long) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@CAtlasSurfacePool@DirectComposition@@QEAAJXZ
    long Hide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CAtlasSurfacePool@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAvailable@CAtlasSurfacePool@DirectComposition@@QEBA_NXZ
    bool IsAvailable() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInUseSurfaceAreaChanged@CAtlasSurfacePool@DirectComposition@@QEAAX_K0@Z
    void NotifyInUseSurfaceAreaChanged(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Offer@CAtlasSurfacePool@DirectComposition@@QEAAJXZ
    long Offer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PaintWhitePixel@CAtlasSurfacePool@DirectComposition@@QEAAXXZ
    void PaintWhitePixel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordUtilizationInfo@CAtlasSurfacePool@DirectComposition@@QEAAXXZ
    void RecordUtilizationInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ
    void RemoveGuardRect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ
    void RestoreGuardRect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendDraw@CAtlasSurfacePool@DirectComposition@@QEAAXPEAUID2D1Bitmap@@PEAUID2D1DrawingStateBlock@@PEAPEAUID2D1Image@@PEAK@Z
    void SuspendDraw(ID2D1Bitmap *, ID2D1DrawingStateBlock *, ID2D1Image * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSubresource@CAtlasSurfacePool@DirectComposition@@QEAAXAEBUtagRECT@@PEBXII_N@Z
    void UpdateSubresource(tagRECT const &, void const *, unsigned int, unsigned int, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAJXZ
    long CreateDeviceResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?D2DEndDraw@CAtlasSurfacePool@DirectComposition@@AEAAXXZ
    void D2DEndDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureD2DDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAJXZ
    long EnsureD2DDeviceResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeD2DDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAXXZ
    void FreeD2DDeviceResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAXXZ
    void FreeDeviceResources();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DBitmap@CAtlasSurfacePool@DirectComposition@@AEAAJW4DXGI_ALPHA_MODE@@PEAPEAUID2D1Bitmap1@@@Z
    long GetD2DBitmap(int, ID2D1Bitmap1* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAtlasSurfacePool@DirectComposition@@AEAAJXZ
    long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEmptyGuardRect@CAtlasSurfacePool@DirectComposition@@AEAAXXZ
    void SetEmptyGuardRect();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGuardRect@CAtlasSurfacePool@DirectComposition@@AEAAXAEBUtagRECT@@@Z
    void SetGuardRect(tagRECT const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAtlasSurfacePool@DirectComposition@@EEAA@XZ
    virtual ~CAtlasSurfacePool();
};
} // namespace DirectComposition
