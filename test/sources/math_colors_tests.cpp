///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Primordial Machine's Math Colors Library
// Copyright (c) 2019 Michael Heilmann
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

#include "primordialmachine/math/colors/include.hpp"
#include "primordialmachine/one_zero_functors/include.hpp"
#include "gtest/gtest.h"

TEST(math_colors_tests, rgb_saturated_test)
{
  using namespace primordialmachine;
  using color_type =
    color<float, component_arithmetic_saturated, color_space_rgb>;
  static_assert(is_color_space_v<color_space_rgb>, "must be true");
  static_assert(!is_color_space_v<int>, "must be false");
  static_assert(3 == number_of_components_v<color_space_rgb>, "must be 3");

  static const auto RED = color_type(1.f, 0.f, 0.f);
  static const auto GREEN = color_type(0.f, 1.f, 0.f);
  static const auto BLUE = color_type(0.f, 0.f, 1.f);
  static const auto BLACK = color_type(0.f, 0.f, 0.f);
  static const auto WHITE = color_type(1.f, 1.f, 1.f);
  ASSERT_TRUE(RED + GREEN + BLUE == WHITE);
  ASSERT_TRUE(RED - RED == BLACK);
  ASSERT_TRUE(WHITE - GREEN - BLUE == RED);
  ASSERT_TRUE(WHITE - RED - BLUE == GREEN);
  ASSERT_TRUE(WHITE - RED - GREEN == BLUE);
}

TEST(math_colors_tests, rgba_saturated_test)
{
  using namespace primordialmachine;
  using color_type =
    color<float, component_arithmetic_saturated, color_space_rgba>;
  static_assert(is_color_space_v<color_space_rgba>, "must be true");
  static_assert(!is_color_space_v<int>, "must be false");
  static_assert(4 == number_of_components_v<color_space_rgba>, "must be 4");

  static const auto RED = color_type(1.f, 0.f, 0.f, 1.f);
  static const auto TRANSPARENT_RED = color_type(1.f, 0.f, 0.f, 0.f);
  static const auto GREEN = color_type(0.f, 1.f, 0.f, 1.f);
  static const auto TRANSPARENT_GREEN = color_type(0.f, 1.f, 0.f, 0.f);
  static const auto BLUE = color_type(0.f, 0.f, 1.f, 1.f);
  static const auto TRANSPARENT_BLUE = color_type(0.f, 0.f, 1.f, 0.f);
  static const auto BLACK = color_type(0.f, 0.f, 0.f, 1.f);
  static const auto TRANSPARENT_BLACK = color_type(0.f, 0.f, 0.f, 0.f);
  static const auto WHITE = color_type(1.f, 1.f, 1.f, 1.f);
  ASSERT_TRUE(RED + GREEN + BLUE == WHITE);
  ASSERT_TRUE(RED - RED == TRANSPARENT_BLACK);
  ASSERT_TRUE(WHITE - GREEN - BLUE == TRANSPARENT_RED);
  ASSERT_TRUE(WHITE - RED - BLUE == TRANSPARENT_GREEN);
  ASSERT_TRUE(WHITE - RED - GREEN == TRANSPARENT_BLUE);
}

TEST(math_colors_tests, rgb_lerp_test)
{ /*Intentionally still empty.*/
}

TEST(math_colors_tests, rgba_lerp_test)
{ /*Intentionally still empty.*/
}
