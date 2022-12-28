#ifndef ast_binaryadd_hpp
#define ast_binaryadd_hpp

#include <string>
#include <iostream>
#include <ast/ast_binaryop.hpp>

class BinaryAdd
    : public BinaryOp
    
{
    using BinaryOp::BinaryOp;
    void codegen(std::ostream &output, std::string destreg, Context &context) const {
        getLeft()->codegen(output, "$3", context);
        getRight()->codegen(output, "$2", context);
        output << "addu " << destreg << ", $3, " << "$2" << std::endl;
    }    
};
#endif