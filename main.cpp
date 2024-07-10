#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cmath>

// error handling for testing purposes, plan to delete for less branches and better perf
  // also look into implementing error codes
  //dynamic dispatch, inline methods, static polymorphism, template code, reducing cache misses

// std::vector<std::string> read_string_input(const std::string &r_file) {
//   std::ifstream input_file(r_file);
//
//
//
//   if (!input_file.is_open()) {
//     std::cerr << "Error opening the file!" << std::endl;
//     return {};
//   }
//     std::string one_line;
//     std::vector<std::string> multi_line;
//     for (int i = 0; i < 50; i++) {
//       getline(input_file, one_line);
//       multi_line.push_back(one_line);
//     }
//     input_file.close();
//   for (int i = 0; i < 10; i++) {
//     std::cout << multi_line.at(i) << std::endl;
//   }
//   return multi_line;
// }

int dot_product(const std::vector<int> &first_vector,const std::vector<int> &second_vector) {
  int dot_prod = 0;

  for (int i = 0; i < first_vector.size(); i++) {
    dot_prod += first_vector.at(i) * second_vector.at(i);
  }

  return dot_prod;
}

double magnitude(const std::vector<int> &input_vector) {
  double magni = 0;

  for (int i : input_vector) {
    magni += i * i;
  }

  return sqrt(magni);
}

double cosine_similarity( const std::vector<int> &first_vector,const std::vector<int> &second_vector) {

  const double magnitude_first_vector = magnitude(first_vector);
  const double magnitude_second_vector = magnitude(second_vector);
  const double dot_prod = dot_product(first_vector, second_vector);

  const double similarity = (dot_prod / (magnitude_first_vector * magnitude_second_vector));

  return similarity;

}


int main() {
  // std::string input_file_name = "";
  // std::cin >> input_file_name;
  // read_string_input(input_file_name);
  std::vector<int> first_test_vector = {1, 1, 1};
  std::vector<int> second_test_vector = {1, 1, 1};
  std::cout << dot_product(first_test_vector, second_test_vector) << std::endl;
  std::cout << magnitude(first_test_vector) << std::endl;
  std::cout << cosine_similarity(first_test_vector, second_test_vector) << std::endl;
  return 0;
}

