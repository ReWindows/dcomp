#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace DirectComposition {
class CDelegatedInkTrailCookieTracker {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForSurface@CDelegatedInkTrailCookieTracker@DirectComposition@@SAJPEAVCCompositionSurfaceProxy@2@PEAPEAV12@@Z
    static long GetForSurface(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushCookie@CDelegatedInkTrailCookieTracker@DirectComposition@@QEAAJI@Z
    long PushCookie(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDelegatedInkTrailCookieTracker@DirectComposition@@UEAA@XZ
    virtual ~CDelegatedInkTrailCookieTracker();
};
} // namespace DirectComposition
