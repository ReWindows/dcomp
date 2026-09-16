#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 21 member(s).
namespace Windows::UI::Composition {
class CompositionIslandSite {
public:
    class Api;
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionIslandSite@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionIslandSite@Composition@UI@Windows@@QEAA@XZ
    CompositionIslandSite();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionIslandSite@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostDestroy@CompositionIslandSite@Composition@UI@Windows@@UEAAXXZ
    virtual void PostDestroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionIslandSite@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionIslandSite@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionIslandSite@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionIslandSite@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionIslandSite();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnectionVisual@CompositionIslandSite@Composition@UI@Windows@@IEAAPEAVVisual@234@XZ
    WindissectOpaque * GetConnectionVisual();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSiteVisual@CompositionIslandSite@Composition@UI@Windows@@MEAAPEAVVisual@234@XZ
    virtual WindissectOpaque * GetSiteVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyToIsland_ActualSizeChanged@CompositionIslandSite@Composition@UI@Windows@@IEAAXUfloat2@Numerics@Foundation@4@@Z
    void NotifyToIsland_ActualSizeChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyToIsland_Closed@CompositionIslandSite@Composition@UI@Windows@@IEAAXXZ
    void NotifyToIsland_Closed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyToIsland_DeferTransformChanged@CompositionIslandSite@Composition@UI@Windows@@IEAAX_N@Z
    void NotifyToIsland_DeferTransformChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@CompositionIslandSite@Composition@UI@Windows@@MEAAXXZ
    virtual void OnConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnecting@CompositionIslandSite@Composition@UI@Windows@@MEAAXXZ
    virtual void OnDisconnecting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestedSizeChanged_Callback@CompositionIslandSite@Composition@UI@Windows@@MEAAXXZ
    virtual void OnRequestedSizeChanged_Callback();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTransformChangedDeferralInternal@CompositionIslandSite@Composition@UI@Windows@@AEAAJPEAPEAUICompositionNotificationDeferral@234@@Z
    long CreateTransformChangedDeferralInternal(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyResources@CompositionIslandSite@Composition@UI@Windows@@AEAAXXZ
    void DestroyResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndpointProc@CompositionIslandSite@Composition@UI@Windows@@CAJPEAXPEBXH@Z
    static long EndpointProc(void *, void const *, int);
};
} // namespace Windows::UI::Composition
