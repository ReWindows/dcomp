#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Windows::UI::Composition::InteropCompositor {
class SystemOnly {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHolographicComposition@SystemOnly@InteropCompositor@Composition@UI@Windows@@UEAAJAEBU_GUID@@IPEAPEAUIDCompositionHolographicComposition@@@Z
    virtual long CreateHolographicComposition(_GUID const &, unsigned int, IDCompositionHolographicComposition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHolographicDisplay@SystemOnly@InteropCompositor@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEBUDXGI_RATIONAL@@PEAPEAUIDCompositionHolographicDisplay@@@Z
    virtual long CreateHolographicDisplay(_GUID const &, DXGI_RATIONAL const *, IDCompositionHolographicDisplay * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHolographicExclusiveMode@SystemOnly@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionHolographicExclusiveMode@@@Z
    virtual long CreateHolographicExclusiveMode(IDCompositionHolographicExclusiveMode * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHolographicExclusiveView@SystemOnly@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionHolographicExclusiveView@@@Z
    virtual long CreateHolographicExclusiveView(IDCompositionHolographicExclusiveView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHolographicInteropTexture@SystemOnly@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionHolographicInteropTexture@@@Z
    virtual long CreateHolographicInteropTexture(IDCompositionHolographicInteropTexture * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHolographicViewer@SystemOnly@InteropCompositor@Composition@UI@Windows@@UEAAJIIW4DXGI_FORMAT@@AEBU_GUID@@PEAPEAUIDCompositionHolographicViewer@@@Z
    virtual long CreateHolographicViewer(unsigned int, unsigned int, int, _GUID const &, IDCompositionHolographicViewer * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SystemOnly@InteropCompositor@Composition@UI@Windows@@QEAA@XZ
    SystemOnly();
};
} // namespace Windows::UI::Composition::InteropCompositor
