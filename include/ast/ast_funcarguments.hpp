#ifndef ast_funcarguments_hpp
#define ast_funcarguments_hpp

#include <string>
#include <iostream>
#include <ast/ast_node.hpp>
#include <vector>

class FunctionArguments
    : public Node
{
    protected:
        NodePtr declarator;
        LPtr parameter;
    public:
        FunctionArguments(NodePtr _Declarator, LPtr _Parameter)
            :  declarator(_Declarator), parameter(_Parameter) {}
        virtual ~FunctionArguments(){
            delete parameter;
        }
        virtual NodePtr getDeclarator() const{
            return declarator;
        }
        virtual LPtr getParameter() const{
            return parameter;
        }
        virtual std::string getIdentifier() const {
            return getDeclarator()->getIdentifier();
        }
        virtual int getSize() const{
            return getParameter()->size();
        }

        virtual void codegen(std::ostream &output, std::string destreg, Context &context) const{
            //getDeclarator()->getIdentifier();
            
            int n = getParameter()->size();
            for (int i=0; i<n; i++){
                //output << "we are in the arguments loop" << std::endl;
                if(getParameter()->at(i) != NULL){
                    std::string name = getParameter()->at(i)->getIdentifier();
                    if(context.LocalEmpty()==false){
                        int map = context.LocalgetMapSize()*4+8;
                        context.LocalinsertVariable(name, map);
                    }
                    //context.LocalinsertVariable(name, map);
                    //output << "sw " << input << ", " << offset << "($fp)" << std::endl;
                }
            }
        }
};

#endif