#ifndef NORTHEN_AST_H_
#define NORTHEN_AST_H_

#include <memory>

namespace N {

// BinaryOperation operator

enum class Operator {
  Plus,
  Minus,
  Multiply,
  Devide
};

class ASTNode {
  public:
    virtual const char* name() const = 0;
    virtual double Execute() const = 0;
};

class Program final : public ASTNode {
  public:
    Program(std::shared_ptr<ASTNode> program)
      : program_(program) {}

    const char* name() const override { return "Program"; }
    double Execute() const { return program_->Execute(); }

  private:
    std::shared_ptr<ASTNode> program_;
};

class BinaryOperation final : public ASTNode {
  public:
    BinaryOperation(Operator op, std::shared_ptr<ASTNode> lhs, std::shared_ptr<ASTNode> rhs)
      : op_(op), lhs_(lhs), rhs_(rhs) {}

    const char* name() const override { return "BinaryOperation"; }
    double Execute() const;

  private:
    Operator op_;
    std::shared_ptr<ASTNode> lhs_;
    std::shared_ptr<ASTNode> rhs_;
};

class Number final : public ASTNode {
  public:
    Number(double data)
      : data_(data) {}

    const char* name() const override { return "Number"; }
    double Execute() const { return data_; }

  private:
    double data_;
};

} // namespace N

#endif // NORTHEN_AST_H_
