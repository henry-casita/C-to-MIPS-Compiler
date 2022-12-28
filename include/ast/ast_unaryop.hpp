#ifndef ast_unaryop_hpp
#define ast_unaryop_hpp

#include <string>
#include <iostream>
#include <ast/ast_node.hpp>

class UnaryOp
    : public Node
{
    protected:
        NodePtr expr;
    public: 
        UnaryOp(NodePtr _expr)
            : expr(_expr) {}

           virtual ~UnaryOp(){
               delete expr;
           } 
  
    NodePtr getExpr() const{
        return expr;
    }
    /*virtual void codegen(std::ostream &output, std::string destreg, Context &context) const{
        std::cout << "error" << std::endl;
    }*/

    void codegen(std::ostream &output, std::string destreg, Context &context) const override{
    }
};
#endif