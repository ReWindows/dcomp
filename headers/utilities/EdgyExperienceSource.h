#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace Windows::UI::Composition::Interactions::Internal {
class EdgyExperienceSource {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyEdgyDetected_Callback@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAAXPEBUEdgyDetectedParams@@@Z
    virtual void NotifyEdgyDetected_Callback(EdgyDetectedParams const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAVVisual@456@@Z
    long RuntimeClassInitialize(HSTRING__*, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAA@XZ
    virtual ~EdgyExperienceSource();
};
} // namespace Windows::UI::Composition::Interactions::Internal
