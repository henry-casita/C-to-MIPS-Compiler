#ifndef ast_functioncall_hpp
#define ast_functioncall_hpp

#include <string>
#include <iostream>
#include <ast/ast_node.hpp>

class FunctionCall
    : public Node
{
    private:
        NodePtr Declarator;
        LPtr Args;

    public:
        FunctionCall(NodePtr _Declarator, LPtr _Args)
            : Declarator(_Declarator), Args(_Args) {}
        
        virtual ~FunctionCall()
        {
            delete Declarator;
            delete Args;
        }

        NodePtr getDeclarator() const{
            return Declarator;
        }

        LPtr getArgs() const{
            return Args;
        }


        virtual void codegen(std::ostream &output, std::string destreg, Context &context) const {
            
            std::string function_name = getDeclarator()->getIdentifier();
            /*output << "move $8, $2" << std::endl;
            output << "addiu $sp, $sp, -4" << std::endl;
            output << "sw $s0, 0($sp)" << std::endl;
            output << "move $s0, $8" << std::endl;*/
            output << "addiu $sp, $sp, -76" << std::endl;
            if(getArgs() != NULL){
                std::vector<NodePtr> arguments = *getArgs();
                int argsize = arguments.size();
                for(int i = 0; i<argsize; i++){
                    if(arguments[i]->isNumber()==true){
                        int number = arguments[i]->getNumber();
                        output << "li $" << 4+i << ", " << number << std::endl;
                    }
                    if(argsize>4){
                        for(int i = 4; i < argsize; i++){
                            output << "sw $" << 4+argsize-1<< ", "<<16+(i-4)*4<<"($sp)" << std::endl;
                        }
                    }
                }
            }

            /*output << "number " << number << std::endl;
            output << "li $4, 10" << std::endl;
            output << "li $5, 20" << std::endl;*/
            output << "jal " << function_name << std::endl;
            output << "nop" << std::endl;
            output << "addiu $sp, $sp, 76" << std::endl;
            /*output << "addiu $sp, $sp, 0" << std::endl;
            output << "move $8, $s0" << std::endl;
            output << "lw $s0, -4($fp)" << std::endl;
            output << "move $9, $2" << std::endl;*/
        }


};
#endif