#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 6 member(s).
namespace DirectComposition {
class CVirtualMonitorCaptureRenderTargetProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@QEAA@I@Z
    CVirtualMonitorCaptureRenderTargetProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBindData@CVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@QEAAJ_KAEBUtagRECT@@1_NI@Z
    long SetBindData(uint64_t, tagRECT const &, tagRECT const &, bool, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBoundsInMonitor@CVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@UEAAJAEBUtagRECT@@@Z
    virtual long SetBoundsInMonitor(tagRECT const &);
};
} // namespace DirectComposition
