#ifndef ast_directdeclarator_hpp
#define ast_directdeclarator_hpp

#include <string>
#include <iostream>
#include <ast/ast_node.hpp>

class DirectDeclarator
    : public Node
{
    private:
        std::string declarator;
    public:
        DirectDeclarator(std::string _Declarator)
            : declarator(_Declarator) {}
        virtual ~DirectDeclarator() {}
        std::string getDirectDeclarator() const {
            return declarator;
        }



};
#endif