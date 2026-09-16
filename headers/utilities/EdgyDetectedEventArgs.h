#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 30 member(s).
namespace Windows::UI::Composition::Interactions::Internal {
class EdgyDetectedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@QEAA@XZ
    EdgyDetectedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEBUEdgyDetectedParams@@@Z
    virtual long RuntimeClassInitialize(HSTRING__*, EdgyDetectedParams const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DetectedPoint@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@6@@Z
    virtual long get_DetectedPoint(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DetectedTime@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAAJPEA_K@Z
    virtual long get_DetectedTime(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EdgeId@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_EdgeId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputRouting@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAAJPEAW4EdgyInputRouting@23456@@Z
    virtual long get_InputRouting(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerId@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAAJPEAI@Z
    virtual long get_PointerId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StartPoint@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@6@@Z
    virtual long get_StartPoint(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StartTime@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAAJPEA_K@Z
    virtual long get_StartTime(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAA@XZ
    virtual ~EdgyDetectedEventArgs();
};
} // namespace Windows::UI::Composition::Interactions::Internal
