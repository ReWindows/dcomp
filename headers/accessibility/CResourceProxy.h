#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 13 member(s).
namespace DirectComposition {
class CResourceProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateTrigger@CResourceProxy@DirectComposition@@QEAAJI@Z
    long ActivateTrigger(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleOnDevice@CResourceProxy@DirectComposition@@SAJPEAVCDevice@2@PEAUIUnknown@@PEAI@Z
    static long GetHandleOnDevice(WindissectOpaque *, IUnknown *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceHelper@CResourceProxy@DirectComposition@@QEAAJAEBU_GUID@@PEAPEAXPEAX@Z
    long QueryInterfaceHelper(_GUID const &, void * *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnimationProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIDCompositionAnimation@@@Z
    long SetAnimationProperty(unsigned int, IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z
    long SetBufferProperty(unsigned int, void const *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDeletedNotificationTag@CResourceProxy@DirectComposition@@SAXPEAUIUnknown@@PEAVCDelayedDestructionObject@2@@Z
    static void SetDeletedNotificationTag(IUnknown *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandleArrayProperty@CResourceProxy@DirectComposition@@QEAAJIPEBQEAXI@Z
    long SetHandleArrayProperty(unsigned int, void * const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandleProperty@CResourceProxy@DirectComposition@@QEAAJIPEAX@Z
    long SetHandleProperty(unsigned int, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReferenceArrayProperty@CResourceProxy@DirectComposition@@QEAAJIPEBI_K@Z
    long SetReferenceArrayProperty(unsigned int, unsigned int const *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReferenceProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIUnknown@@@Z
    long SetReferenceProperty(unsigned int, IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScalarFloatProperty@CResourceProxy@DirectComposition@@QEAAJIM@Z
    long SetScalarFloatProperty(unsigned int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z
    long SetScalarIntegerProperty(unsigned int, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSharedSectionReferenceProperties@CResourceProxy@DirectComposition@@QEAAXIIIPEAVCSharedAllocationBase@2@_K@Z
    void SetSharedSectionReferenceProperties(unsigned int, unsigned int, unsigned int, WindissectOpaque *, uint64_t);
};
} // namespace DirectComposition
