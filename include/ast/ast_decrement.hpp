#ifndef ast_decrement_hpp
#define ast_decrement_hpp

#include <string>
#include <iostream>
#include <ast/ast_node.hpp>

class Decrement
    : public Node
{
    protected:
        NodePtr argument;
    public:
        Decrement(NodePtr _Argument)
            : argument(_Argument) {}
        virtual ~Decrement(){
            delete argument;
        }
        virtual NodePtr getArgument() const {
            return argument;
        }
        virtual void codegen(std::ostream &output, std::string destreg, Context &context) const{
            getArgument()->codegen(output, "$2", context);
            output << "li $3, 1" << std::endl;
            output << "subu " << destreg << ", $2, $3" << std::endl;
            std::string name = getArgument()->getIdentifier();
            int offset = context.LocalgetOffset(name);
            output << "sw " << destreg << ", " << offset << "($fp)" << std::endl;
        }
};
#endif