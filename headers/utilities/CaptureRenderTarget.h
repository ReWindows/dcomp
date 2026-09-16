#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 13 member(s).
namespace Windows::UI::Composition::Internal {
class CaptureRenderTarget {
public:
    class Interop;
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CaptureRenderTarget@Internal@Composition@UI@Windows@@QEAA@XZ
    CaptureRenderTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAdapterLuidAndBuffers@CaptureRenderTarget@Internal@Composition@UI@Windows@@QEAAJAEBU_LUID@@IPEAPEAX@Z
    long SetAdapterLuidAndBuffers(_LUID const &, unsigned int, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetController@CaptureRenderTarget@Internal@Composition@UI@Windows@@QEAAXPEAVCaptureControllerBase@2345@@Z
    void SetController(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFlipManagerWithHandle@CaptureRenderTarget@Internal@Composition@UI@Windows@@QEAAJPEAX@Z
    long SetFlipManagerWithHandle(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsCursorEnabled@CaptureRenderTarget@Internal@Composition@UI@Windows@@QEAAX_N@Z
    void SetIsCursorEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSDRBoost@CaptureRenderTarget@Internal@Composition@UI@Windows@@QEAAXM@Z
    void SetSDRBoost(float);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAA@XZ
    virtual ~CaptureRenderTarget();
};
} // namespace Windows::UI::Composition::Internal
