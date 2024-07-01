#include <iostream>
#include <vector>
#include <fstream>
#include <string>

// after the user inputs a filename, we are passing the user input by reference and opening it into the stream

std::vector<std::string> read_input(const std::string &rFile) {
  std::ifstream inputFile(rFile);

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


int main() {
  std::string inFileName = "";
  std::cin >> inFileName;
  read_input(inFileName);
  return 0;
}

