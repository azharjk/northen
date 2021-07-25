#include <iostream>

#include <northen/northen.h>

// TODO: Add more feature for the console application

int main(int, char** argv) {
  std::cout << N::Application::Evaluate(argv[1]) << std::endl;
}
