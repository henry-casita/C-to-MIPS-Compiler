#ifndef ast_funcdefinition_hpp
#define ast_funcdefinition_hpp

#include <string>
#include <iostream>
#include <ast/ast_node.hpp>
#include <map>

class FunctionDefinition
    : public Node
{
    private:
        NodePtr Specifier;
        NodePtr Declarator;
        NodePtr CompoundStatement;
    public:
        FunctionDefinition(NodePtr _Specifier,NodePtr _Declarator,NodePtr _CompoundStatement)
            : Specifier(_Specifier), Declarator(_Declarator), CompoundStatement(_CompoundStatement){}
        
        virtual ~FunctionDefinition()
        {
            delete Specifier;
            delete Declarator;
            delete CompoundStatement;
        }

        NodePtr getSpecifier() const{
            return Specifier;
        }

        NodePtr getDeclarator() const{
            return Declarator;
        }

       NodePtr getCompoundStatement() const{
            return CompoundStatement;
        }

        virtual int getSize() const {
            return getDeclarator()->getSize();
        }

        virtual void codegen(std::ostream &output, std::string destreg, Context &context) const {
            
            std::string function_name = getDeclarator()->getIdentifier();
            context.AddFunction(function_name, CompoundStatement);
            context.Function_call();

            //int argument_number = getDeclarator()->getSize();
            getDeclarator()->codegen(output, "$2", context);
            output << ".globl "  << function_name << std::endl;
            output << function_name << " : " << std::endl;
            output << "addiu $sp, $sp, -64" << std::endl;
            output << "sw $fp, 56($sp)" << std::endl;
            output << "sw $31, 60($sp)" << std::endl;
            output << "move $fp, $sp" << std::endl;
            std::map<std::string,int>::iterator it;
            int i = 0;
            for (it = context.LocalContext.top().begin(); it != context.LocalContext.top().end(); it++){
                int offset = it->second;
                int offset2 = i+4;
                std::string str = std::to_string(offset2);
                std::string input = "$" + str;
                output << "sw " << input << ", " << offset << "($fp)" << std::endl;
                i++;

            }
            if(CompoundStatement != NULL){
                getCompoundStatement()->codegen(output, "$2", context);
            }
            context.deallocate_context();
            output << "move $sp, $fp" << std::endl;
            output << "lw $fp, 56($sp)" << std::endl;
            output << "lw $31, 60($sp)" << std::endl;
            output << "addiu $sp, $sp, 64 " << std::endl;
            output << "jr $31" << std::endl;
            output << "nop" << std::endl; 
        }


};
#endif