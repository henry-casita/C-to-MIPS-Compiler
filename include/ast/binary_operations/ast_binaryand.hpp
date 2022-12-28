#ifndef ast_binaryand_hpp
#define ast_binaryand_hpp

#include <string>
#include <iostream>
#include <ast/ast_binaryop.hpp>

class BinaryAnd
    : public BinaryOp
{
    using BinaryOp::BinaryOp;
    void codegen(std::ostream &output, std::string destreg, Context &context) const {
        getLeft()->codegen(output, "$2", context);
        getRight()->codegen(output, "$3", context);
        output << "and " << destreg <<", $3, " << "$2" << std::endl;
    }     
};
#endif