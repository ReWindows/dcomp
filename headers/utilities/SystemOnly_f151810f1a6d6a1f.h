#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace Windows::UI::Composition::InteropDwmCompositor {
class SystemOnly {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMilResource@SystemOnly@InteropDwmCompositor@Composition@UI@Windows@@UEAAJW4MIL_RESOURCE_TYPE@@PEAIPEAPEAUIUnknown@@@Z
    virtual long CreateMilResource(int, unsigned int *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedMilResource@SystemOnly@InteropDwmCompositor@Composition@UI@Windows@@UEAAJW4MIL_RESOURCE_TYPE@@PEAIPEAPEAXPEAPEAUIUnknown@@@Z
    virtual long CreateSharedMilResource(int, unsigned int *, void * *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DuplicateSharedMilResource@SystemOnly@InteropDwmCompositor@Composition@UI@Windows@@UEAAJPEAXW4MIL_RESOURCE_TYPE@@_NPEAIPEAPEAUIUnknown@@@Z
    virtual long DuplicateSharedMilResource(void *, int, bool, unsigned int *, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChannelHandle@SystemOnly@InteropDwmCompositor@Composition@UI@Windows@@UEAAIXZ
    virtual unsigned int GetChannelHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalCommit@SystemOnly@InteropDwmCompositor@Composition@UI@Windows@@UEAAJPEAX@Z
    virtual long InternalCommit(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@SystemOnly@InteropDwmCompositor@Composition@UI@Windows@@UEAAXXZ
    virtual void Lock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseMilResource@SystemOnly@InteropDwmCompositor@Composition@UI@Windows@@UEAAXPEAUIUnknown@@@Z
    virtual void ReleaseMilResource(IUnknown *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SystemOnly@InteropDwmCompositor@Composition@UI@Windows@@QEAA@XZ
    SystemOnly();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@SystemOnly@InteropDwmCompositor@Composition@UI@Windows@@UEAAXXZ
    virtual void Unlock();
};
} // namespace Windows::UI::Composition::InteropDwmCompositor
