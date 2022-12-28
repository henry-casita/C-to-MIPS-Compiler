#ifndef ast_assignmentexpression_hpp
#define ast_assignmentexpression_hpp

#include <string>
#include <iostream>
#include <ast/ast_node.hpp>

class AssignmentExpression
    : public Node
{
    private:
        NodePtr reg;
        NodePtr variable;
    public:
        AssignmentExpression(NodePtr _reg, NodePtr _variable)
            : reg(_reg), variable(_variable) {}
        
        virtual ~AssignmentExpression(){
            delete reg;
            delete variable;
        }
        NodePtr getReg() const{
            return reg;
        }
        NodePtr getVariable() const{
            return variable;
        }
        virtual void codegen(std::ostream &output, std::string destreg, Context &context) const{}

};
#endif
