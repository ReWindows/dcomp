#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 10 member(s).
namespace Windows::UI::Composition::Private {
class SharedLight {
public:
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SharedLight@Private@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddVisual@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@345@PEAVVisual@345@@Z
    virtual long AddVisual(WindissectOpaque *, WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SharedLight@Private@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SharedLight@Private@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllVisuals@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@345@@Z
    virtual long RemoveAllVisuals(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveVisual@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@345@PEAVVisual@345@@Z
    virtual long RemoveVisual(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveVisualByLightBehavior@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisual@345@W4LightBehavior@345@@Z
    virtual long RemoveVisualByLightBehavior(WindissectOpaque *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnabled@SharedLight@Private@Composition@UI@Windows@@UEAAJ_N@Z
    virtual long SetEnabled(bool);
};
} // namespace Windows::UI::Composition::Private
