#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 14 member(s).
namespace DirectComposition {
class CGenericInk {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CGenericInk@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTipPoints@CGenericInk@DirectComposition@@UEAAJPEBEII@Z
    virtual long AddTipPoints(unsigned char const *, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CGenericInk@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CGenericInk@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMsgRoutingInfo@CGenericInk@DirectComposition@@UEAAJPEBX@Z
    virtual long SetMsgRoutingInfo(void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperties@CGenericInk@DirectComposition@@UEAAJPEBEI@Z
    virtual long SetProperties(unsigned char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSegments@CGenericInk@DirectComposition@@UEAAJIPEBEIII@Z
    virtual long UpdateSegments(unsigned int, unsigned char const *, unsigned int, unsigned int, unsigned int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisposeOnDelayedDestruction@CGenericInk@DirectComposition@@MEAAXXZ
    virtual void DisposeOnDelayedDestruction();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGenericInk@DirectComposition@@EEAA@XZ
    virtual ~CGenericInk();
};
} // namespace DirectComposition
