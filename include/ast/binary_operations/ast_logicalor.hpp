#ifndef ast_logicalor_hpp
#define ast_logicalor_hpp

#include <string>
#include <iostream>
#include <ast/ast_binaryop.hpp>

class LogicalOr
    : public BinaryOp
    {
        using BinaryOp::BinaryOp;
        void codegen(std::ostream &output, std::string destreg, Context &context) const {
            getLeft()->codegen(output, "$2", context);
            output << "bne " << destreg << ", $0, $L2" << std::endl;
            output << "nop" << std::endl;
            getRight()->codegen(output, "$2", context);
            //output << "li $3, 1" << std::endl;
            output << "beq " << destreg << ", $0, $L3" << std::endl;
            output << "nop" << std::endl;
            output << "$L2:" << std::endl;
            output << "li " << destreg << ", 1" << std::endl;
            output << "b $L4" << std::endl;
            output << "nop" << std::endl;
            output << "$L3:" << std::endl;
            output << "move $2, $0" << std::endl;

            output << "$L4:" << std::endl;
        }
    };
#endif