///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Primordial Machine's Relational Functors Library
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

#include "primordialmachine/functors/include.hpp"

namespace primordialmachine {

template<typename A, typename B, typename ENABLED = void>
struct not_equal_to_functor;

template<typename A, typename B>
auto
not_equal_to(const A& a,
             const B& b) noexcept(noexcept(not_equal_to_functor<A, B>()(a, b)))
  -> decltype(not_equal_to_functor<A, B>()(a, b))
{
  return not_equal_to_functor<A, B>()(a, b);
}

template<typename A, typename B>
auto
operator!=(const A& a, const B& b) noexcept(noexcept(not_equal_to(a, b)))
  -> decltype(not_equal_to(a, b))
{
  return not_equal_to(a, b);
}

template<typename T, typename ENABLED = void>
struct has_not_equal_to_functor : public false_type
{}; // struct has_not_equal_to_functor

template<typename A, typename B>
constexpr bool has_not_equal_to_functor_v =
  has_not_equal_to_functor<not_equal_to_functor<A, B>>::value;

template<typename A, typename B>
struct has_not_equal_to_functor<not_equal_to_functor<A, B>,
                                decltype(typeid(not_equal_to_functor<A, B>),
                                         void())> : public true_type
{}; // struct has_not_equal_to_functor

} // namespace primordialmachine
