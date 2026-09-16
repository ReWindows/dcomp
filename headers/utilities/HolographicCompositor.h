#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 12 member(s).
namespace Windows::UI::Composition::Internal {
class HolographicCompositor {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@HolographicCompositor@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageCallType@HolographicCompositor@Internal@Composition@UI@Windows@@UEAAPEBUMsgCallTypeDefinition@@XZ
    virtual MsgCallTypeDefinition const * GetMessageCallType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Message_CompositionStateChanged_Callback@HolographicCompositor@Internal@Composition@UI@Windows@@QEAAJJ@Z
    long Message_CompositionStateChanged_Callback(long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@HolographicCompositor@Internal@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@HolographicCompositor@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStartupDeferral@HolographicCompositor@Internal@Composition@UI@Windows@@QEAAXPEAUIAsyncDeferral@25@@Z
    void SetStartupDeferral(::Windows::Internal::IAsyncDeferral *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRegisterCallbackId@HolographicCompositor@Internal@Composition@UI@Windows@@UEAA_NXZ
    virtual bool ShouldRegisterCallbackId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_StatusChanged@HolographicCompositor@Internal@Composition@UI@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    long add_StatusChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HolographicCompositor@Internal@Composition@UI@Windows@@UEAA@XZ
    virtual ~HolographicCompositor();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeState@HolographicCompositor@Internal@Composition@UI@Windows@@AEAAXJ@Z
    void ChangeState(long);
};
} // namespace Windows::UI::Composition::Internal
