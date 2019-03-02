///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Primordial Machine's Math Scalars Library
// Copyright (C) 2017-2019 Michael Heilmann
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the
// use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "primordialmachine/arithmetic_functors/include.hpp"

namespace primordialmachine {

// Default implementation for floating point types.
template<typename LEFT_OPERAND, typename RIGHT_OPERAND>
struct binary_star_functor<
  LEFT_OPERAND,
  RIGHT_OPERAND,
  enable_if_t<is_floating_point_v<LEFT_OPERAND> &&
              is_floating_point_v<RIGHT_OPERAND>>>
{
  using left_operand_type = LEFT_OPERAND;
  using right_operand_type = RIGHT_OPERAND;
  using result_type = common_type_t<left_operand_type, right_operand_type>;
  static constexpr size_t arity = 2;
  result_type operator()(left_operand_type x, right_operand_type y) const
    noexcept(noexcept(x* y))
  {
    return x * y;
  }
}; // struct binary_star_functor

} // namespace primordialmachine
