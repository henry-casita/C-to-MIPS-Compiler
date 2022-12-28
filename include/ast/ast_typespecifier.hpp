#ifndef ast_typespecifier_hpp
#define ast_typespecifier_hpp

#include <string>
#include <iostream>
#include "ast/ast_node.hpp"

class Typespec
    : public Node
{
    private:
        std::string type;
    public:
        Typespec(std::string _type)
            : type(_type) {}
        
        virtual ~Typespec(){}

        std::string getType() const{
            return type;
        }

};
#endif