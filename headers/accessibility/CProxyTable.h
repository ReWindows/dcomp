#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace DirectComposition {
class CProxyTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateProxy@CProxyTable@DirectComposition@@QEAAPEAXXZ
    void * AllocateProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateProxyTableSize@CProxyTable@DirectComposition@@SAXXZ
    static void CalculateProxyTableSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateProxyTable@CProxyTable@DirectComposition@@SAJPEAVCDevice@2@PEAPEAV12@@Z
    static long CreateProxyTable(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeProxy@CProxyTable@DirectComposition@@QEAAXPEAX@Z
    void FreeProxy(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromProxy@CProxyTable@DirectComposition@@SAPEAV12@PEAX@Z
    static WindissectOpaque * FromProxy(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QIExtension@CProxyTable@DirectComposition@@QEAAPEAX_KPEAX@Z
    void * QIExtension(uint64_t, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveToMainProxy@CProxyTable@DirectComposition@@SAPEAXPEAX@Z
    static void * ResolveToMainProxy(void *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CProxyTable@DirectComposition@@IEAA@PEAVCDevice@1@@Z
    CProxyTable(WindissectOpaque *);
};
} // namespace DirectComposition
