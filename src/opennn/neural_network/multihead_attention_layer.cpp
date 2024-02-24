//   OpenNN: Open Neural Networks Library
//   www.opennn.net
//
//   M U L T I H E A D   A T T E N T I O N   L A Y E R   C L A S S
//
//   Artificial Intelligence Techniques SL
//   artelnics@artelnics.com

#include "multihead_attention_layer.h"

namespace OpenNN
{

///// Default constructor.
///// It creates a empty layer object.
///// This constructor also initializes the rest of the class members to their default values.

//MultiheadAttentionLayer::MultiheadAttentionLayer() : Layer()
//{
//    set();

//    layer_type = Type::MultiheadAttention;
//}

///// Layer architecture constructor.
///// It creates a layer object with given input size, embedding depth and number of attention heads.
///// It initializes the parameters at random.
///// This constructor also initializes the rest of the class members to their default values.

//MultiheadAttentionLayer::MultiheadAttentionLayer(const size_t& new_input_size,
//                                                 const size_t& new_context_size,
//                                                 const size_t& new_depth,
//                                                 const size_t& new_number_of_heads) : Layer()
//{
//    set(new_input_size, new_context_size, new_depth, new_number_of_heads);

//    layer_type = Type::MultiheadAttention;

//    layer_name = "multihead_attention_layer";
//}

///// Returns the size of the input to the layer.

//size_t MultiheadAttentionLayer::get_input_size() const
//{
//    return input_size;
//}

///// Returns the size of the context to the layer.

//size_t MultiheadAttentionLayer::get_context_size() const
//{
//    return context_size;
//}

///// Returns the embedding depth used in the layer.

//size_t MultiheadAttentionLayer::get_depth() const
//{
//    return depth;
//}

///// Returns the number of attention heads of the layer.

//size_t MultiheadAttentionLayer::get_number_of_heads() const
//{
//    return number_of_heads;
//}

///// Returns linear transformation kernels

//Tensor<double> MultiheadAttentionLayer::get_query_kernel() const
//{
//    return query_kernel;
//}

//Tensor<double> MultiheadAttentionLayer::get_key_kernel() const
//{
//    return key_kernel;
//}

//Tensor<double> MultiheadAttentionLayer::get_value_kernel() const
//{
//    return value_kernel;
//}

///// Returns the linear projection kernel

//Tensor<double> MultiheadAttentionLayer::get_projection_kernel() const
//{
//    return projection_kernel;
//}

///// Returns the number of parameters of the layer.

//size_t MultiheadAttentionLayer::get_parameters_number() const
//{
//    return query_kernel.size() + key_kernel.size() + value_kernel.size() + projection_kernel.size();
//}

///// Returns true if messages from this class are displayed on the screen,
///// or false if messages from this class are not displayed on the screen.

//const bool& MultiheadAttentionLayer::get_display() const
//{
//    return display;
//}

///// Sets an empty layer.
///// It also sets the rest of the members to their default values.

//void MultiheadAttentionLayer::set()
//{
//    input_size = 0;

//    depth = 0;

//    number_of_heads = 0;

//    query_kernel.resize(0, 0, 0);
//    key_kernel.resize(0, 0, 0);
//    value_kernel.resize(0, 0, 0);

//    projection_kernel.resize(0, 0, 0);

//    set_default();
//}

///// Sets new input size, embedding depth, number of attention heads and activation function of the layer.
///// It also sets the rest of the members to their default values.

//void MultiheadAttentionLayer::set(const size_t& new_input_size,
//                                  const size_t& new_context_size,
//                                  const size_t& new_depth,
//                                  const size_t& new_number_of_heads)
//{
//    input_size = new_input_size;

//    context_size = new_context_size;

//    depth = new_depth;

//    number_of_heads = new_number_of_heads;

//    set_kernels();

//    set_default();
//}

///// Sets those members not related to the perceptrons to their default value.

//void MultiheadAttentionLayer::set_default()
//{
//    layer_name = "multihead_attention_layer";

//    display = true;

//    layer_type = Type::MultiheadAttention;
//}

//void MultiheadAttentionLayer::set_name(const string& new_layer_name)
//{
//    layer_name = new_layer_name;
//}

///// Sets a new input size in the layer.

//void MultiheadAttentionLayer::set_input_size(const size_t& new_input_size)
//{
//    input_size = new_input_size;
//}

///// Sets a new input size in the layer.

//void MultiheadAttentionLayer::set_context_size(const size_t& new_context_size)
//{
//    context_size = new_context_size;
//}

///// Sets a new embedding depth in the layer.

//void MultiheadAttentionLayer::set_depth(const size_t& new_depth)
//{
//    depth = new_depth;

//    set_kernels();
//}

///// Sets a new number of attention heads in the layer.

//void MultiheadAttentionLayer::set_number_of_heads(const size_t& new_number_of_heads)
//{
//    number_of_heads = new_number_of_heads;

//    set_kernels();
//}

///// Sets the layer's kernels according to the parameters.

//void MultiheadAttentionLayer::set_kernels()
//{
//    query_kernel.resize(depth, depth, number_of_heads);
//    key_kernel.resize(depth, depth, number_of_heads);
//    value_kernel.resize(depth, depth, number_of_heads);

//    projection_kernel.resize(depth, depth, number_of_heads);

//    set_parameters_random();
//}

//void MultiheadAttentionLayer::set_parameters_random()
//{
//    const type minimum = type(-0.2);
//    const type maximum = type(0.2);

//    for(size_t i = 0; i < query_kernel.size(); i++)
//    {
//        const type random = static_cast<type>(rand()/(RAND_MAX+1.0));

//        query_kernel(i) = minimum + (maximum - minimum)*random;
//    }

//    for(size_t i = 0; i < key_kernel.size(); i++)
//    {
//        const type random = static_cast<type>(rand()/(RAND_MAX+1.0));

//        key_kernel(i) = minimum + (maximum - minimum)*random;
//    }

//    for(size_t i = 0; i < value_kernel.size(); i++)
//    {
//        const type random = static_cast<type>(rand()/(RAND_MAX+1.0));

//        value_kernel(i) = minimum + (maximum - minimum)*random;
//    }

//    for(size_t i = 0; i < projection_kernel.size(); i++)
//    {
//        const type random = static_cast<type>(rand()/(RAND_MAX+1.0));

//        projection_kernel(i) = minimum + (maximum - minimum)*random;
//    }
//}

///// Sets a new display value.
///// If it is set to true messages from this class are displayed on the screen;
///// if it is set to false messages from this class are not displayed on the screen.
///// @param new_display Display value.

//void MultiheadAttentionLayer::set_display(const bool& new_display)
//{
//    display = new_display;
//}

///// @todo fix, update and explain
//void MultiheadAttentionLayer::calculate_query_transformation(const Tensor<double>& query, type* query_transformation_data)
//{
//    const size_t batch_size = get_dimensions(query)(0);

//    TensorMap<Tensor<type, 4>> transformed_query(query_transformation_data, batch_size, input_size, depth, number_of_heads);

//    Tensor<type, 2> batch_element(input_size, depth);

//    for(size_t batch_index = 0; batch_index < batch_size; batch_index++)
//    {
//        batch_element = query.chip(batch_index, 0);
//        transformed_query.chip(batch_index, 0) = batch_element.contract(query_kernel, A_B);
//    }
//}

//void MultiheadAttentionLayer::calculate_key_transformation(const Tensor<double>& key, type* key_transformation_data)
//{
//    const size_t batch_size = get_dimensions(key)(0);

//    TensorMap<Tensor<type, 4>> transformed_key(key_transformation_data, batch_size, context_size, depth, number_of_heads);

//    Tensor<type, 2> batch_element(context_size, depth);

//    for(size_t batch_index = 0; batch_index < batch_size; batch_index++)
//    {
//        batch_element = key.chip(batch_index, 0);
//        transformed_key.chip(batch_index, 0) = batch_element.contract(key_kernel, A_B);
//    }
//}

//void MultiheadAttentionLayer::calculate_value_transformation(const Tensor<double>& value, type* value_transformation_data)
//{
//    const size_t batch_size = get_dimensions(value)(0);

//    TensorMap<Tensor<type, 4>> transformed_value(value_transformation_data, batch_size, context_size, depth, number_of_heads);

//    Tensor<type, 2> batch_element(context_size, depth);

//    for(size_t batch_index = 0; batch_index < batch_size; batch_index++)
//    {
//        batch_element = value.chip(batch_index, 0);
//        transformed_value.chip(batch_index, 0) = batch_element.contract(value_kernel, A_B);
//    }
//}

//void MultiheadAttentionLayer::calculate_output_projection(const Tensor<type, 4>& attention_outputs, type* outputs_data)
//{
//    const size_t batch_size = get_dimensions(attention_outputs)(0);

//    TensorMap<Tensor<double>> outputs(outputs_data, batch_size, input_size, depth);

//    Tensor<double> batch_element(input_size, depth, number_of_heads);

//    const Eigen::array<size_tPair<size_t>, 2> contraction_indeces = {size_tPair<size_t>(1, 0), size_tPair<size_t>(2, 2)};

//    for(size_t batch_index = 0; batch_index < batch_size; batch_index++)
//    {
//        batch_element = attention_outputs.chip(batch_index, 0);
//        outputs.chip(batch_index, 0) = batch_element.contract(projection_kernel, contraction_indeces);
//    }
//}

///// Computes the attention scores by comparing (via dot product) query and key.
///// Attention scores must be computed separately for each batch element and each attention head (batch matrix multiplication).

//void MultiheadAttentionLayer::compute_attention_scores(type* transformed_query_data,
//                                                       const Vector<size_t>& transformed_query_dimensions,
//                                                       type* transformed_key_data,
//                                                       const Vector<size_t>& transformed_key_dimensions,
//                                                       type* attention_scores_data)
//{
//    if(transformed_query_dimensions(0) != transformed_key_dimensions(0))
//    {
//        ostringstream buffer;

//        buffer << "OpenNN Exception: MultiheadAttentionLayer class.\n"
//               << "void compute_attention_scores(type*, const Vector<size_t>&, type*, const Vector<size_t>&, type*) method.\n"
//               << "Input batch size (" << transformed_query_dimensions(0) << ") and context batch size (" << transformed_key_dimensions(0) << ") not equal.\n";

//        throw invalid_argument(buffer.str());
//    }

//    const size_t batch_size = transformed_query_dimensions(0);

//    TensorMap<Tensor<type, 4>>  transformed_query(transformed_query_data, batch_size, input_size, depth, number_of_heads);
//    const TensorMap<Tensor<type, 4>>  transformed_key(transformed_key_data, batch_size, context_size, depth, number_of_heads);

//    const Tensor<type, 4> scaled_query = transformed_query / transformed_query.constant(sqrt(depth));

//    Tensor<type, 4> raw_attention_scores(batch_size, input_size, context_size, number_of_heads);

//    TensorMap<Tensor<type, 4>> attention_scores(attention_scores_data, batch_size, input_size, context_size, number_of_heads);

//    Vector<size_t> row_size(1);
//    row_size.setValues({context_size});

//#pragma omp parallel for collapse(2)
//        for(size_t batch_index = 0; batch_index < batch_size; batch_index++)
//        {
//            for(size_t head_index = 0; head_index < number_of_heads ; head_index++)
//            {
//            raw_attention_scores.chip(batch_index, 0).chip(head_index, 2)/*.device(thread_pool_device)*/ =
//                    scaled_query.chip(batch_index, 0).chip(head_index, 2).contract(
//                    transformed_key.chip(batch_index, 0).chip(head_index, 2), A_BT);

//                Vector<double> raw_attention_scores_row(context_size);
//                Vector<double> attention_scores_row(context_size);

//                for(size_t row_index = 0; row_index < input_size; row_index++)
//                {
//                    raw_attention_scores_row = raw_attention_scores.chip(batch_index, 0).chip(head_index, 2).chip(row_index, 0);
//                    softmax(raw_attention_scores_row.data(),
//                            row_size,
//                            attention_scores_row.data(),
//                            row_size);
//                    attention_scores.chip(batch_index, 0).chip(head_index, 2).chip(row_index, 0) = attention_scores_row;
//                }
//            }
//        };
//}

//void MultiheadAttentionLayer::compute_attention_output(type* transformed_value_data,
//                                                       const Vector<size_t>& transformed_value_dimensions,
//                                                       type* attention_scores_data,
//                                                       const Vector<size_t>& attention_scores_dimensions,
//                                                       type* attention_output_data)
//{
//    const size_t batch_size = transformed_value_dimensions(0);

//    TensorMap<Tensor<type, 4>> transformed_value(transformed_value_data, batch_size, context_size, depth, number_of_heads);
//    TensorMap<Tensor<type, 4>> attention_scores(attention_scores_data, batch_size, input_size, context_size, number_of_heads);

//    TensorMap<Tensor<type, 4>> attention_output(attention_output_data, batch_size, input_size, depth, number_of_heads);

//#pragma omp parallel for collapse(2)
//        for(size_t batch_index = 0; batch_index < batch_size; batch_index++)
//        {
//            for(size_t head_index = 0; head_index < number_of_heads ; head_index++)
//            {
//                attention_output.chip(batch_index, 0).chip(head_index, 2) =
//                    attention_scores.chip(batch_index, 0).chip(head_index, 2).contract(
//                    transformed_value.chip(batch_index, 0).chip(head_index, 2), A_B);
//            }
//        };
//}

//void MultiheadAttentionLayer::forward_propagate(const Tensor<DynamicTensor<type>, 1>& inputs,
//                                        LayerForwardPropagation* forward_propagation,
//                                        const bool& is_training)
//{
//    if(inputs.size() != 3)
//    {
//        ostringstream buffer;
//        buffer << "OpenNN Exception: MultiheadAttentionLayer class.\n"
//               << "void MultiheadAttentionLayer::forward_propagate(Tensor<type*, 1>, const Tensor<Tensor<size_t,1>, 1>&, LayerForwardPropagation*, const bool&)\n"
//               << "Number of input tensors (" << inputs.size() << ") must be 3 (key, query and value).\n";
//        throw invalid_argument(buffer.str());
//    }

//    if(inputs(0).get_dimension(0) != inputs(1).get_dimension(0) || inputs(0).get_dimension(0) != inputs(2).get_dimension(0))
//    {
//        ostringstream buffer;
//        buffer << "OpenNN Exception: MultiheadAttentionLayer class.\n"
//               << "void MultiheadAttentionLayer::forward_propagate(Tensor<type*, 1>, const Tensor<Tensor<size_t,1>, 1>&, LayerForwardPropagation*, const bool&)\n"
//               << "Batch sizes of inputs must be equal.\n";
//        throw invalid_argument(buffer.str());
//    }

//    if(inputs(0).get_dimension(1) != input_size)
//    {
//        ostringstream buffer;
//        buffer << "OpenNN Exception: MultiheadAttentionLayer class.\n"
//               << "void MultiheadAttentionLayer::forward_propagate(Tensor<type*, 1>, const Tensor<Tensor<size_t,1>, 1>&, LayerForwardPropagation*, const bool&)\n"
//               << "2nd dimension of query must be equal to layer input_size.\n";
//        throw invalid_argument(buffer.str());
//    }

//    if(inputs(1).get_dimension(1) != context_size || inputs(2).get_dimension(1) != context_size)
//    {
//        ostringstream buffer;
//        buffer << "OpenNN Exception: MultiheadAttentionLayer class.\n"
//               << "void MultiheadAttentionLayer::forward_propagate(Tensor<type*, 1>, const Tensor<Tensor<size_t,1>, 1>&, LayerForwardPropagation*, const bool&)\n"
//               << "2nd dimension of key and value must be equal to layer context_size.\n";
//        throw invalid_argument(buffer.str());
//    }

//    if(inputs(0).get_dimension(2) != depth || inputs(1).get_dimension(2) != depth || inputs(2).get_dimension(2) != depth)
//    {
//        ostringstream buffer;
//        buffer << "OpenNN Exception: MultiheadAttentionLayer class.\n"
//               << "void MultiheadAttentionLayer::forward_propagate(Tensor<type*, 1>, const Tensor<Tensor<size_t,1>, 1>&, LayerForwardPropagation*, const bool&)\n"
//               << "3rd dimension of all inputs must be equal to layer depth.\n";
//        throw invalid_argument(buffer.str());
//    }

//    const size_t batch_size = inputs(0).get_dimension(0);

//    const Vector<size_t> query_dimensions = inputs(0).get_dimensions();
//    const Vector<size_t> key_dimensions = inputs(1).get_dimensions();

//    MultiheadAttentionLayerForwardPropagation* multihead_attention_layer_forward_propagation
//        = static_cast<MultiheadAttentionLayerForwardPropagation*>(forward_propagation);

//    const TensorMap<Tensor<double>> query = inputs(0).to_tensor_map<3>();
//    const TensorMap<Tensor<double>> key = inputs(1).to_tensor_map<3>();
//    const TensorMap<Tensor<double>> value = inputs(2).to_tensor_map<3>();

//    type* transformed_query_data = multihead_attention_layer_forward_propagation->get_transformed_query_data();
//    type* transformed_key_data = multihead_attention_layer_forward_propagation->get_transformed_key_data();
//    type* transformed_value_data = multihead_attention_layer_forward_propagation->get_transformed_value_data();

//    calculate_query_transformation(query, transformed_query_data);
//    calculate_key_transformation(key, transformed_key_data);
//    calculate_value_transformation(value, transformed_value_data);

//    Vector<size_t> transformed_query_dimensions(4);
//    Vector<size_t> transformed_key_dimensions(4);
//    transformed_query_dimensions.setValues({batch_size, input_size, depth, number_of_heads});
//    transformed_key_dimensions.setValues({batch_size, context_size, depth, number_of_heads});

//    type* attention_scores_data = multihead_attention_layer_forward_propagation->get_attention_scores_data();

//    compute_attention_scores(transformed_query_data,
//                             transformed_query_dimensions,
//                             transformed_key_data,
//                             transformed_key_dimensions,
//                             attention_scores_data);

//    const Vector<size_t> attention_scores_dimensions = get_dimensions(multihead_attention_layer_forward_propagation->attention_scores);

//    type* attention_outputs_data = multihead_attention_layer_forward_propagation->get_attention_outputs_data();

//    compute_attention_output(transformed_value_data,
//                             transformed_key_dimensions,
//                             attention_scores_data,
//                             attention_scores_dimensions,
//                             attention_outputs_data);

//    const TensorMap<Tensor<type, 4>> attention_outputs(attention_outputs_data, batch_size, input_size, depth, number_of_heads);

//    calculate_output_projection(attention_outputs,
//                                multihead_attention_layer_forward_propagation->outputs(0).get_data());
//}


//void PerceptronLayer::forward_propagate(type* inputs_data,
//                                        const Vector<size_t>& inputs_dimensions,
//                                        Vector<double>& potential_parameters,
//                                        LayerForwardPropagation* forward_propagation)
//{

//    const TensorMap<Tensor<type, 2>> inputs(inputs_data, inputs_dimensions(0), inputs_dimensions(1));

//    const size_t neurons_number = get_neurons_number();

//    const size_t inputs_number = get_inputs_number();

//    const TensorMap<Tensor<type, 2>> potential_biases(potential_parameters.data(), 1, neurons_number);

//    const TensorMap<Tensor<type, 2>> potential_synaptic_weights(potential_parameters.data()+neurons_number, inputs_number, neurons_number);

//    PerceptronLayerForwardPropagation* perceptron_layer_forward_propagation = static_cast<PerceptronLayerForwardPropagation*>(forward_propagation);

//    const Vector<size_t> activations_dimensions = perceptron_layer_forward_propagation->outputs_dimensions;

//    const Vector<size_t> combinations_dimensions = get_dimensions(perceptron_layer_forward_propagation->combinations);

//    const Vector<size_t> derivatives_dimensions = get_dimensions(perceptron_layer_forward_propagation->activations_derivatives);

//    calculate_combinations(inputs,
//                           potential_biases,
//                           potential_synaptic_weights,
//                           perceptron_layer_forward_propagation->get_combinations_data());

//    calculate_activations_derivatives(perceptron_layer_forward_propagation->combinations.data(),
//                                      combinations_dimensions,
//                                      perceptron_layer_forward_propagation->outputs_data,
//                                      activations_dimensions,
//                                      perceptron_layer_forward_propagation->activations_derivatives.data(),
//                                      derivatives_dimensions);
//}

//string PerceptronLayer::write_expression(const Vector<string>& inputs_names, const Vector<string>& outputs_names) const
//{
//    ostringstream buffer;

//    for(size_t j = 0; j < outputs_names.size(); j++)
//    {
//        const Vector<double> synaptic_weights_column =  synaptic_weights.chip(j,1);

//        buffer << outputs_names[j] << " = " << write_activation_function_expression() << "( " << biases(0,j) << " +";

//        for(size_t i = 0; i < inputs_names.size() - 1; i++)
//        {
//            buffer << " (" << inputs_names[i] << "*" << synaptic_weights_column(i) << ") +";
//        }

//        buffer << " (" << inputs_names[inputs_names.size() - 1] << "*" << synaptic_weights_column[inputs_names.size() - 1] << ") );\n";
//    }

//    return buffer.str();
//}

//void PerceptronLayer::from_XML(const tinyxml2::XMLDocument& document)
//{
//    ostringstream buffer;

//    // Perceptron layer

//    const tinyxml2::XMLElement* perceptron_layer_element = document.FirstChildElement("PerceptronLayer");

//    if(!perceptron_layer_element)
//    {
//        buffer << "OpenNN Exception: PerceptronLayer class.\n"
//               << "void from_XML(const tinyxml2::XMLDocument&) method.\n"
//               << "PerceptronLayer element is nullptr.\n";

//        throw invalid_argument(buffer.str());
//    }

//    // Layer name

//    const tinyxml2::XMLElement* layer_name_element = perceptron_layer_element->FirstChildElement("LayerName");

//    if(!layer_name_element)
//    {
//        buffer << "OpenNN Exception: PerceptronLayer class.\n"
//               << "void from_XML(const tinyxml2::XMLDocument&) method.\n"
//               << "LayerName element is nullptr.\n";

//        throw invalid_argument(buffer.str());
//    }

//    if(layer_name_element->GetText())
//    {
//        set_name(layer_name_element->GetText());
//    }

//    // Inputs number

//    const tinyxml2::XMLElement* inputs_number_element = perceptron_layer_element->FirstChildElement("InputsNumber");

//    if(!inputs_number_element)
//    {
//        buffer << "OpenNN Exception: PerceptronLayer class.\n"
//               << "void from_XML(const tinyxml2::XMLDocument&) method.\n"
//               << "InputsNumber element is nullptr.\n";

//        throw invalid_argument(buffer.str());
//    }

//    if(inputs_number_element->GetText())
//    {
//        set_inputs_number(static_cast<size_t>(stoi(inputs_number_element->GetText())));
//    }

//    // Neurons number

//    const tinyxml2::XMLElement* neurons_number_element = perceptron_layer_element->FirstChildElement("NeuronsNumber");

//    if(!neurons_number_element)
//    {
//        buffer << "OpenNN Exception: PerceptronLayer class.\n"
//               << "void from_XML(const tinyxml2::XMLDocument&) method.\n"
//               << "NeuronsNumber element is nullptr.\n";

//        throw invalid_argument(buffer.str());
//    }

//    if(neurons_number_element->GetText())
//    {
//        set_neurons_number(static_cast<size_t>(stoi(neurons_number_element->GetText())));
//    }

//    // Activation function

//    const tinyxml2::XMLElement* activation_function_element = perceptron_layer_element->FirstChildElement("ActivationFunction");

//    if(!activation_function_element)
//    {
//        buffer << "OpenNN Exception: PerceptronLayer class.\n"
//               << "void from_XML(const tinyxml2::XMLDocument&) method.\n"
//               << "ActivationFunction element is nullptr.\n";

//        throw invalid_argument(buffer.str());
//    }

//    if(activation_function_element->GetText())
//    {
//        set_activation_function(activation_function_element->GetText());
//    }

//    // Parameters

//    const tinyxml2::XMLElement* parameters_element = perceptron_layer_element->FirstChildElement("Parameters");

//    if(!parameters_element)
//    {
//        buffer << "OpenNN Exception: PerceptronLayer class.\n"
//               << "void from_XML(const tinyxml2::XMLDocument&) method.\n"
//               << "Parameters element is nullptr.\n";

//        throw invalid_argument(buffer.str());
//    }

//    if(parameters_element->GetText())
//    {
//        const string parameters_string = parameters_element->GetText();

//        set_parameters(to_type_vector(parameters_string, ' '));
//    }
//}

//void PerceptronLayer::write_XML(tinyxml2::XMLPrinter& file_stream) const
//{
//    ostringstream buffer;

//    // Perceptron layer

//    file_stream.OpenElement("PerceptronLayer");

//    // Layer name
//    file_stream.OpenElement("LayerName");
//    buffer.str("");
//    buffer << layer_name;
//    file_stream.PushText(buffer.str().c_str());
//    file_stream.CloseElement();

//    // Inputs number
//    file_stream.OpenElement("InputsNumber");

//    buffer.str("");
//    buffer << get_inputs_number();

//    file_stream.PushText(buffer.str().c_str());

//    file_stream.CloseElement();

//    // Outputs number

//    file_stream.OpenElement("NeuronsNumber");

//    buffer.str("");
//    buffer << get_neurons_number();

//    file_stream.PushText(buffer.str().c_str());

//    file_stream.CloseElement();

//    // Activation function

//    file_stream.OpenElement("ActivationFunction");

//    file_stream.PushText(write_activation_function().c_str());

//    file_stream.CloseElement();

//    // Parameters

//    file_stream.OpenElement("Parameters");

//    buffer.str("");

//    const Vector<double> parameters = get_parameters();
//    const size_t parameters_size = parameters.size();

//    for(size_t i = 0; i < parameters_size; i++)
//    {
//        buffer << parameters(i);

//        if(i != (parameters_size-1)) buffer << " ";
//    }

//    file_stream.PushText(buffer.str().c_str());

//    file_stream.CloseElement();

//    // Peceptron layer (end tag)

//    file_stream.CloseElement();
//}

}

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
