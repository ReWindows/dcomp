#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 13 member(s).
namespace Windows::UI::Composition {
class VisualTreeIsland {
public:
    class Api;
    class Partner;
    class Private;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VisualTreeIsland@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualSize@VisualTreeIsland@Composition@UI@Windows@@UEAAAEBUVector2@Numerics@Foundation@4@XZ
    virtual WindissectOpaque & GetActualSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentVisual@VisualTreeIsland@Composition@UI@Windows@@UEAAPEAVVisual@234@XZ
    virtual WindissectOpaque * GetContentVisual();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VisualTreeIsland@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VisualTreeIsland@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@VisualTreeIsland@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActualSize@VisualTreeIsland@Composition@UI@Windows@@UEAAXUfloat2@Numerics@Foundation@4@@Z
    virtual void SetActualSize(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VisualTreeIsland@Composition@UI@Windows@@QEAA@XZ
    VisualTreeIsland();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VisualTreeIsland@Composition@UI@Windows@@UEAA@XZ
    virtual ~VisualTreeIsland();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyContent@VisualTreeIsland@Composition@UI@Windows@@MEAAXXZ
    virtual void DestroyContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisible@VisualTreeIsland@Composition@UI@Windows@@MEAAX_N@Z
    virtual void UpdateVisible(bool);
};
} // namespace Windows::UI::Composition
