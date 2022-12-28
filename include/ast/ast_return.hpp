#ifndef ast_return_hpp
#define ast_return_hpp
#include "ast/ast_node.hpp"
#include <iostream>

class Return
    : public Node
{
    private:
        NodePtr value;
    public:
        Return(NodePtr _value)
            : value(_value) {}

        virtual ~Return(){
            delete value;
        }
        virtual NodePtr getValue() const{
            return value;
        }
        virtual void codegen(std::ostream &output, std::string destreg, Context &context) const{
            getValue()->codegen(output, "$2", context);
        }
    };
#endif
