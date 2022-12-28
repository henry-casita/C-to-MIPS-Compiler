#ifndef ast_number_hpp
#define ast_number_hpp

#include <string>
#include <iostream>
#include <ast/ast_node.hpp>

class Number
    : public Node
{
    private:
        std::string num;
    public:
    Number(std::string* _num)
    {
        num = *(_num);
    }
    ~Number() {}
    int getNumber() const {
        return stoi(num);
    }
    bool isNumber() const {
        return 1;
    }
    virtual void codegen(std::ostream &output, std::string destreg, Context &context) const{
        int variable = getNumber();
        output << "li "  << destreg << ", " << variable << std::endl;
    }
};
#endif