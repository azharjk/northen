#include <iostream>

#include <northen/northen.h>

// TODO: Add more feature for the console application

int main(int, char** argv) {
  N::Application app { argv[1] };

  std::cout << "Generated Token" << std::endl;
  for (auto v : app.tokens()) {
    switch (v.type()) {
      case N::TokenType::Number:
        std::cout << "Number: " << v.data() << std::endl;
        break;
      case N::TokenType::Plus:
        std::cout << "Plus" << std::endl;
        break;
      case N::TokenType::Minus:
        std::cout << "Minus" << std::endl;
        break;
      case N::TokenType::Multiply:
        std::cout << "Multiply" << std::endl;
        break;
      case N::TokenType::Devide:
        std::cout << "Devide" << std::endl;
        break;
    }
  }
}
