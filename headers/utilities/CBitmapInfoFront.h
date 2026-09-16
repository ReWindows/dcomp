#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 23 member(s).
namespace DirectComposition {
class CBitmapInfoFront {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBitmapInfoFront@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyUpdate@CBitmapInfoFront@DirectComposition@@QEAAXPEAVCBitmapInfoBack@2@@Z
    void ApplyUpdate(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanCopyDirectly@CBitmapInfoFront@DirectComposition@@QEAA_NPEAVCBitmapInfoBack@2@AEBUtagRECT@@1@Z
    bool CanCopyDirectly(WindissectOpaque *, tagRECT const &, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitUpdate@CBitmapInfoFront@DirectComposition@@QEAAJXZ
    long CommitUpdate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySurface@CBitmapInfoFront@DirectComposition@@UEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z
    virtual void CopySurface(ID3D11Resource *, unsigned int, unsigned int, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushD2D@CBitmapInfoFront@DirectComposition@@QEAA_NXZ
    bool FlushD2D();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetType@CBitmapInfoFront@DirectComposition@@UEBA?AW4Enum@NotifierType@2@XZ
    virtual int GetType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSurfaceHidden@CBitmapInfoFront@DirectComposition@@UEAAJXZ
    virtual long HandleSurfaceHidden();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSurfaceReclaimed@CBitmapInfoFront@DirectComposition@@UEAAJ_N0@Z
    virtual long HandleSurfaceReclaimed(bool, bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBitmapInfoFront@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveGuardRect@CBitmapInfoFront@DirectComposition@@QEAAXXZ
    void RemoveGuardRect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@CBitmapInfoFront@DirectComposition@@QEAAJII@Z
    long Resize(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreGuardRect@CBitmapInfoFront@DirectComposition@@QEAAXXZ
    void RestoreGuardRect();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBitmapInfoFront@DirectComposition@@UEAA@XZ
    virtual ~CBitmapInfoFront();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPreviousSurfaceList@CBitmapInfoFront@DirectComposition@@AEAAXXZ
    void ClearPreviousSurfaceList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseCurrentSurface@CBitmapInfoFront@DirectComposition@@AEAAXXZ
    void ReleaseCurrentSurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSurface@CBitmapInfoFront@DirectComposition@@AEAAJIIPEAPEAVCAtlasSurface@2@@Z
    long RequestSurface(unsigned int, unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnuseSurface@CBitmapInfoFront@DirectComposition@@AEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@@Z
    void UnuseSurface(WindissectOpaque *, tagRECT const &);
};
} // namespace DirectComposition
