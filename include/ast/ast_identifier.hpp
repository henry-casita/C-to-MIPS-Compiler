#ifndef ast_identifier_hpp
#define ast_identifier_hpp

#include <string>
#include <iostream>
#include <ast/ast_node.hpp>

class Identifier
    : public Node
{
private:
    std::string id;
public:
    Identifier(std::string* _id)    
        : id(*(_id)) {}
        
    virtual ~Identifier() {};

    virtual std::string getIdentifier() const{
        return id;
        //return "hello";
    }
    bool isNumber() const{
        return 0;
    }

    virtual void codegen(std::ostream &output, std::string destreg, Context &context) const {
        if(context.LocalEmpty()){
            if (!context.Globalexists(id)){
            std::cerr << "variable has not been declared" << std::endl;
            }

            else{
            int offset = context.GlobalgetOffset(id);
            output << "lw " << destreg << ", " << offset << "($fp)" << std::endl;
            output << "nop" << std::endl;
            }
        }
        else{
            if (!context.Localexists(getIdentifier())){
            std::cerr << "variable has not been declared" << std::endl;
            }

            else{
            int offset = context.LocalgetOffset(getIdentifier());
            output << "lw " << destreg << ", " << offset << "($fp)" << std::endl;
            output << "nop" << std::endl;
            
            }
        }
    }

};

#endif