#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace Windows::UI::Composition::Internal {
class SharedWriteCaptureController {
public:
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SharedWriteCaptureController@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@SharedWriteCaptureController@Internal@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SharedWriteCaptureController@Internal@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SharedWriteCaptureController@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SharedWriteCaptureController@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAX@Z
    long RuntimeClassInitialize(WindissectOpaque *, void *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SharedWriteCaptureController@Internal@Composition@UI@Windows@@QEAA@XZ
    SharedWriteCaptureController();
};
} // namespace Windows::UI::Composition::Internal
