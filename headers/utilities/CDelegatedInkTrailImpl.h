#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 16 member(s).
namespace DirectComposition {
class CDelegatedInkTrailImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDelegatedInkTrailImpl@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTrailPoints@CDelegatedInkTrailImpl@DirectComposition@@UEAAJPEBUDCompositionInkTrailPoint@@IPEAI@Z
    virtual long AddTrailPoints(DCompositionInkTrailPoint const *, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTrailPointsWithPrediction@CDelegatedInkTrailImpl@DirectComposition@@QEAAJPEBUInkTrailPoint@Composition@UI@Windows@@I0IPEAI@Z
    long AddTrailPointsWithPrediction(WindissectOpaque const *, unsigned int, WindissectOpaque const *, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTrailPointsWithPrediction@CDelegatedInkTrailImpl@DirectComposition@@UEAAJPEBUDCompositionInkTrailPoint@@I0IPEAI@Z
    virtual long AddTrailPointsWithPrediction(DCompositionInkTrailPoint const *, unsigned int, DCompositionInkTrailPoint const *, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDelegatedInkTrailImpl@DirectComposition@@SAJPEAVCDevice@2@PEAVCCompositionSurfaceProxy@2@PEAPEAV12@@Z
    static long Create(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDelegatedInkTrailImpl@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDelegatedInkTrailImpl@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTrailPoints@CDelegatedInkTrailImpl@DirectComposition@@UEAAJI@Z
    virtual long RemoveTrailPoints(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartNewTrail@CDelegatedInkTrailImpl@DirectComposition@@UEAAJAEBU_D3DCOLORVALUE@@@Z
    virtual long StartNewTrail(_D3DCOLORVALUE const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDelegatedInkTrailImpl@DirectComposition@@UEAA@XZ
    virtual ~CDelegatedInkTrailImpl();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDelegatedInkTrailImpl@DirectComposition@@AEAA@XZ
    CDelegatedInkTrailImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDelegatedInkTrailImpl@DirectComposition@@AEAAJPEAVCDevice@2@PEAVCCompositionSurfaceProxy@2@@Z
    long Initialize(WindissectOpaque *, WindissectOpaque *);
};
} // namespace DirectComposition
