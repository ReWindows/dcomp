#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionIslandAutomationProviderRequestedEventArgs@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AutomationProvider@Api@CompositionIslandAutomationProviderRequestedEventArgs@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_AutomationProvider(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@Api@CompositionIslandAutomationProviderRequestedEventArgs@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AutomationProvider@Api@CompositionIslandAutomationProviderRequestedEventArgs@Composition@UI@Windows@@UEAAJPEAUIInspectable@@@Z
    virtual long put_AutomationProvider(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@Api@CompositionIslandAutomationProviderRequestedEventArgs@Composition@UI@Windows@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
};
} // namespace Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs
