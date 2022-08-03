/*******************************************************************************
 *
 * This file is part of ezARPACK, an easy-to-use C++ wrapper for
 * the ARPACK-NG FORTRAN library.
 *
 * Copyright (C) 2016-2022 Igor Krivenko <igor.s.krivenko@gmail.com>
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 ******************************************************************************/
/// @file ezarpack/solver_complex.hpp
/// @brief Specialization of `arpack_solver` class for the case of general
/// complex eigenproblems.
#pragma once

#include <algorithm>
#include <utility>

namespace ezarpack {
namespace mpi {
  // TODO
} // namespace mpi
} // namespace ezarpack