#include <iostream>

#include <northen/northen.h>

// TODO: Add more feature for the console application

int main(int, char** argv) {
  N::Application app { argv[1] };
  for (auto v : app.tokens()) {
    std::cout << v.data() << std::endl;
  }
}
