#include "include/northen/ast.h"

namespace N {

double BinaryOperation::Execute() const {
  double lhs_value = lhs_->Execute();
  double rhs_value = rhs_->Execute();

  switch (op_) {
    case Operator::Plus:
      return lhs_value + rhs_value;
    case Operator::Minus:
      return lhs_value - rhs_value;
    case Operator::Multiply:
      return lhs_value * rhs_value;
    case Operator::Devide:
      return lhs_value / rhs_value;
  }

  return 0;
}

} // namespace N
