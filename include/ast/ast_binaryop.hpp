#ifndef ast_binaryop_hpp
#define ast_binaryop_hpp

#include <string>
#include <iostream>
#include <ast/ast_node.hpp>

class BinaryOp
    : public Node
{
    protected:
        NodePtr left;
        NodePtr right;
    public: 
        BinaryOp(NodePtr _left, NodePtr _right)
            : left(_left), right(_right) {}

           virtual ~BinaryOp(){
               delete left;
               delete right;
           } 
    NodePtr getLeft() const{
        return left;
    }
    NodePtr getRight() const{
        return right;
    }
    /*virtual void codegen(std::ostream &output, std::string destreg, Context &context) const{
        std::cout << "error" << std::endl;
    }*/

    void codegen(std::ostream &output, std::string destreg, Context &context) const {
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