#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 16 member(s).
namespace DirectComposition {
class CSynchronousSuperWetInk {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSynchronousSuperWetInk@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTipPoints@CSynchronousSuperWetInk@DirectComposition@@QEAAJPEBEIIPEAI@Z
    long AddTipPoints(unsigned char const *, unsigned int, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginStroke@CSynchronousSuperWetInk@DirectComposition@@QEAAJPEBEIIHI@Z
    long BeginStroke(unsigned char const *, unsigned int, unsigned int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSynchronousSuperWetInk@DirectComposition@@SAJPEAVCSynchronousSuperWetInkProxy@2@IIW4Enum@SynchronousSuperWetLookupMode@@PEAPEAV12@@Z
    static long Create(WindissectOpaque *, unsigned int, unsigned int, int, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSynchronousSuperWetInk@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInkLookupId@CSynchronousSuperWetInk@DirectComposition@@QEAAJI@Z
    long SetInkLookupId(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertiesForId@CSynchronousSuperWetInk@DirectComposition@@QEAAJIIHPEBEI@Z
    long SetPropertiesForId(unsigned int, unsigned int, int, unsigned char const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReferenceSurface@CSynchronousSuperWetInk@DirectComposition@@QEAAJPEAVCCompositionSurfaceProxy@2@@Z
    long SetReferenceSurface(WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePerFrameDataQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z
    long CreatePerFrameDataQueue(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTipPointsQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z
    long CreateTipPointsQueue(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisposeOnDelayedDestruction@CSynchronousSuperWetInk@DirectComposition@@EEAAXXZ
    virtual void DisposeOnDelayedDestruction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSynchronousSuperWetInk@DirectComposition@@AEAAJII@Z
    long Initialize(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySuperWetInkWork@CSynchronousSuperWetInk@DirectComposition@@AEAAJXZ
    long NotifySuperWetInkWork();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSynchronousSuperWetInk@DirectComposition@@EEAA@XZ
    virtual ~CSynchronousSuperWetInk();
};
} // namespace DirectComposition
