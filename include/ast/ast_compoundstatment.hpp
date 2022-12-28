#ifndef ast_compundstatement_hpp
#define ast_compoundstatement_hpp

#include <string>
#include <iostream>
#include <vector>
#include <ast/ast_node.hpp>

class CompoundStatement
    : public Node
    
{
    protected:
        LPtr Statement;
        LPtr Declaration_List;
    public:
        CompoundStatement(LPtr _Statement, LPtr _Declaration_List)
            : Statement(_Statement), Declaration_List(_Declaration_List) {}
        
        virtual ~CompoundStatement() {
            delete Statement;
            delete Declaration_List;
        }
        LPtr getStatement() const{
            return Statement;
        }
        LPtr getDeclarationList() const {
            return Declaration_List;
        }

        virtual void codegen(std::ostream &output, std::string destreg, Context &context) const {
            //std::cout << "list address in compoundstatement" << getDeclarationList() << std::endl;
            if (getDeclarationList()!=NULL){
                int y = getDeclarationList()->size();
                //std::cout << y << std::endl;
                for (int i = 0; i<y; i++){
                    //output << "in compound declaration loop" << std::endl;
                    getDeclarationList()->at(i)->codegen(output, "$2", context);

                }
            }
            if (getStatement()!=NULL){
                int n = getStatement()->size();
                for (int i = 0; i<n; i++){

                    getStatement()->at(i)->codegen(output, "$2", context);
                    //output << "in compound statement loop" << std::endl;
                    //output << getStatement() << std::endl;
                }
            
            }
        }


};


#endif