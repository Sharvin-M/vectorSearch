#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cmath>

// after the user inputs a filename, we are passing the user input by reference and opening it into the stream
typedef signed short int zero_to_one;

std::vector<std::string> read_input(const std::string &rFile) {
  std::ifstream inputFile(rFile);

  // error handling for testing purposes, plan to delete for less branches and better perf
  // also look into implementing error codes
  //dynamic dispatch, inline methods, static polymorphism, template code, reducing cache misses

  if (!inputFile.is_open()) {
    std::cerr << "Error opening the file!" << std::endl;
    return {};
  }
    std::string oneLine;
    std::vector<std::string> multi;
    for (int i = 0; i < 50; i++) {
      getline(inputFile, oneLine);
      multi.push_back(oneLine);
    }
    inputFile.close();
  for (int i = 0; i < 10; i++) {
    std::cout << multi.at(i) << std::endl;
  }
  return multi;
}

std::vector<int> embedder(std::vector<std::string> &input_vector) {
  std::vector<int> vector_embedding;

  return vector_embedding;
}

int dot_product(const std::vector<int> &first_vector,const std::vector<int> &second_vector) {
  long int dotProd;

  for (int i = 0; i < first_vector.size(); i++) {
    dotProd += first_vector.at(i) * second_vector.at(i);
  }

  return dotProd;
}

double magnitude(const std::vector<int> &input_vector) {
  double magni = 0;

  for (int i : input_vector) {
    magni += i * i;
  }

  return sqrt(magni);
}

zero_to_one vector_cosine_similarlity( const std::vector<int> &first_vector,const std::vector<int> &second_vector) {

  double magnitude_first_vector = magnitude(first_vector);
  double magnitude_second_vector = magnitude(second_vector);
  int dot_prod = dot_product(first_vector, second_vector);

  zero_to_one similarity = cos( (dot_prod) / (magnitude_first_vector * magnitude_second_vector));

  return similarity;

}


int main() {
  std::string inFileName = "";
  std::cin >> inFileName;
  read_input(inFileName);
  return 0;
}

