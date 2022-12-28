#ifndef ast_logicaland_hpp
#define ast_logicaland_hpp

#include <string>
#include <iostream>
#include <ast/ast_binaryop.hpp>

class LogicalAnd
    : public BinaryOp
    {
        using BinaryOp::BinaryOp;
        void codegen(std::ostream &output, std::string destreg, Context &context) const {
            getLeft()->codegen(output, "$2", context);
            //output << "li $3, 1" << std::endl;
            output << "beq " << destreg << ", $0, $L2" << std::endl;
            output << "nop" << std::endl;
            getRight()->codegen(output, "$2", context);
            //output << "li $3, 1" << std::endl;
            output << "beq " << destreg << ", $0, $L2" <<  std::endl;
            output << "nop" << std::endl;
            output << "li $2,1" << std::endl;
            output << "b $L3" << std::endl;
            output << "nop" << std::endl;
            output << "$L2:" << std::endl;
            output << "move $2, $0" << std::endl;
            output << "$L3:" << std::endl;
        }
    };
#endif