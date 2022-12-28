#ifndef ast_declaration_hpp
#define ast_declaration_hpp

#include <string>
#include <iostream>
#include <ast/ast_node.hpp>

class Declaration
    : public Node 
{
    private:
        NodePtr expr;
    public:
        Declaration(NodePtr _Expr)
            : expr(_Expr) {}
        
        virtual ~Declaration(){
            delete expr;
        }
        NodePtr getExpr() const{
            return expr;
        }

        virtual void codegen(std::ostream &output, std::string destreg, Context &context) const{
            getExpr()->codegen(output, "$2", context);
            //output << "in declaration" << std::endl;
        }
};
#endif
