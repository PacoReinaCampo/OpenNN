//   OpenNN: Open Neural Networks Library
//   www.opennn.net
//
//   M U L T I H E A D   A T T E N T I O N   L A Y E R   C L A S S   H E A D E R
//
//   Artificial Intelligence Techniques SL
//   artelnics@artelnics.com

#ifndef MULTIHEADATTENTIONLAYER_H
#define MULTIHEADATTENTIONLAYER_H

// System includes

#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

// OpenNN includes

#include "../utilities/vector.h"
#include "../neural_network/layer.h"
#include "../utilities/matrix.h"
#include "../utilities/tensor.h"
#include "../utilities/functions.h"
#include "../utilities/metrics.h"
#include "../neural_network/perceptron_layer.h"

namespace OpenNN
{

/// This class represents a layer of Multihead Attention.

/// MultiheadAttentionLayer has 2 types of input: Context and Input. Output has the shape of Input
/// The layer consists of 2 separate PerceptronLayers at the start (1 for Context and  1 for Input) and 1 at the end, all for projection purposes.
/// In between there is an attention computation.
///
/// Layers of Multihead Attention will be used to construct Transformer models .

class MultiheadAttentionLayer : public Layer
{

public:

   // Constructors

   explicit MultiheadAttentionLayer();

   explicit MultiheadAttentionLayer(const size_t&, /// Input size
                                    const size_t&, /// Context size
                                    const size_t&, /// Embedding depth
                                    const size_t& /// Number of attention heads
                                    );

   MultiheadAttentionLayer(const MultiheadAttentionLayer&);

   // Destructor
   
   virtual ~MultiheadAttentionLayer();

/*   // Get methods*/

/*   bool is_empty() const;*/

/*   size_t get_input_size() const;*/
/*   size_t get_context_size() const;*/
/*   size_t get_depth() const;*/
/*   size_t get_number_of_heads() const;*/

   // Parameters

/*   Vector<size_t> get_inputs_dimensions() const final;*/
/*   Vector<size_t> get_outputs_dimensions() const final;*/

   Tensor<double> get_query_kernel() const;
   Tensor<double> get_key_kernel() const;
   Tensor<double> get_value_kernel() const;

   Tensor<double> get_projection_kernel() const;

/*   size_t get_parameters_number() const final;*/

/*   // Display messages*/

/*   const bool& get_display() const;*/

/*   // Set methods*/

/*   void set();*/
/*   void set(const size_t&, const size_t&, const size_t&, const size_t&);*/

/*   void set_default();*/
/*   void set_name(const string&);*/

/*   // Architecture*/

/*   void set_input_size(const size_t&);*/
/*   void set_context_size(const size_t&);*/
/*   void set_depth(const size_t&);*/
/*   void set_number_of_heads(const size_t&);*/

/*   void set_kernels();*/
/*   void set_parameters_random() final;*/

/*   void set_dropout_rate(const Matrix<double>&);*/

/*   // Display messages*/

/*   void set_display(const bool&);*/

/*   // Linear transformation & projection*/

/*   void calculate_query_transformation(const Tensor<double>&, type*);*/
/*   void calculate_key_transformation(const Tensor<double>&, type*);*/
/*   void calculate_value_transformation(const Tensor<double>&, type*);*/

/*   void calculate_output_projection(const Tensor<type, 4>&, type*);*/

/*   // Attention computation*/

/*   void compute_attention_scores(type*, const Vector<size_t>&, type*, const Vector<size_t>&, type*); /// Softmax before saving*/

/*   void compute_attention_output(type*, const Vector<size_t>&, type*, const Vector<size_t>&, type*);*/

/*   // Multihead Attention layer outputs*/

/*   void forward_propagate(const Tensor<DynamicTensor<type>, 1>&,*/
/*                          LayerForwardPropagation*,*/
/*                          const bool&) final;*/

/*   // Expression methods*/

/*   string write_expression(const Vector<string>&, const Vector<string>&) const final;*/

/*   string write_activation_function_expression() const;*/

protected:

   // MEMBERS

   /// Input size

   size_t input_size;

   /// Context size

   size_t context_size;

   /// Embedding depth

   size_t depth;

   /// Number of attention heads

   size_t number_of_heads;

   /// Linear transformation kernels

   Tensor<double> query_kernel;
   Tensor<double> key_kernel;
   Tensor<double> value_kernel;

   /// Linear projection kernel

   Tensor<double> projection_kernel;

   /// Dropour rate

/*   type dropout_rate = type(0);*/

   /// Display messages to screen.

   bool display = true;
};

}

#endif

// OpenNN: Open Neural Networks Library.
// Copyright(C) 2005-2023 Artificial Intelligence Techniques, SL.
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
