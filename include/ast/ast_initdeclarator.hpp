#ifndef ast_initdeclarator_hpp
#define ast_initdeclarator_hpp

#include <string>
#include <iostream>
#include "ast/ast_node.hpp"

class InitDeclarator
    : public Node
{
    private:
        NodePtr declarator;
        NodePtr initializer;
    public:
        InitDeclarator(NodePtr _Declarator, NodePtr _Initializer)
            : declarator(_Declarator), initializer(_Initializer) {}
        virtual ~InitDeclarator(){
            delete declarator;
            delete initializer;
        }
        NodePtr getDeclarator() const{
            return declarator;
        }
        NodePtr getInitializer() const{
            return initializer;
        }
        virtual void codegen(std::ostream &output, std::string destreg, Context &context) const {
            std::string variable = getDeclarator()->getIdentifier();
            //std::cout << "we are in init declarator" << std::endl;
            getInitializer()->codegen(output, "$2", context);
            if (context.Localexists(variable)){
                //std::cout << "thinks the variable exists" << std::endl;
                int offset = context.LocalgetOffset(variable);
                output << "sw $2, " << offset << "($fp)" << std::endl;
            }
            else{
                //std::cout << "variable does not exist" << std::endl;
                int offset = context.LocalgetMapSize()*4+8;
                context.LocalinsertVariable(variable, offset);
                output << "sw $2, " << offset << "($fp)" << std::endl;
            }

        }
};
#endif