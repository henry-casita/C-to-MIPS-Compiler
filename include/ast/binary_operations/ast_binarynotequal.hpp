#ifndef ast_binarynotequal_hpp
#define ast_binarynotequal_hpp

#include <string>
#include <iostream>
#include <ast/ast_binaryop.hpp>

class BinaryNotEqual
    : public BinaryOp
    
{
    using BinaryOp::BinaryOp;
    void codegen(std::ostream &output, std::string destreg, Context &context) const {
        getLeft()->codegen(output, "$2", context);
        getRight()->codegen(output, "$3", context);
        output << "xor " << destreg << " $2, " << "$3" << std::endl;
        output << "sltu " << destreg << " $0, " << destreg << std::endl;
    }    
};
#endif