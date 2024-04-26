###################################################################################
##                                            __ _      _     _                  ##
##                                           / _(_)    | |   | |                 ##
##                __ _ _   _  ___  ___ _ __ | |_ _  ___| | __| |                 ##
##               / _` | | | |/ _ \/ _ \ '_ \|  _| |/ _ \ |/ _` |                 ##
##              | (_| | |_| |  __/  __/ | | | | | |  __/ | (_| |                 ##
##               \__, |\__,_|\___|\___|_| |_|_| |_|\___|_|\__,_|                 ##
##                  | |                                                          ##
##                  |_|                                                          ##
##                                                                               ##
##                                                                               ##
##              QueenField                                                       ##
##              Multi-Processor System on Chip                                   ##
##                                                                               ##
###################################################################################

###################################################################################
##                                                                               ##
## Copyright (c) 2022-2025 by the author(s)                                      ##
##                                                                               ##
## Permission is hereby granted, free of charge, to any person obtaining a copy  ##
## of this software and associated documentation files (the "Software"), to deal ##
## in the Software without restriction, including without limitation the rights  ##
## to use, copy, modify, merge, publish, distribute, sublicense, and/or sell     ##
## copies of the Software, and to permit persons to whom the Software is         ##
## furnished to do so, subject to the following conditions:                      ##
##                                                                               ##
## The above copyright notice and this permission notice shall be included in    ##
## all copies or substantial portions of the Software.                           ##
##                                                                               ##
## THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR    ##
## IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,      ##
## FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE   ##
## AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER        ##
## LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, ##
## OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN     ##
## THE SOFTWARE.                                                                 ##
##                                                                               ##
## ============================================================================= ##
## Author(s):                                                                    ##
##   Paco Reina Campo <pacoreinacampo@queenfield.tech>                           ##
##                                                                               ##
###################################################################################

clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/data_set/data_set.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/model_selection/genetic_algorithm.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/model_selection/growing_inputs.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/model_selection/incremental_neurons.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/model_selection/inputs_selection.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/model_selection/model_selection.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/model_selection/neurons_selection.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/model_selection/pruning_inputs.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/main/bounding_layer.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/cnn/convolutional_layer.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/dnc/differentiable_neural_computer_layer.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/fnn/feed_forward_layer.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/main/layer.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/lstm/long_short_term_memory_layer.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/ann/multihead_attention_layer.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/main/neural_network.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/ntm/neural_turing_machine_layer.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/pnn/perceptron_layer.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/main/pooling_layer.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/main/principal_components_layer.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/main/probabilistic_layer.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/rnn/recurrent_layer.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/main/scaling_layer.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/main/unscaling_layer.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/testing_analysis/testing_analysis.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/testing_analysis/unit_testing.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/adaptive_moment_estimation.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/conjugate_gradient.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/cross_entropy_error.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/gradient_descent.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/learning_rate_algorithm.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/levenberg_marquardt_algorithm.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/loss_index.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/mean_squared_error.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/minkowski_error.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/normalized_squared_error.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/optimization_algorithm.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/quasi_newton_method.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/stochastic_gradient_descent.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/sum_squared_error.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/training_strategy.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/weighted_squared_error.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/utilities/correlations.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/utilities/functions.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/utilities/k_means.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/utilities/metrics.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/utilities/numerical_differentiation.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/utilities/opennn_strings.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/utilities/response_optimization.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/utilities/statistics.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/utilities/tinyxml2.cpp
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/utilities/transformations.cpp

clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/data_set/data_set.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/model_selection/genetic_algorithm.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/model_selection/growing_inputs.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/model_selection/incremental_neurons.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/model_selection/inputs_selection.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/model_selection/model_selection.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/model_selection/neurons_selection.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/model_selection/pruning_inputs.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/main/bounding_layer.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/cnn/convolutional_layer.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/dnc/differentiable_neural_computer_layer.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/fnn/feed_forward_layer.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/main/layer.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/lstm/long_short_term_memory_layer.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/ann/multihead_attention_layer.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/main/neural_network.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/ntm/neural_turing_machine_layer.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/pnn/perceptron_layer.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/main/pooling_layer.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/main/principal_components_layer.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/main/probabilistic_layer.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/rnn/recurrent_layer.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/main/scaling_layer.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/neural_network/main/unscaling_layer.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/testing_analysis/testing_analysis.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/testing_analysis/unit_testing.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/top/opennn.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/adaptive_moment_estimation.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/conjugate_gradient.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/cross_entropy_error.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/gradient_descent.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/learning_rate_algorithm.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/levenberg_marquardt_algorithm.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/loss_index.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/mean_squared_error.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/minkowski_error.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/normalized_squared_error.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/optimization_algorithm.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/quasi_newton_method.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/stochastic_gradient_descent.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/sum_squared_error.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/training_strategy.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/training_strategy/weighted_squared_error.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/utilities/correlations.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/utilities/functions.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/utilities/k_means.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/utilities/matrix.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/utilities/metrics.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/utilities/numerical_differentiation.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/utilities/opennn_strings.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/utilities/response_optimization.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/utilities/statistics.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/utilities/tensor.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/utilities/tinyxml2.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/utilities/transformations.h
clang-format -style='{BasedOnStyle: Google, ColumnLimit: 0}' -i opennn/utilities/vector.h
