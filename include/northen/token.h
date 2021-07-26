#ifndef NORTHEN_TOKEN_H_
#define NORTHEN_TOKEN_H_

namespace N {

enum class TokenType {
  Number,
  Plus,
  Minus,
  Multiply,
  Devide
};

class Token {
  public:
    Token(TokenType type, int data = 0)
      : type_(type), data_(data) {}

    TokenType type() const {
      return type_;
    }

    int data() const {
      return data_;
    }

  private:
    TokenType type_;
    int data_;
};

} // namespace N

#endif // NORTHEN_TOKEN_H_