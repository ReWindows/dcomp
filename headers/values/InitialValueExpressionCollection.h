#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 13 member(s).
namespace Windows::UI::Composition {
class InitialValueExpressionCollection {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAXXZ
    void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Collections@Foundation@4@@Z
    long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKey@InitialValueExpressionCollection@Composition@UI@Windows@@QEAA_NPEAUHSTRING__@@@Z
    bool HasKey(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@0PEAE@Z
    long Insert(HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lookup@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAU5@@Z
    long Lookup(HSTRING__*, HSTRING__* *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z
    long Remove(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InitialValueExpressionCollection@Composition@UI@Windows@@UEAA@XZ
    virtual ~InitialValueExpressionCollection();
};
} // namespace Windows::UI::Composition
