#ifndef ast_unarynot2_hpp
#define ast_unarynot2_hpp

#include <string>
#include <iostream>
#include <ast/ast_unaryop.hpp>

class UnaryNot2
    : public UnaryOp
{
    using UnaryOp::UnaryOp;
    void codegen(std::ostream &output, std::string destreg, Context &context) const {
        getExpr()->codegen(output, "$2", context);
        //output << "xor " << destreg << ", $0, " << destreg << std::endl;
        output << "slti " << destreg << ", " << destreg <<", 1" << std::endl;

    }
};
#endif