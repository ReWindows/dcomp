#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition::Internal {
class CompositionVailSuperWetInkSource {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableForVail@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJAEBU_GUID@@III0III0@Z
    long EnableForVail(_GUID const &, unsigned int, unsigned int, unsigned int, _GUID const &, unsigned int, unsigned int, unsigned int, _GUID const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionVailSuperWetInkSource();
};
} // namespace Windows::UI::Composition::Internal
