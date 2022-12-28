#ifndef ast_translation_hpp
#define ast_translation_hpp

#include <string>
#include <iostream>
#include <ast/ast_node.hpp>
#include <vector>
class Translation
    : public Node
    
{
    private :
        LPtr elements;
    public:
        Translation(LPtr _Elements)
            : elements(_Elements) {}
        
        virtual ~Translation() {}

        LPtr getElements() const{
            return elements;
        }
        virtual void codegen(std::ostream &output, std::string destreg, Context &context)  const{
            int n =  elements->size();
           for (int i=0; i<n; i++){
                elements->at(i)->codegen(output, "$2", context);
            }
        }

};
#endif