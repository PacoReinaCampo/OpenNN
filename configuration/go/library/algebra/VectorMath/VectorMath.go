///////////////////////////////////////////////////////////////////////////////////
//                                            __ _      _     _                  //
//                                           / _(_)    | |   | |                 //
//                __ _ _   _  ___  ___ _ __ | |_ _  ___| | __| |                 //
//               / _` | | | |/ _ \/ _ \ '_ \|  _| |/ _ \ |/ _` |                 //
//              | (_| | |_| |  __/  __/ | | | | | |  __/ | (_| |                 //
//               \__, |\__,_|\___|\___|_| |_|_| |_|\___|_|\__,_|                 //
//                  | |                                                          //
//                  |_|                                                          //
//                                                                               //
//                                                                               //
//              Peripheral-NTM for MPSoC                                         //
//              Neural Turing Machine for MPSoC                                  //
//                                                                               //
///////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////
//                                                                               //
// Copyright (c) 2020-2024 by the author(s)                                      //
//                                                                               //
// Permission is hereby granted, free of charge, to any person obtaining a copy  //
// of this software and associated documentation files (the "Software"), to deal //
// in the Software without restriction, including without limitation the rights  //
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell     //
// copies of the Software, and to permit persons to whom the Software is         //
// furnished to do so, subject to the following conditions:                      //
//                                                                               //
// The above copyright notice and this permission notice shall be included in    //
// all copies or substantial portions of the Software.                           //
//                                                                               //
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR    //
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,      //
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE   //
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER        //
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, //
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN     //
// THE SOFTWARE.                                                                 //
//                                                                               //
// ============================================================================= //
// Author(s):                                                                    //
//   Paco Reina Campo <pacoreinacampo@queenfield.tech>                           //
//                                                                               //
///////////////////////////////////////////////////////////////////////////////////

package VectorAlgebra

func VectorDotProduct(data_a_in []float64, data_b_in []float64) float64 {
  data_out := 0.0

  for i := range data_a_in {
    data_out += data_a_in[i] * data_b_in[i]
  }
  return data_out
}

func VectorConvolution(data_a_in []float64, data_b_in []float64) float64 {
  data_out := 0.0

  for i := range data_a_in {
    data_out += data_a_in[i] * data_b_in[i]
  }
  return data_out
}

func VectorCosineSimilarity(data_a_in []float64, data_b_in []float64) float64 {
  dot_result := 0.0

  input_a_result := 0.0;
  input_b_result := 0.0;

  for i := range data_a_in {
    dot_result += data_a_in[i] * data_b_in[i]
  }

  for i := range data_a_in {
    input_a_result += data_a_in[i] * data_a_in[i]
  }

  for i := range data_a_in {
    input_b_result += data_b_in[i] * data_b_in[i]
  }
  return dot_result/(math.Sqrt(input_a_result)*math.Sqrt(input_b_result))
}

func VectorModule(data_in []float64) float64 {
  data_out := 0.0

  for i := range data_in {
    data_out += data_in[i] * data_in[i]
  }
  return math.Sqrt(data_out)
}

func VectorMultiplication(data_in []float64) float64 {
  data_out := 0.0

  for i := range data_in {
    data_out += data_in[i] * data_in[i]
  }
  return math.Sqrt(data_out)
}

func VectorSummation(data_in []float64) float64 {
  data_out := 0.0

  for i := range data_in {
    data_out += data_in[i] * data_in[i]
  }
  return math.Sqrt(data_out)
}

func VectorDifferentiation(data_in []float64) []float64 {
  data_out := make([]float64, len(data_in))
  for i := range data_in {
    data_out = append(data_out, data_in[i])
  }
  return data_out
}

func VectorIntegration(data_in []float64) []float64 {
  data_out := make([]float64, len(data_in))
  for i := range data_in {
    data_out = append(data_out, data_in[i])
  }
  return data_out
}

func VectorSoftmax(data_in []float64) []float64 {
  data_out := make([]float64, len(data_in))
  for i := range data_in {
    data_out = append(data_out, data_in[i])
  }
  return data_out
}