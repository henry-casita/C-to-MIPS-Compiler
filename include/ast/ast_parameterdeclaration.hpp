#ifndef ast_parameterdeclaration_hpp
#define ast_parameterdeclaration_hpp

#include <string>
#include <iostream>
#include "ast/ast_node.hpp"

class ParameterDeclaration
    : public Node
{
    private:
        NodePtr declarator;
        NodePtr declaration_specifier;
    public:
        ParameterDeclaration(NodePtr _DeclarationSpecifier, NodePtr _Declarator)
            : declaration_specifier(_DeclarationSpecifier), declarator(_Declarator) {}
        virtual ~ParameterDeclaration(){
            delete declarator;
            delete declaration_specifier;
        }
        NodePtr getDeclarator() const{
            return declarator;
        }
        NodePtr getDeclarationSp() const{
            return declaration_specifier;
        }
        virtual std::string getIdentifier() const{
            return getDeclarator()->getIdentifier();
        }
        virtual void codegen(std::ostream &output, std::string destreg, Context &context) const{
            //getDeclarator()->codegen(output, "$2", context);
        }

};
#endif