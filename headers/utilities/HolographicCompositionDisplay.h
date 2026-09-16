#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 13 member(s).
namespace Windows::UI::Composition::Internal {
class HolographicCompositionDisplay {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageCallType@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@UEAAPEBUMsgCallTypeDefinition@@XZ
    virtual MsgCallTypeDefinition const * GetMessageCallType();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HolographicCompositionDisplay@Internal@Composition@UI@Windows@@QEAA@XZ
    HolographicCompositionDisplay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Message_DisplayStateChanged@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@QEAAJJ@Z
    long Message_DisplayStateChanged(long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@AEBU_GUID@@M@Z
    long RuntimeClassInitialize(WindissectOpaque *, _GUID const &, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStartupDeferral@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@QEAAXPEAUIAsyncDeferral@25@@Z
    void SetStartupDeferral(::Windows::Internal::IAsyncDeferral *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRegisterCallbackId@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@UEAA_NXZ
    virtual bool ShouldRegisterCallbackId();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HolographicCompositionDisplay@Internal@Composition@UI@Windows@@UEAA@XZ
    virtual ~HolographicCompositionDisplay();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeState@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@AEAAXJ@Z
    void ChangeState(long);
};
} // namespace Windows::UI::Composition::Internal
