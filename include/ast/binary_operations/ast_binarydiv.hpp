#ifndef ast_binarydiv_hpp
#define ast_binarydiv_hpp

#include <string>
#include <iostream>
#include <ast/ast_binaryop.hpp>

class BinaryDiv
    : public BinaryOp
{
    using BinaryOp::BinaryOp;
    void codegen(std::ostream &output, std::string destreg, Context &context) const {
        getLeft()->codegen(output, "$2", context);
        getRight()->codegen(output, "$3", context);
        output << "div " << " $2, " << "$3" << std::endl;
        output << "mflo " << destreg << std::endl;
    }   
};
#endif