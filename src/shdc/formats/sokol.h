#pragma once
#include <array>
#include "args.h"
#include "bytecode.h"
#include "input.h"
#include "spirvcross.h"
#include "types/errmsg.h"
#include "types/slang.h"

namespace shdc::formats::sokol {

ErrMsg gen(const Args& args,
    const Input& inp,
    const std::array<Spirvcross,Slang::NUM>& spirvcross,
    const std::array<Bytecode,Slang::NUM>& bytecode,
    const refl::Bindings& merged_bindings);

}
