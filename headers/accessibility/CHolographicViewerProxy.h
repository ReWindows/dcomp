#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 14 member(s).
namespace DirectComposition {
class CHolographicViewerProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireBuffer@CHolographicViewerProxy@DirectComposition@@UEAAJPEAIAEBU_GUID@@PEAPEAX@Z
    virtual long AcquireBuffer(unsigned int *, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHolographicViewerProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHolographicViewerProxy@DirectComposition@@QEAA@I@Z
    CHolographicViewerProxy(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferAvailableEvent@CHolographicViewerProxy@DirectComposition@@UEAAPEAXXZ
    virtual void * GetBufferAvailableEvent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMetadata@CHolographicViewerProxy@DirectComposition@@UEAAJIPEAXPEAI@Z
    virtual long GetMetadata(unsigned int, void *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CHolographicViewerProxy@DirectComposition@@QEAAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@_NIAEBU_GUID@@I@Z
    long Initialize(WindissectOpaque *, unsigned int, unsigned int, int, bool, unsigned int, _GUID const &, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHolographicViewerProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHolographicViewerProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseBuffer@CHolographicViewerProxy@DirectComposition@@UEAAJIPEAX@Z
    virtual long ReleaseBuffer(unsigned int, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFlags@CHolographicViewerProxy@DirectComposition@@UEAAJK@Z
    virtual long SetFlags(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetFrameRate@CHolographicViewerProxy@DirectComposition@@UEAAJII@Z
    virtual long SetTargetFrameRate(unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHolographicViewerProxy@DirectComposition@@UEAA@XZ
    virtual ~CHolographicViewerProxy();
};
} // namespace DirectComposition
