#ifndef ast_forfunction_hpp
#define ast_forfunction_hpp

#include <string>
#include <iostream>
#include <ast/ast_node.hpp>

class ForFunction
    : public Node
{
    protected:
        NodePtr initial;
        NodePtr condition;
        NodePtr increment;
        NodePtr statement;
    public: 
        ForFunction(NodePtr _Initial,NodePtr _Condition,NodePtr _Increment,NodePtr _Statement)
            : initial(_Initial), condition(_Condition), increment(_Increment), statement(_Statement) {}
        
        virtual ~ForFunction (){
            delete initial;
            delete condition;
            delete increment;
            delete statement;
        }
        virtual NodePtr getInitial() const{
            return initial;
        }
        virtual NodePtr getCondition() const{
            return condition;
        }
        virtual NodePtr getIncrement() const{
            return increment;
        }
        virtual NodePtr getStatement() const{
            return statement;
        }

        virtual void codegen(std::ostream &output, std::string destreg, Context &context) const{
            getInitial()->codegen(output, "$2", context);
            output << "b $L2" << std::endl;
            output << "nop" << std::endl;
            

            output << "$L3:" << std::endl;
            if (getIncrement()!= NULL){
                getIncrement()->codegen(output, "$2", context);
            }
            getStatement()->codegen(output, "$2", context);
            output << "$L2:" << std::endl;
            getCondition()->codegen(output, "$2", context);
            output << "bne " << destreg << ",$0 , $L3" << std::endl;
        }



};
#endif