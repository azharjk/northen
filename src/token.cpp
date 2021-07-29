#include "include/northen/token.h"

namespace N {

std::string Token::ToString() const {
  std::string ret;
  ret = "Token(NUMBER, ";

  switch (type_) {
    case TokenType::Plus:
      return "Token(PLUS)";
    case TokenType::Minus:
      return "Token(MINUS)";
    case TokenType::Multiply:
      return "Token(MULTIPLY)";
    case TokenType::Devide:
      return "Token(DEVIDE)";
  }

  ret += std::to_string(data_);
  ret += ')';

  return ret;
}

} // namespace N
