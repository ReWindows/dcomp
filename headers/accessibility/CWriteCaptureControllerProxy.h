#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
namespace DirectComposition {
class CWriteCaptureControllerProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWriteCaptureControllerProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWriteCaptureControllerProxy@DirectComposition@@QEAA@I@Z
    CWriteCaptureControllerProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWriteCaptureControllerProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWriteCaptureControllerProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentSize@CWriteCaptureControllerProxy@DirectComposition@@UEAAJMM@Z
    virtual long SetContentSize(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultSDRBoost@CWriteCaptureControllerProxy@DirectComposition@@UEAAJM@Z
    virtual long SetDefaultSDRBoost(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsCapturing@CWriteCaptureControllerProxy@DirectComposition@@UEAAJ_N@Z
    virtual long SetIsCapturing(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsConstrainedBySize@CWriteCaptureControllerProxy@DirectComposition@@UEAAJ_N@Z
    virtual long SetIsConstrainedBySize(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReferenceVisual@CWriteCaptureControllerProxy@DirectComposition@@UEAAJPEAUIDCompositionVisual@@@Z
    virtual long SetReferenceVisual(IDCompositionVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoot@CWriteCaptureControllerProxy@DirectComposition@@UEAAJPEAUIDCompositionVisual@@@Z
    virtual long SetRoot(IDCompositionVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@CWriteCaptureControllerProxy@DirectComposition@@UEAAJPEAUIDCompositionTransform@@@Z
    virtual long SetTransform(IDCompositionTransform *);
};
} // namespace DirectComposition
