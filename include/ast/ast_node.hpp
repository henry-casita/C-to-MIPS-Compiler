#ifndef ast_node_hpp
#define ast_node_hpp

#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <memory>
#include "ast.hpp"
class Node;
typedef const Node *NodePtr;

class Context;

class Node
{

public: 
    Node() {}
    virtual ~Node() {} // destructor


    //! Tell and expression to print itself to the given stream
    //virtual void print(std::ostream &dst) const {};

    //! Evaluate the tree using the given mapping of variables to numbers
    virtual void codegen(std::ostream &output, std::string destreg, Context &Context) const{}
    virtual std::string getIdentifier() const {}
    virtual int getNumber() const {}
    virtual int getSize() const {}
    virtual bool isNumber() const {}
    virtual std::string no_arg() const
    { throw std::runtime_error("Not implemented."); }
};
#endif