#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 6 member(s).
namespace DirectComposition {
class CCompositionTextureBinding {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCompositionTextureBinding@DirectComposition@@QEAA@PEAVCCompositionTexture@1@PEAUIPresentationSurface@@PEAUIPresentationBuffer@@PEAUIUnknown@@@Z
    CCompositionTextureBinding(WindissectOpaque *, IPresentationSurface *, IPresentationBuffer *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisposeOnDelayedDestruction@CCompositionTextureBinding@DirectComposition@@UEAAXXZ
    virtual void DisposeOnDelayedDestruction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMarshalerRelease@CCompositionTextureBinding@DirectComposition@@UEAAXXZ
    virtual void OnMarshalerRelease();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompositionTextureBinding@DirectComposition@@UEAA@XZ
    virtual ~CCompositionTextureBinding();
};
} // namespace DirectComposition
