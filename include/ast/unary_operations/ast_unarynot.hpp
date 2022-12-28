#ifndef ast_unarynot_hpp
#define ast_unarynot_hpp

#include <string>
#include <iostream>
#include <ast/ast_unaryop.hpp>

class UnaryNot
    : public UnaryOp
{
    using UnaryOp::UnaryOp;
    void codegen(std::ostream &output, std::string destreg, Context &context) const {
        getExpr()->codegen(output, "$2", context);
        output << "nor " << destreg << ", $0, " << destreg << std::endl;
    }
};
#endif