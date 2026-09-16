#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 6 member(s).
namespace Microsoft::WRL::Wrappers {
class HStringReference {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@HStringReference@Wrappers@WRL@Microsoft@@QEBAPEAUHSTRING__@@XZ
    HSTRING__* Get() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z
    HStringReference(::Microsoft::WRL::Wrappers::HStringReference const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z
    static unsigned int AddOne(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z
    void CreateReference(unsigned short const *, unsigned int, unsigned int);
};
} // namespace Microsoft::WRL::Wrappers
