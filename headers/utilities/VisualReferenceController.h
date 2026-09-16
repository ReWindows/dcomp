#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace Windows::UI::Composition::Private {
class VisualReferenceController {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VisualReferenceController@Private@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VisualReferenceController@Private@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VisualReferenceController@Private@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@VisualReferenceController@Private@Composition@UI@Windows@@QEAAJPEAVCompositor@345@_N@Z
    long RuntimeClassInitialize(WindissectOpaque *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisual@VisualReferenceController@Private@Composition@UI@Windows@@QEAAJPEAVVisual@345@@Z
    long SetVisual(WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VisualReferenceController@Private@Composition@UI@Windows@@QEAA@XZ
    VisualReferenceController();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VisualReferenceController@Private@Composition@UI@Windows@@UEAA@XZ
    virtual ~VisualReferenceController();
};
} // namespace Windows::UI::Composition::Private
