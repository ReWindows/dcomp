#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 19 member(s).
namespace DirectComposition {
class CAtlasSurface {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTokenInformation@CAtlasSurface@DirectComposition@@QEAAJPEAV?$DynArrayIANoCtor@PEAUIUnknown@@$0BA@$0A@@@PEAV?$DynArrayIANoCtor@UDCOMPOSITION_TOKEN_SURFACE_UPDATE_INFO@@$0BA@$0A@@@@Z
    long AddTokenInformation(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanSatisfyLargeSurfaceRequest@CAtlasSurface@DirectComposition@@QEBA_NAEBUSurfaceRequestStruct@2@@Z
    bool CanSatisfyLargeSurfaceRequest(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySurface@CAtlasSurface@DirectComposition@@QEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z
    void CopySurface(ID3D11Resource *, unsigned int, unsigned int, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@IIAEBVSizeU@2@UDCOMPOSITION_GUTTERS@@PEAPEAV12@@Z
    static long Create(WindissectOpaque *, unsigned int, unsigned int, WindissectOpaque const &, DCOMPOSITION_GUTTERS, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWhitePixel@CAtlasSurface@DirectComposition@@SAJPEAVCAtlasSurfacePool@2@PEAPEAV12@@Z
    static long CreateWhitePixel(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@CAtlasSurface@DirectComposition@@UEAAXXZ
    virtual void Dispose();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTexCoordBounds@CAtlasSurface@DirectComposition@@QEAAX_N0PEAUD2D_RECT_F@@@Z
    void GetTexCoordBounds(bool, bool, D2D_RECT_F *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CAtlasSurface@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWhitePixelSurface@CAtlasSurface@DirectComposition@@QEBA_NXZ
    bool IsWhitePixelSurface() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeDraw@CAtlasSurface@DirectComposition@@QEAAXPEAUID2D1Bitmap@@PEAUID2D1Image@@PEAUID2D1DrawingStateBlock@@AEBUtagRECT@@@Z
    void ResumeDraw(ID2D1Bitmap *, ID2D1Image *, ID2D1DrawingStateBlock *, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reuse@CAtlasSurface@DirectComposition@@QEAAXIIAEBVSizeU@2@UDCOMPOSITION_GUTTERS@@@Z
    void Reuse(unsigned int, unsigned int, WindissectOpaque const &, DCOMPOSITION_GUTTERS);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SurfaceHidden@CAtlasSurface@DirectComposition@@QEAAJXZ
    long SurfaceHidden();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevice@CAtlasSurface@DirectComposition@@EEAAPEAVCDevice@2@XZ
    virtual WindissectOpaque * GetDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAtlasSurface@DirectComposition@@AEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeforeSynchronizationStateUpdated@CAtlasSurface@DirectComposition@@EEAAXW4State@CCompositorSynchronizedObject@2@@Z
    virtual void OnBeforeSynchronizationStateUpdated(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reuse@CAtlasSurface@DirectComposition@@EEAAXXZ
    virtual void Reuse();
};
} // namespace DirectComposition
