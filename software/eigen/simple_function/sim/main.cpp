//   OpenNN: Open Neural Networks Library
//   www.opennn.net
//
//   S I M P L E   F U N C T I O N   A P P L I C A T I O N
//
//   Artificial Intelligence Techniques SL (Artelnics)
//   artelnics@artelnics.com

// This is an approximation application.

// System includes

#include <time.h>

#include <iostream>
#include <sstream>
#include <stdexcept>

// OpenNN includes

#include "../../../../src/opennn/data_set/data_set.h"

using namespace std;
using namespace OpenNN;

int main(void) {
  try {
    cout << "OpenNN. Simple Function Example." << endl;

    srand(static_cast<unsigned>(time(nullptr)));

    // Data set

    DataSet data_set("data/simple_function.csv", ';', true);

    return 0;
  } catch (exception& e) {
    cerr << e.what() << endl;

    return 1;
  }
}

// OpenNN: Open Neural Networks Library.
// Copyright (C) 2005-2019 Artificial Intelligence Techniques SL
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
