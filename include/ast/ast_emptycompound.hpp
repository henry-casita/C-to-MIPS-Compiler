#ifndef ast_emptycompound_hpp
#define ast_emptycompound_hpp

#include <string>
#include <iostream>
#include <vector>
#include <ast/ast_node.hpp>

class EmptyCompound
    : public Node
{
    public: 
        virtual std::string no_arg() const{
            return "no argument compound";
        }
        
};

#endif