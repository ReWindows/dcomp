#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 37 member(s).
namespace Windows::UI::Composition {
class CompositionIsland {
public:
    class Api;
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionIsland@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateVisualId@CompositionIsland@Composition@UI@Windows@@QEAAJXZ
    long AllocateVisualId();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionIsland@Composition@UI@Windows@@QEAA@XZ
    CompositionIsland();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectIsland@CompositionIsland@Composition@UI@Windows@@SAJPEAVCompositionIslandSite@234@PEAV1234@@Z
    static long ConnectIsland(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionIsland@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectIsland@CompositionIsland@Composition@UI@Windows@@SAJPEAVCompositionIslandSite@234@PEAV1234@@Z
    static long DisconnectIsland(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectIslandAsync@CompositionIsland@Composition@UI@Windows@@SAJPEAVCompositionIslandSite@234@PEAV1234@PEAPEAUIAsyncAction@Foundation@4@@Z
    static long DisconnectIslandAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationProvider_Callback@CompositionIsland@Composition@UI@Windows@@QEAAJPEAPEAUIInspectable@@@Z
    long GetAutomationProvider_Callback(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIslandSite_NoLock@CompositionIsland@Composition@UI@Windows@@SAJPEAUICompositionIslandSite@234@PEAPEAVCompositionIslandSite@234@@Z
    static long GetIslandSite_NoLock(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsland_NoLock@CompositionIsland@Composition@UI@Windows@@SAJPEAUICompositionIsland@234@PEAPEAV1234@@Z
    static long GetIsland_NoLock(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualReferenceId@CompositionIsland@Composition@UI@Windows@@UEAAJPEA_K@Z
    virtual long GetVisualReferenceId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyFromEnvironment_ChangeValues_Callback@CompositionIsland@Composition@UI@Windows@@QEAAXUfloat3@Numerics@Foundation@4@MM@Z
    void NotifyFromEnvironment_ChangeValues_Callback(WindissectOpaque, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostDestroy@CompositionIsland@Composition@UI@Windows@@UEAAXXZ
    virtual void PostDestroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionIsland@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionIsland@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionIsland@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnvironment@CompositionIsland@Composition@UI@Windows@@QEAAXPEAVCompositionIslandEnvironment@234@@Z
    void SetEnvironment(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsContentVisible@CompositionIsland@Composition@UI@Windows@@QEAAX_N@Z
    void SetIsContentVisible(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRequestedSize@CompositionIsland@Composition@UI@Windows@@QEAAXUfloat2@Numerics@Foundation@4@@Z
    void SetRequestedSize(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionIsland@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionIsland();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyFromAnchor_Updated_Callback@CompositionIsland@Composition@UI@Windows@@IEAAXMUfloat3@Numerics@Foundation@4@@Z
    void NotifyFromAnchor_Updated_Callback(float, WindissectOpaque);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAutomationProviderRequested@CompositionIsland@Composition@UI@Windows@@AEAAJPEAU?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandAutomationProviderRequestedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    long AddAutomationProviderRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAutomationProviderRequested_Helper@CompositionIsland@Composition@UI@Windows@@AEAAXPEAU?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandAutomationProviderRequestedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    void AddAutomationProviderRequested_Helper(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connection_2_ReconfigureIslandSite_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICompositionIslandSite@234@PEAPEAVCompositionIslandSite@234@PEAPEAV1234@PEAV1234@PEA_NPEAPEAX@Z
    static long Connection_2_ReconfigureIslandSite_NoLock(WindissectOpaque *, WindissectOpaque * *, WindissectOpaque * *, WindissectOpaque *, bool *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connection_3_ReconfigureOldIsland_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAV1234@_N@Z
    static long Connection_3_ReconfigureOldIsland_NoLock(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connection_4_ReconfigureIsland_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAVCompositionIslandSite@234@PEAV1234@PEAX@Z
    static long Connection_4_ReconfigureIsland_NoLock(WindissectOpaque *, WindissectOpaque *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connection_5_CompleteIslandSite_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAVCompositionIslandSite@234@PEAV1234@@Z
    static long Connection_5_CompleteIslandSite_NoLock(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deferred_InvokeTransformChanged@CompositionIsland@Composition@UI@Windows@@CAJPEAX@Z
    static long Deferred_InvokeTransformChanged(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndpointProc@CompositionIsland@Composition@UI@Windows@@CAJPEAXPEBXH@Z
    static long EndpointProc(void *, void const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationHostProvider@CompositionIsland@Composition@UI@Windows@@AEAAJPEAPEAUIInspectable@@@Z
    long GetAutomationHostProvider(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeTransformChanged_Callback@CompositionIsland@Composition@UI@Windows@@AEAAXXZ
    void InvokeTransformChanged_Callback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTransformChanged_Callback@CompositionIsland@Composition@UI@Windows@@AEAAXXZ
    void NotifyTransformChanged_Callback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterUIAEndpoint_Callback@CompositionIsland@Composition@UI@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z
    static void RegisterUIAEndpoint_Callback(_TP_CALLBACK_INSTANCE *, void *, _TP_WORK *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateConnection_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICompositionIslandSite@234@PEAUICompositionIsland@234@_N@Z
    static long UpdateConnection_NoLock(WindissectOpaque *, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDeferredNotifications_Callback@CompositionIsland@Composition@UI@Windows@@AEAAX_N@Z
    void UpdateDeferredNotifications_Callback(bool);
};
} // namespace Windows::UI::Composition
