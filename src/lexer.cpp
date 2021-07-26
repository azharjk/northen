#include "include/northen/lexer.h"

#define TOKEN_NUMBER(num) tokens_.push_back(Token{TokenType::Number, std::stod(num)})
#define TOKEN_PLUS() tokens_.push_back(Token{TokenType::Plus})
#define TOKEN_MINUS() tokens_.push_back(Token{TokenType::Minus})
#define TOKEN_MULTIPLY() tokens_.push_back(Token{TokenType::Multiply})
#define TOKEN_DEVIDE() tokens_.push_back(Token{TokenType::Devide})

#define TOKEN_VALIDATE_NUMBER(num) if (num.size() > 0) { \
                                      TOKEN_NUMBER(num); \
                                      num.clear();       \
                                   }

namespace N {

void Lexer::Analyze() {

  std::string num{};
  size_t index{0};
  while (index < src_.size()) {
    if (isdigit(src_[index]))
      num += src_[index];
    else if (src_[index] == '+') {
      TOKEN_VALIDATE_NUMBER(num);
      TOKEN_PLUS();
    }
    else if (src_[index] == '-') {

      TOKEN_VALIDATE_NUMBER(num);
      TOKEN_MINUS();
    }
    else if (src_[index] == '*') {

      TOKEN_VALIDATE_NUMBER(num);
      TOKEN_MULTIPLY();
    }
    else if (src_[index] == '/') {

      TOKEN_VALIDATE_NUMBER(num);
      TOKEN_DEVIDE();
    }

    index++;
  }

  if (num.size() > 0) {
    TOKEN_NUMBER(num);
  }

}

} // namespace N
