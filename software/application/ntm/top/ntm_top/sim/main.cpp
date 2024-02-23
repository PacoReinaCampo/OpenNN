//   OpenNN: Open Neural Networks Library
//   www.opennn.org
//
//   B L A N K   A P P L I C A T I O N
//
//   Artificial Intelligence Techniques SL
//   artelnics@artelnics.com

// System includes

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>
#include <time.h>
#include <algorithm>
#include <chrono>
#include <stdint.h>
#include <limits.h>
#include <regex>

// Systems Complementaries

#include <cmath>
#include <cstdlib>
#include <ostream>

// OpenNN includes

#include "../../../../src/opennn/top/opennn.h"

using namespace OpenNN;
using namespace std;
using namespace chrono;


int main(void)
{
    try
    {
        cout << "Hello MPSoC Application" << endl;

        srand(static_cast<unsigned>(time(nullptr)));

        // Contents:
        // * Data Set.

        // * Neural Network.
        // ** PerceptronLayer: This class represents a layer of perceptrons.
        // ** ScalingLayer: This class represents a layer of scaling neurons.
        // ** UnscalingLayer: This class represents a layer of unscaling neurons.
        // ** Boundinglayer: This class represents a layer of bounding neurons.
        // ** ProbabilisticLayer: This class represents a layer of probabilistic neurons.
        // ** LongShortTermMemoryLayer: This class represents a layer of LSTM neurons.
        // ** RecurrentLayer: This class represents a layer of recurrent neurons.
        // ** ConvolutionaLayer: This class represents a layer of convolutional neurons.
        // ** PoolingLayer: This class is used to store information about the Pooling Layer in a Convolutional Neural Network (CNN).
        // ** PrincipalComponentsLayer: This class represents the layer of principal component analysis.

        // * Training Strategy.
        // ** LossIndex: This abstract class represents the concept of the error term.
        // ** TrainingAlgorithm: This abstract class represents the concept of a training algorithm for a neural network.

        // * Model Selection.

        // * Testing Analysis.

        // * Model Deployment.

        cout << "Bye MPSoC Application" << endl;

        return 0;

    }
       catch(exception& e)
    {
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
