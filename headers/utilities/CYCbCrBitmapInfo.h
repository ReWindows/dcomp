#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace DirectComposition {
class CYCbCrBitmapInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CYCbCrBitmapInfo@DirectComposition@@SAJPEAVCSurfaceFactory@2@VSizeU@2@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAVCYCbCrSurface@2@PEAPEAV12@@Z
    static long Create(WindissectOpaque *, WindissectOpaque, int, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSurfaceHidden@CYCbCrBitmapInfo@DirectComposition@@UEAAJXZ
    virtual long HandleSurfaceHidden();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSurfaceReclaimed@CYCbCrBitmapInfo@DirectComposition@@UEAAJ_N0@Z
    virtual long HandleSurfaceReclaimed(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeviceCommit@CYCbCrBitmapInfo@DirectComposition@@QEAAXPEAV?$DynArrayIANoCtor@PEAUIUnknown@@$0BA@$0A@@@PEAV?$DynArrayIANoCtor@UDCOMPOSITION_TOKEN_SURFACE_UPDATE_INFO@@$0BA@$0A@@@@Z
    void OnDeviceCommit(WindissectOpaque *, WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CYCbCrBitmapInfo@DirectComposition@@IEAAJPEAVCYCbCrSurface@2@@Z
    long Initialize(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CYCbCrBitmapInfo@DirectComposition@@MEAA@XZ
    virtual ~CYCbCrBitmapInfo();
};
} // namespace DirectComposition
