#ifndef ast_binaryxor_hpp
#define ast_binaryxor_hpp

#include <string>
#include <iostream>
#include <ast/ast_binaryop.hpp>

class BinaryXor
    : public BinaryOp
{
    using BinaryOp::BinaryOp;
    void codegen(std::ostream &output, std::string destreg, Context &context) const {
        getLeft()->codegen(output, "$2", context);
        getRight()->codegen(output, "$3", context);
        output << "xor " << destreg << ",  $3, " << "$2" << std::endl;
    }    
};
#endif