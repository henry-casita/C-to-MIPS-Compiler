#ifndef ast_binarymul_hpp
#define ast_binarymul_hpp

#include <string>
#include <iostream>
#include <ast/ast_binaryop.hpp>

class BinaryMul
    : public BinaryOp

{
    using BinaryOp::BinaryOp;
    void codegen(std::ostream &output, std::string destreg, Context &context) const {
        getLeft()->codegen(output, "$2", context);
        getRight()->codegen(output, "$3", context);
        output << "mult " << " $2, " << "$3" << std::endl;
        output << "mflo " << destreg << std::endl;
    }
};
#endif