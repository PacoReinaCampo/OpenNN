//   OpenNN: Open Neural Networks Library
//   www.opennn.org
//
//   B L A N K   A P P L I C A T I O N
//
//   Artificial Intelligence Techniques SL
//   artelnics@artelnics.com

// System includes

#include <limits.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

#include <algorithm>
#include <chrono>
#include <cstring>
#include <fstream>
#include <iostream>
#include <regex>
#include <sstream>
#include <string>

// Systems Complementaries

#include <cmath>
#include <cstdlib>
#include <ostream>

// OpenNN includes

#include "../../../../../src/opennn/top/opennn.h"

using namespace OpenNN;
using namespace std;
using namespace chrono;

int main(void) {
  try {
    cout << "Hello MPSoC Application" << endl;

    srand(static_cast<unsigned>(time(nullptr)));

    // Here your code

    cout << "Bye MPSoC Application" << endl;

    return 0;

  } catch (exception& e) {
    cerr << e.what() << endl;
  }
}

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
