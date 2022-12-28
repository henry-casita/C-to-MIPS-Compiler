#ifndef ast_lessthanorequal_hpp
#define ast_lessthanorequal_hpp

#include <string>
#include <iostream>
#include <ast/ast_binaryop.hpp>

class LessThanEqual
    : public BinaryOp
    
{
    using BinaryOp::BinaryOp;
    void codegen(std::ostream &output, std::string destreg, Context &context) const {
        getLeft()->codegen(output, "$2", context);
        getRight()->codegen(output, "$3", context);
        output << "sub " << destreg << ", $2, " << "$3" << std::endl;
        output << "li $3, 1" << std::endl;
        output << "slt " << destreg << ", " << destreg  <<  ", $3" << std::endl;
    }    
};
#endif