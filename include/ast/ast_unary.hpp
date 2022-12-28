#ifndef ast_unary_hpp
#define ast_unary_hpp

#include <string>
#include <iostream>
#include <ast/ast_node.hpp>
class Unary
    : public Node
{
private:
    NodePtr expr;
protected:
    Unary(const NodePtr _expr)
        : expr(_expr)
    {}
public:
    virtual ~Unary()
    {
        delete expr;
    }

    virtual const char *getOpcode() const =0;

    NodePtr getExpr() const
    { return expr; }

    
};




#endif
