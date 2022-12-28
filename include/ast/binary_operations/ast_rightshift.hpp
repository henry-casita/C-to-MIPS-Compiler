#ifndef ast_rightshift_hpp
#define ast_rightshift_hpp

#include <string>
#include <iostream>
#include <ast/ast_binaryop.hpp>

class RightShift
    : public BinaryOp
    
{
    using BinaryOp::BinaryOp;
    void codegen(std::ostream &output, std::string destreg, Context &context) const {
        getLeft()->codegen(output, "$2", context);
        getRight()->codegen(output, "$3", context);
        output << "srav " << destreg << " $2, " << "$3" << std::endl;
    }    
};
#endif