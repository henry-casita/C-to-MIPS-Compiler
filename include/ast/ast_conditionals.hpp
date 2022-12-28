#ifndef ast_conditionals_hpp
#define ast_conditionals_hpp

#include <string>
#include <iostream>
#include <ast/ast_node.hpp>

class Conditional
    : public Node
{
    protected:
        NodePtr condition;
        NodePtr trueexp;
        NodePtr falseexp;
    public :
        Conditional(NodePtr _Conditional, NodePtr _True, NodePtr _False)
            : condition(_Conditional), trueexp(_True), falseexp(_False) {}
        virtual ~Conditional(){
            delete condition;
            delete trueexp;
            delete falseexp;
        }
        virtual NodePtr getConditional() const{
            return condition;
        }
        virtual NodePtr getTrue() const{
            return trueexp;
        }
        virtual NodePtr getFalse() const {
            return falseexp;
        }
        virtual void codegen(std::ostream &output, std::string destreg, Context &context) const{
            getConditional()->codegen(output, "$2", context);
            output << "beq $2, $0, $L1" << std::endl;
            output << "nop" << std::endl;
            getTrue()->codegen(output, "2", context);
            output << "b $L2" << std::endl;
            output << "nop" << std::endl;
            output << "$L1:" << std::endl;
            getFalse()->codegen(output, "$2", context);
            output << "$L2:" << std::endl;
        }


};
#endif