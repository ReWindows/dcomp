#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 14 member(s).
namespace Windows::UI::Composition {
class CompositionAnchor {
public:
    class CachedValues;
    class Private;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddListener@CompositionAnchor@Composition@UI@Windows@@QEAAXPEAUICompositionAnchorListenerPrivate@Private@234@_N@Z
    void AddListener(WindissectOpaque *, bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionAnchor@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionAnchor@Composition@UI@Windows@@QEAA@XZ
    CompositionAnchor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionAnchor@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyVisualUpdated_Callback@CompositionAnchor@Composition@UI@Windows@@QEAAXPEAVVisual@234@MAEBUVector2@Numerics@Foundation@4@AEBUVector3@784@2@Z
    void NotifyVisualUpdated_Callback(WindissectOpaque *, float, WindissectOpaque &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostDestroy@CompositionAnchor@Composition@UI@Windows@@UEAAXXZ
    virtual void PostDestroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionAnchor@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionAnchor@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveListener@CompositionAnchor@Composition@UI@Windows@@QEAAXPEAUICompositionAnchorListenerPrivate@Private@234@@Z
    void RemoveListener(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionAnchor@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionAnchor@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionAnchor();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyListeners_Callback@CompositionAnchor@Composition@UI@Windows@@AEAAXXZ
    void NotifyListeners_Callback();
};
} // namespace Windows::UI::Composition
