//   OpenNN: Open Neural Networks Library
//   www.opennn.net
//
//   K - M E A N S   H E A D E R
//
//   Artificial Intelligence Techniques SL
//   artelnics@artelnics.com

#ifndef K_MEANS_H
#define K_MEANS_H

// System includes

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <exception>
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>

// OpenNN includes

//#include "../top/opennn.h"

#include "../utilities/matrix.h"
#include "../utilities/statistics.h"
#include "../utilities/tensor.h"
#include "../utilities/tinyxml2.h"
#include "../utilities/vector.h"

namespace OpenNN {

class KMeans {
 public:
  struct Results {
    Vector<Vector<size_t>> clusters;
  };

  Results calculate_k_means(const Matrix<double>&, const size_t&) const;

  size_t calculate_sample_index_proportional_probability(const Vector<double>&) const;
};

}  // namespace OpenNN

#endif

// OpenNN: Open Neural Networks Library.
// Copyright(C) 2005-2019 Artificial Intelligence Techniques, SL.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
