#ifndef ast_ifstatement_hpp
#define ast_ifstatement_hpp

#include <string>
#include <iostream>
#include <ast/ast_node.hpp>

class IfStatement
    : public Node
{
    protected:
        NodePtr condition;
        NodePtr ifbody;
        NodePtr elsebody;
    public: 
        IfStatement(NodePtr _condition, NodePtr _ifbody, NodePtr _elsebody)
            : condition(_condition), ifbody(_ifbody), elsebody(_elsebody) {}

           virtual ~IfStatement(){
               delete condition;
               delete ifbody;
               delete elsebody;
           } 
    NodePtr getCondition() const{
        return condition;
    }
    NodePtr getIf() const{
        return ifbody;
    }
    NodePtr getElse() const{
        return elsebody;
    }
    /*virtual void codegen(std::ostream &output, std::string destreg, Context &context) const{
        std::cout << "error" << std::endl;
    }*/

    void codegen(std::ostream &output, std::string destreg, Context &context) const override{

        getCondition()->codegen(output, "$2", context);
        output << "beq " << destreg << ",$0, " << "_ELSE" << std::endl;
        output << "nop" << std::endl;
        if(getIf() != NULL){
            getIf()->codegen(output, "$3", context);
            output << "move $sp, $fp" << std::endl;
            output << "lw $fp, 56($sp)" << std::endl;
            output << "addiu $sp, $sp, 64" << std::endl;
            output << "j $31" << std::endl;
            output << "nop" << std::endl;
            output << "b " << "_ENDIF" << std::endl;
            output << "nop" << std::endl;

        }
        if(getElse() != NULL){
            output << "_ELSE:" << std::endl;
            getElse()->codegen(output, "$3", context);
            output << "b " << "ENDELSE" << std::endl;
            output << "nop" << std::endl;
        }
        if(getElse() != NULL){
            output << "ENDELSE:" << std::endl;
        }
        else if(getElse() == NULL){
            output << "_ELSE:" << std::endl;
        }
        output << "_ENDIF:" << std::endl;
    }
};
#endif 