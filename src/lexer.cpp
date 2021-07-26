#include "include/northen/lexer.h"

namespace N {

void Lexer::Analyze() {

  std::string num{};
  size_t index{0};
  while (index < src_.size()) {
    if (isdigit(src_[index]))
      num += src_[index];
    else if (src_[index] == '+') {
      if (num.size() > 0) {
        tokens_.push_back(Token{TokenType::Number, std::stod(num)});
        num.clear();
      }
      tokens_.push_back(Token{TokenType::Plus});
    }
    else if (src_[index] == '-') {
      if (num.size() > 0) {
        tokens_.push_back(Token{TokenType::Number, std::stod(num)});
        num.clear();
      }
      tokens_.push_back(Token{TokenType::Minus});
    }
    else if (src_[index] == '*') {
      if (num.size() > 0) {
        tokens_.push_back(Token{TokenType::Number, std::stod(num)});
        num.clear();
      }
      tokens_.push_back(Token{TokenType::Multiply});
    }
    else if (src_[index] == '/') {
      if (num.size() > 0) {
        tokens_.push_back(Token{TokenType::Number, std::stod(num)});
        num.clear();
      }
      tokens_.push_back(Token{TokenType::Devide});
    }

    index++;
  }

  if (num.size() > 0) {
    tokens_.push_back(Token{TokenType::Number, std::stod(num)});
  }

}

} // namespace N
