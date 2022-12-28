#ifndef ast_declarator_hpp
#define ast_declarator_hpp

#include <string>
#include <iostream>
#include <ast/ast_node.hpp>

class Declarator
    : public Node
{
    private:

        NodePtr arguments;
    public:

        Declarator(NodePtr _name, NodePtr _arguments)
            : arguments(_arguments) {}

        virtual ~Declarator() {
            delete arguments;
        }
        
        NodePtr getArguments() const{
            return arguments;
        }
        virtual void codegen(std::ostream &output, std::string destreg, Context &context) const{
            getArguments()->codegen(output, "$2", context);

        }

};
#endif
