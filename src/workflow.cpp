#include <iostream>

int main(int argc, char * argv[]) {
  std::cout << "---- Welcome ----\n\n";

  for (size_t i{}; i < argc; ++i) {
    std::cout << "arg#" << argc << ": " << argv[i] << '\n';
  }
}
