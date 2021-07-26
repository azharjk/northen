#include "include/northen/northen.h"

#include "include/northen/lexer.h"

namespace N {

std::vector<Token> Application::make(const std::string& s) {

  Lexer lex{s};

  return lex.tokens();
}

} // namespace N
