#include <cmath>
#include <iostream>
#include <vector>
// #include <gtest/gtest.h>

// Key points of this project

/* vector cosine similarity for vector search,
 * Newton-Raphson numerical sqrt approx. method
 * improve perf with less branches, dynamic dispatch,
 * inline methods, static polymorphism,
 * template code, and reducing cache misses
 * TDD w/ google test suite, implementing error codes
*/

double dot_product(const std::vector<double> &first_vector,const std::vector<double> &second_vector) {
  double dot_prod = 0;

  for (int i = 0; i < first_vector.size(); i++) {
    dot_prod += first_vector.at(i) * second_vector.at(i);
  }

  return dot_prod;
}

double newton_raphson(double input) {
  //  x_0 =  2
  //  f(x) = x^2  / fp(x) = 2x
  // x_1 = 2 - (4/4) = 1
  // x_2 = 1 - (1/2) = 0.5
  // x_3 = 0.5 - (0.25/1) = 0.25

  return 0.0;
}

double magnitude(const std::vector<double> &input_vector) {
  double magni = 0;

  for (double i : input_vector) {
    magni += i * i;
  }

  return sqrt(magni);
}

double cosine_similarity( const std::vector<double> &first_vector,const std::vector<double> &second_vector) {

  const double magnitude_first_vector = magnitude(first_vector);
  const double magnitude_second_vector = magnitude(second_vector);
  const double dot_prod = dot_product(first_vector, second_vector);

  const double similarity = (dot_prod / (magnitude_first_vector * magnitude_second_vector));

  return similarity;

}




int main() {
  std::vector<double> first_test_vector = {-0.038194, -0.24487, 0.72812, -0.39961, 0.083172, 0.043953, -0.39141, 0.3344 -0.57545, 0.087459 ,0.28787 -0.06731 ,0.30906, -0.26384, -0.13231 ,-0.20757 ,0.33395, -0.33848, -0.31743, -0.48336, 0.1464, -0.37304, 0.34577, 0.052041, 0.44946 -0.46971, 0.02628, -0.54155, -0.15518, -0.14107, -0.039722, 0.28277, 0.14393, 0.23464, -0.31021, 0.086173, 0.20397, 0.52624, 0.17164, -0.082378, -0.71787, -0.41531, 0.20335, -0.12763, 0.41367, 0.55187, 0.57908, -0.33477, -0.36559, -0.54857, -0.062892, 0.26584, 0.30205, 0.99775, -0.80481, -3.0243, 0.01254, -0.36942, 2.2167 ,0.72201, -0.24978, 0.92136, 0.034514 ,0.46745 ,1.1079 ,-0.19358, -0.074575, 0.23353 ,-0.052062 -0.22044, 0.057162, -0.15806, -0.30798, -0.41625, 0.37972 ,0.15006, -0.53212, -0.2055, -1.2526, 0.071624, 0.70565, 0.49744, -0.42063, 0.26148, -1.538, -0.30223, -0.073438, -0.28312 ,0.37104, -0.25217, 0.016215, -0.017099, -0.38984, 0.87424, -0.72569, -0.51058, -0.52028, -0.1459 ,0.8278 ,0.27062};
  std::vector<double> second_test_vector = {0.073793 ,0.22958 ,0.1619 ,0.51383 ,-0.13568 ,0.059524 ,0.5724 ,-0.3393 ,0.10477 ,0.24796 ,-0.13659 ,-0.37421 ,-6.1651 ,-0.36166 ,-0.36804 ,-0.081314 ,-0.0336 ,-0.30373 ,-0.40536 ,0.094863 ,-0.1426 ,-0.2363 ,-0.10712 ,0.24055 ,0.22325 ,-0.62564 ,0.19939 ,0.51398 ,0.4904 ,-0.46308 ,-0.14342, 0.019332 ,-0.095564 ,0.25391 ,0.070189 ,0.19461 ,0.35724 ,0.24704 ,0.38155 ,-0.23231 ,-0.99356 ,0.32767 ,0.30328 ,0.55577 ,0.5844 ,-0.22246 ,-0.24206 ,-0.7488 ,0.23144 ,-0.0053725 ,-0.31667 ,-0.1256 ,0.40173 ,-0.33374 ,0.91548 ,0.26268 ,-0.68389 ,0.33916 ,0.17124 ,0.47471 ,0.38165 ,0.098252 ,-0.43935 ,0.27527 ,0.23848 ,-0.037455 ,-0.97668 ,-0.0081719 ,-0.37798 ,0.21634 ,0.7592 ,0.17825 ,0.21407 ,-0.65874 ,0.099135 ,-0.24406 ,-0.0089665 ,-0.3625 ,-0.87086 ,0.079953 ,1.8543 ,0.52843 ,-0.40883 ,0.22817 ,0.32473 ,0.27017 ,-0.53825 ,0.08892 ,-0.15773 ,0.11811 ,0.27935 ,0.11127 ,-0.06005 ,0.26238 ,-0.18814 ,0.023596 ,-0.4375 ,-0.57185 ,0.56693 ,-0.097415};
  std::cout << dot_product(first_test_vector, second_test_vector) << std::endl;
  std::cout << magnitude(first_test_vector) << std::endl;
  std::cout << cosine_similarity(first_test_vector, second_test_vector) << std::endl;
  return 0;
}

