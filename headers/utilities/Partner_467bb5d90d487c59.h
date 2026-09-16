#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::CompositionIsland {
class Partner {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationProvider@Partner@CompositionIsland@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetAutomationProvider(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdAsGuid@Partner@CompositionIsland@Composition@UI@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long GetIdAsGuid(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@Partner@CompositionIsland@Composition@UI@Windows@@UEAAJI@Z
    virtual long Invoke(unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Partner@CompositionIsland@Composition@UI@Windows@@QEAA@XZ
    Partner();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutomationHostProvider@Partner@CompositionIsland@Composition@UI@Windows@@UEAAJPEAUIInspectable@@@Z
    virtual long SetAutomationHostProvider(IInspectable *);
};
} // namespace Windows::UI::Composition::CompositionIsland
