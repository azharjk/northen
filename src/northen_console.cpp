#include <iostream>

#include <northen/northen.h>

// TODO: Add more feature for the console application

int main(int, char** argv) {
  N::Application app { argv[1] };

  std::cout << "Generated Token" << std::endl;
  for (auto v : app.tokens()) {
    std::cout << v.ToString() << std::endl;
  }
}
