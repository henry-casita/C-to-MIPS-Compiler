#ifndef ast_assignmentequal_hpp
#define ast_assignmentequal_hpp

#include <string>
#include <iostream>
#include <ast/ast_assignmentexpression.hpp>

class AssignmentEqual
    : public AssignmentExpression
{
    using AssignmentExpression::AssignmentExpression;

    virtual void codegen(std::ostream &output, std::string destreg, Context &context) const{
        std::string name = getReg()->getIdentifier();
        getVariable()->codegen(output, "$2", context);
        if (context.Localexists(name)){
                //std::cout << "thinks the variable exists" << std::endl;
                int offset = context.LocalgetOffset(name);
                output << "sw " << destreg << "," << offset << "($fp)" << std::endl;
            }
            else{
                //std::cout << "variable does not exist" << std::endl;
                int offset = context.LocalgetMapSize()*4+8;
                context.LocalinsertVariable(name, offset);
                output << "sw $2, " << offset << "($fp)" << std::endl;
            }


    }



};

#endif