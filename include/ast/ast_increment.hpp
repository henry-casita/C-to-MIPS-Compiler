#ifndef ast_increment_hpp
#define ast_increment_hpp

#include <string>
#include <iostream>
#include <ast/ast_node.hpp>

class Increment
    : public Node
{
    protected:
        NodePtr argument;
    public:
        Increment(NodePtr _Argument)
            : argument(_Argument) {}
        virtual ~Increment(){
            delete argument;
        }
        virtual NodePtr getArgument() const {
            return argument;
        }
        virtual void codegen(std::ostream &output, std::string destreg, Context &context) const{
            getArgument()->codegen(output, "$2", context);
            output << "addiu " << destreg << ", $2, 1" << std::endl;
            std::string name = getArgument()->getIdentifier();
            int offset = context.LocalgetOffset(name);
            output << "sw " << destreg << ", " << offset << "($fp)" << std::endl;
        }
};
#endif