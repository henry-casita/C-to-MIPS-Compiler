#ifndef ast_while_hpp
#define ast_while_hpp

#include <string>
#include <iostream>
#include <ast/ast_node.hpp>

class While
    : public Node
{
    protected:
        NodePtr condition;
        NodePtr body;
    public: 
        While(NodePtr _condition, NodePtr _body)
            : condition(_condition), body(_body) {}

           virtual ~While(){
               delete condition;
               delete body;
           } 
    NodePtr getCondition() const{
        return condition;
    }
    NodePtr getBody() const{
        return body;
    }
    /*virtual void codegen(std::ostream &output, std::string destreg, Context &context) const{
        std::cout << "error" << std::endl;
    }*/

    void codegen(std::ostream &output, std::string destreg, Context &context) const override{
        
        output << "_START_0:" << std::endl;
        getCondition()->codegen(output, "$2", context);
        output << "beq " << destreg << ", $0, " << "_END_1" << std::endl;
        std::cout << "nop" << std::endl;
        getBody()->codegen(output, "$3", context);
        std::cout << "nop" << std::endl;
        output << "b " << "_START_0" << std::endl;
        output << "_END_1:" << std::endl;
    } 

    /*int OffsetLeft(std::ostream &output, int destreg, Context &context){
        GetLeft->codegen(output, destreg, context);
        how to get address?
        return address;
    }*/

    /*int OffsetRight(std::ostream &output, int destreg, Context &context){
        GetRight->codegen(output, destreg, context);
        how to get address?
        return address;
    }*/
};
#endif