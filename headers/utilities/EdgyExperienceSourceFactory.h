#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 21 member(s).
namespace Windows::UI::Composition::Interactions::Internal {
class EdgyExperienceSourceFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@EdgyExperienceSourceFactory@Internal@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@EdgyExperienceSourceFactory@Internal@Interactions@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUIVisual@456@PEAPEAUIEdgyExperienceSource@23456@@Z
    virtual long Create(HSTRING__*, WindissectOpaque *, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EdgyExperienceSourceFactory@Internal@Interactions@Composition@UI@Windows@@QEAA@XZ
    EdgyExperienceSourceFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@EdgyExperienceSourceFactory@Internal@Interactions@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@EdgyExperienceSourceFactory@Internal@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@EdgyExperienceSourceFactory@Internal@Interactions@Composition@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@EdgyExperienceSourceFactory@Internal@Interactions@Composition@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@EdgyExperienceSourceFactory@Internal@Interactions@Composition@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@EdgyExperienceSourceFactory@Internal@Interactions@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@EdgyExperienceSourceFactory@Internal@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::UI::Composition::Interactions::Internal
