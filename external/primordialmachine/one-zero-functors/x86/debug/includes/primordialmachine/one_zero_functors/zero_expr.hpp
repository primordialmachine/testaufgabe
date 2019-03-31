///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Primordial Machine's One Zero Library
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

namespace primordialmachine {

template<typename TYPE>
struct zero_expr;

template<>
struct zero_expr<char>
{
  using result_type = char;
  constexpr operator result_type() const noexcept { return 0; }
}; // struct zero_expr

template<>
struct zero_expr<signed char>
{
  using result_type = signed char;
  constexpr operator result_type() const noexcept { return 0; }
}; // struct zero_expr
template<>
struct zero_expr<unsigned char>
{
  using result_type = unsigned char;
  constexpr operator result_type() const noexcept { return 0; }
}; // struct zero_expr

template<>
struct zero_expr<signed short int>
{
  using result_type = signed short int;
  constexpr operator result_type() const noexcept { return 0; }
}; // struct zero_expr
template<>
struct zero_expr<unsigned short int>
{
  using result_type = unsigned short int;
  constexpr operator result_type() const noexcept { return 0; }
}; // struct zero_expr

template<>
struct zero_expr<signed int>
{
  using result_type = signed int;
  constexpr operator result_type() const noexcept { return 0; }
}; // struct zero_expr
template<>
struct zero_expr<unsigned int>
{
  using result_type = unsigned int;
  constexpr operator result_type() const noexcept { return 0; }
}; // struct zero_expr

template<>
struct zero_expr<signed long int>
{
  using result_type = signed long int;
  constexpr operator result_type() const noexcept { return 0L; }
}; // struct zero_expr
template<>
struct zero_expr<unsigned long int>
{
  using result_type = unsigned long int;
  constexpr operator result_type() const noexcept { return 0UL; }
}; // struct zero_expr

template<>
struct zero_expr<signed long long int>
{
  using result_type = signed long long int;
  constexpr operator result_type() const noexcept { return 0LL; }
}; // struct zero_expr
template<>
struct zero_expr<unsigned long long int>
{
  using result_type = unsigned long long int;
  constexpr operator result_type() const noexcept { return 0ULL; }
}; // struct zero_expr

template<>
struct zero_expr<float>
{
  using result_type = float;
  constexpr operator result_type() const noexcept { return 0.F; }
}; // struct zero_expr
template<>
struct zero_expr<double>
{
  using result_type = double;
  constexpr operator result_type() const noexcept { return 0.; }
}; // struct zero_expr
template<>
struct zero_expr<long double>
{
  using result_type = long double;
  constexpr operator result_type() const noexcept { return 0.L; }
}; // struct zero_expr

} // namespace primordialmachine
