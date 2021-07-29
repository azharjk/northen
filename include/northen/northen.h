#ifndef NORTHEN_NORTHEN_H_
#define NORTHEN_NORTHEN_H_

#include <string>
#include <vector>

#include "include/northen/token.h"
#include "include/northen/ast.h"

namespace N {

class Application {
  public:
    Application(std::string s)
      : tokens_(make(s)) {}

    std::vector<Token> tokens() {
      return tokens_;
    }

  private:
    std::vector<Token> make(const std::string& s);

    std::vector<Token> tokens_;
};

} // namespace N

#endif // NORTHEN_NORTHEN_H_
