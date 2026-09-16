#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 15 member(s).
namespace Windows::UI::Composition {
class VisualIslandSite {
public:
    class Api;
    class Private;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VisualIslandSite@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@VisualIslandSite@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSiteVisual@VisualIslandSite@Composition@UI@Windows@@UEAAPEAVVisual@234@XZ
    virtual WindissectOpaque * GetSiteVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@VisualIslandSite@Composition@UI@Windows@@UEAAXXZ
    virtual void OnConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnecting@VisualIslandSite@Composition@UI@Windows@@UEAAXXZ
    virtual void OnDisconnecting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestedSizeChanged_Callback@VisualIslandSite@Composition@UI@Windows@@UEAAXXZ
    virtual void OnRequestedSizeChanged_Callback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostDestroy@VisualIslandSite@Composition@UI@Windows@@UEAAXXZ
    virtual void PostDestroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VisualIslandSite@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VisualIslandSite@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@VisualIslandSite@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VisualIslandSite@Composition@UI@Windows@@QEAA@XZ
    VisualIslandSite();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VisualIslandSite@Composition@UI@Windows@@UEAA@XZ
    virtual ~VisualIslandSite();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyContent@VisualIslandSite@Composition@UI@Windows@@MEAAXXZ
    virtual void DestroyContent();
};
} // namespace Windows::UI::Composition
