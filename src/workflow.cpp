#include <iostream>

int main(int argc, char * argv[]) {
  std::cout << "---- Welcome ----\n\n";

  for (int i{}; i < argc; ++i) {
    std::cout << "arg#" << argc << ": " << argv[i] << '\n';
  }
}
