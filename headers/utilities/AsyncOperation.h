#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 4 member(s).
namespace Windows::UI::Composition::VisualCapture {
class AsyncOperation {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AsyncOperation@VisualCapture@Composition@UI@Windows@@QEAA@XZ
    AsyncOperation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@AsyncOperation@VisualCapture@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSurface@345@@Z
    virtual long GetResults(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Completed@AsyncOperation@VisualCapture@Composition@UI@Windows@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@5@@Z
    virtual long get_Completed(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Completed@AsyncOperation@VisualCapture@Composition@UI@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@5@@Z
    virtual long put_Completed(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::VisualCapture
