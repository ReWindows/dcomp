#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
namespace DirectComposition {
class CCaptureControllerProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCaptureControllerProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCaptureControllerProxy@DirectComposition@@QEAA@I@Z
    CCaptureControllerProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCaptureControllerProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCaptureControllerProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentSize@CCaptureControllerProxy@DirectComposition@@UEAAJMM@Z
    virtual long SetContentSize(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultSDRBoost@CCaptureControllerProxy@DirectComposition@@UEAAJM@Z
    virtual long SetDefaultSDRBoost(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsCapturing@CCaptureControllerProxy@DirectComposition@@UEAAJ_N@Z
    virtual long SetIsCapturing(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsConstrainedBySize@CCaptureControllerProxy@DirectComposition@@UEAAJ_N@Z
    virtual long SetIsConstrainedBySize(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReferenceVisual@CCaptureControllerProxy@DirectComposition@@UEAAJPEAUIDCompositionVisual@@@Z
    virtual long SetReferenceVisual(IDCompositionVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoot@CCaptureControllerProxy@DirectComposition@@UEAAJPEAUIDCompositionVisual@@@Z
    virtual long SetRoot(IDCompositionVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@CCaptureControllerProxy@DirectComposition@@UEAAJPEAUIDCompositionTransform@@@Z
    virtual long SetTransform(IDCompositionTransform *);
};
} // namespace DirectComposition
