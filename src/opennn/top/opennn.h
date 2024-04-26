//   OpenNN: Open Neural Networks Library
//   www.opennn.net
//
//   O P E N   N E U R A L   N E T W O R K S   L I B R A R Y
//
//   Artificial Intelligence Techniques SL
//   artelnics@artelnics.com

#ifndef OPENNN_H
#define OPENNN_H

// Data set

#include "../data_set/data_set.h"

// Neural network

#include "../neural_network/ann/multihead_attention_layer.h"
#include "../neural_network/cnn/convolutional_layer.h"
#include "../neural_network/fnn/feed_forward_layer.h"
#include "../neural_network/lstm/long_short_term_memory_layer.h"
#include "../neural_network/main/bounding_layer.h"
#include "../neural_network/main/layer.h"
#include "../neural_network/main/neural_network.h"
#include "../neural_network/main/pooling_layer.h"
#include "../neural_network/main/probabilistic_layer.h"
#include "../neural_network/main/scaling_layer.h"
#include "../neural_network/main/unscaling_layer.h"
#include "../neural_network/pnn/perceptron_layer.h"
#include "../neural_network/rnn/recurrent_layer.h"

// Training strategy

#include "../training_strategy/conjugate_gradient.h"
#include "../training_strategy/cross_entropy_error.h"
#include "../training_strategy/gradient_descent.h"
#include "../training_strategy/learning_rate_algorithm.h"
#include "../training_strategy/levenberg_marquardt_algorithm.h"
#include "../training_strategy/loss_index.h"
#include "../training_strategy/mean_squared_error.h"
#include "../training_strategy/minkowski_error.h"
#include "../training_strategy/normalized_squared_error.h"
#include "../training_strategy/optimization_algorithm.h"
#include "../training_strategy/quasi_newton_method.h"
#include "../training_strategy/sum_squared_error.h"
#include "../training_strategy/weighted_squared_error.h"

// Model selection

#include "../model_selection/genetic_algorithm.h"
#include "../model_selection/growing_inputs.h"
#include "../model_selection/incremental_neurons.h"
#include "../model_selection/inputs_selection.h"
#include "../model_selection/model_selection.h"
#include "../model_selection/neurons_selection.h"
#include "../model_selection/pruning_inputs.h"

// Testing analysis

#include "../testing_analysis/testing_analysis.h"
#include "../testing_analysis/unit_testing.h"

// Utilities

#include "../utilities/correlations.h"
#include "../utilities/functions.h"
#include "../utilities/k_means.h"
#include "../utilities/matrix.h"
#include "../utilities/metrics.h"
#include "../utilities/numerical_differentiation.h"
#include "../utilities/opennn_strings.h"
#include "../utilities/response_optimization.h"
#include "../utilities/statistics.h"
#include "../utilities/tensor.h"
#include "../utilities/tinyxml2.h"
#include "../utilities/vector.h"
#include "math.h"

#endif

// OpenNN: Open Neural Networks Library.
// Copyright(C) 2005-2019 Artificial Intelligence Techniques, SL.
//
// This library is free software; you can redistribute it and/or
// modify it under the s of the GNU Lesser General Public
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
