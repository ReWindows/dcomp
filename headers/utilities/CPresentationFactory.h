#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 15 member(s).
class CPresentationFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPresentationFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPresentationFactory@@QEAA@XZ
    CPresentationFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPresentationFactory@@SAJPEAUIUnknown@@PEAPEAV1@@Z
    static long Create(IUnknown *, CPresentationFactory * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePresentationManager@CPresentationFactory@@UEAAJPEAPEAUIPresentationManager@@@Z
    virtual long CreatePresentationManager(IPresentationManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPresentationSupported@CPresentationFactory@@UEAAEXZ
    virtual unsigned char IsPresentationSupported();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPresentationSupportedWithIndependentFlip@CPresentationFactory@@UEAAEXZ
    virtual unsigned char IsPresentationSupportedWithIndependentFlip();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPresentationFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPresentationFactory@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CPresentationFactory@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPresentationFactory@@IEAAJPEAUIUnknown@@@Z
    long Initialize(IUnknown *);
};
