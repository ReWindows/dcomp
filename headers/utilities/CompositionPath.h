#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 13 member(s).
namespace Windows::UI::Composition {
class CompositionPath {
public:
    class Api;
    class Interop;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionPath@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachConsumer@CompositionPath@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAPEAVCSharedAllocation@DirectComposition@@PEAI@Z
    long AttachConsumer(WindissectOpaque *, WindissectOpaque * *, unsigned int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionPath@Composition@UI@Windows@@QEAA@XZ
    CompositionPath();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@CompositionPath@Composition@UI@Windows@@QEAAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z
    long Deserialize(ID2D1Factory *, ID2D1Geometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachConsumer@CompositionPath@Composition@UI@Windows@@QEAAXPEAVCompositor@234@@Z
    void DetachConsumer(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionPath@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionPath@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionPath@Composition@UI@Windows@@QEAAJPEAUID2D1Geometry@@@Z
    long RuntimeClassInitialize(ID2D1Geometry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionPath@Composition@UI@Windows@@QEAAJV?$span@$$CBE$0?0@gsl@@@Z
    long RuntimeClassInitialize(WindissectOpaque);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtendedQueryInterface@CompositionPath@Composition@UI@Windows@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long ExtendedQueryInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionPath@Composition@UI@Windows@@MEAA@XZ
    virtual ~CompositionPath();
};
} // namespace Windows::UI::Composition
