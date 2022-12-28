/*#ifndef ast_functionlist_hpp
#define ast_functionlist_hpp

#include <string>
#include <iostream>
#include <ast/ast_node.hpp>

class FunctionList
    : public Node
{

public:

std::map<std::string,NodePtr> FList;

void AddFunction(std::string id, NodePtr body){
        std::map<std::string,NodePtr>::iterator it = FunctionList.begin();
        FunctionList.insert(it, std::pair<std::string,NodePtr>(id, body));

    }
    NodePtr GetFunctionBody(std::string id) const{
        auto it = FunctionList.find(id);
        NodePtr compound = it->second;
        return compound;
    }

virtual void codegen(std::ostream &output, std::string destreg, Context &context) const {}

};
#endif*/