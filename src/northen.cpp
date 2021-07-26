#include "include/northen/northen.h"

namespace N {

std::vector<Token> Application::make(const std::string& s) {
  // TODO: Add lexer
  return {
    Token{TokenType::Number, 10},
    Token{TokenType::Plus},
    Token{TokenType::Number, 100}
  };
}

} // namespace N
