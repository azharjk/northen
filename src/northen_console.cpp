#include <iostream>
#include <memory>

#include <northen/northen.h>

// TODO: Add more feature for the console application

// int main(int, char** argv) {
//   N::Application app { argv[1] };

//   std::cout << "Generated Token" << std::endl;
//   for (auto v : app.tokens()) {
//     std::cout << v.ToString() << std::endl;
//   }
// }

// AST
int main() {
  auto program = std::make_shared<N::Program>(
    std::make_shared<N::BinaryOperation>(
      N::Operator::Plus,
      std::make_shared<N::Number>(10),
      std::make_shared<N::BinaryOperation>(
        N::Operator::Multiply,
        std::make_shared<N::Number>(10),
        std::make_shared<N::Number>(10)
      )
    )
  );

  std::cout << program->Execute() << std::endl;
}
