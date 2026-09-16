#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 2 member(s).
namespace tip2 {
class details {
public:
    class stored_flag_requirements;
    class test_data_interface;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z
    bool evaluate_flags(::tip2::test_state const &, ::tip2::test_requirement const *, ::tip2::test_requirement const *, ::tip2::test_requirement const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?find_flags_match@details@tip2@@YAPEBUtest_requirement@2@AEBVtest_state@2@PEBU32@_N@Z
    ::tip2::test_requirement const * find_flags_match(::tip2::test_state const &, ::tip2::test_requirement const *, bool);
};
} // namespace tip2
