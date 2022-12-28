#ifndef ast_unaryneg_hpp
#define ast_unaryneg_hpp

#include <string>
#include <iostream>
#include <ast/ast_unaryop.hpp>

class UnaryNeg
    : public UnaryOp
{
    using UnaryOp::UnaryOp;
    void codegen(std::ostream &output, std::string destreg, Context &context) const {
        getExpr()->codegen(output, "$2", context);
        output << "subu " << destreg << ", $0, " << destreg << std::endl;
    }
};
#endif