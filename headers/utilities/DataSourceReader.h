#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition::Private {
class DataSourceReader {
public:
    class Partner;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDataSourcePropertyId@DataSourceReader@Private@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@IW4AnimationPropertyKind@2345@@Z
    long AddDataSourcePropertyId(HSTRING__*, unsigned int, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DataSourceReader@Private@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@345@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DataSourceReader@Private@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DataSourceReader@Private@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DataSourceReader@Private@Composition@UI@Windows@@UEAA@XZ
    virtual ~DataSourceReader();
};
} // namespace Windows::UI::Composition::Private
