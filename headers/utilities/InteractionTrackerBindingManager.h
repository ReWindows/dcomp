#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 6 member(s).
namespace Windows::UI::Composition::Interactions {
class InteractionTrackerBindingManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrackerBindingMode@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@QEAAJIIPEAW4InteractionBindingAxisModes@2345@@Z
    long GetTrackerBindingMode(unsigned int, unsigned int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTrackerBindings@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@QEAAXPEAVInteractionTracker@2345@@Z
    void RemoveTrackerBindings(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTrackerBindingMode@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@QEAAJIIW4InteractionBindingAxisModes@2345@@Z
    long SetTrackerBindingMode(unsigned int, unsigned int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@UEAA@XZ
    virtual ~InteractionTrackerBindingManager();
};
} // namespace Windows::UI::Composition::Interactions
