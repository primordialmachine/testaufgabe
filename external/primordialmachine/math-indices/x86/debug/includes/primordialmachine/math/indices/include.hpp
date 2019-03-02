///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Primordial Machine's Math Indices Library
// Copyright (C) 2019 Michael Heilmann
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

#include "primordialmachine/math/indices/index_1.hpp"
#include "primordialmachine/math/indices/index_2.hpp"

namespace primordialmachine {

// Identity mapping, 1D index to 1D index.
constexpr index_1
to_index_1(index_1 source, size_t stride)
{
  return source;
}

// Identity mapping, 2D index to 2D index.
constexpr index_1
to_index_1(index_2 source, size_t stride)
{
  return { source.i() * stride + source.j() };
}

// Maps a 1D index to a 2D index.
constexpr index_2
to_index_2(index_1 source, size_t stride)
{
  return { source.i() / stride, source.i() % stride };
}

// Maps a 2D index to a 1D index.
constexpr index_2
to_index_2(index_2 source, size_t stride)
{
  return source;
}
  
} // namespace primordialmachine
