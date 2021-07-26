#ifndef NORTHEN_LEXER_H_
#define NORTHEN_LEXER_H_

#include <string>
#include <vector>

#include "include/northen/token.h"

namespace N {

class Lexer {
  public:
    Lexer(const std::string& s)
     : src_(s) { Analyze(); }

    std::vector<Token> tokens() { return tokens_; }

    void Analyze();

  private:
    std::vector<Token> tokens_;
    std::string src_;
};

} // namespace N

#endif // NORTHEN_LEXER_H_
