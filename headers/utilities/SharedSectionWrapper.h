#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Windows::UI::Composition {
class SharedSectionWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@SharedSectionWrapper@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SharedSectionWrapper@Composition@UI@Windows@@QEAAJPEAVCompositor@234@V?$span@E$0?0@gsl@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalSharedData@SharedSectionWrapper@Composition@UI@Windows@@AEAAJPEAVCompositor@234@V?$span@E$0?0@gsl@@@Z
    long MarshalSharedData(WindissectOpaque *, WindissectOpaque);
};
} // namespace Windows::UI::Composition
