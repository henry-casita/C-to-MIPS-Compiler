#ifndef local_context_hpp

#define local_context_hpp



#include <string>

#include <iostream>

#include <map>

#include <vector>
#include <stack>
#include <ast/ast_node.hpp>



// create a map with the variable name (identifier) as the key and the offset with regards to the stack pointer as the key value 
//#include <memory>

class Context

{
public:
    std::stack<std::map<std::string,int>> LocalContext;
    std::map<std::string,int> GlobalContext;
    std::map<std::string,NodePtr> FunctionList;



    void AddFunction(std::string id, NodePtr body){
        std::map<std::string,NodePtr>::iterator it = FunctionList.begin();
        FunctionList.insert(it, std::pair<std::string,NodePtr>(id, body));

    }
    NodePtr GetFunctionBody(std::string id) const{
        auto it = FunctionList.find(id);
        NodePtr compound = it->second;
        return compound;
    }

    bool Localexists( std::string a){
        std::map<std::string,int>::iterator it;
        it = LocalContext.top().find(a);
        return it!=LocalContext.top().end();
    }   
    int LocalgetOffset(std::string a){
        return LocalContext.top()[a];
    }
    void LocalinsertVariable(std::string a, int  b){
        std::map<std::string,int>::iterator it = LocalContext.top().begin();
        LocalContext.top().insert(it, std::pair<std::string, int>(a, b));
    }
    bool LocalEmpty(){
        return LocalContext.empty();
    }
    int LocalStackSize(){
        return LocalContext.size();
    }
    int LocalgetMapSize(){
        return LocalContext.top().size();
    }
    void Function_call(){
        std::map<std::string,int> a;
        LocalContext.push(a);
    }
    void deallocate_context(){
        LocalContext.pop();
    }
    bool Globalexists(std::string a){
        std::map<std::string,int>::iterator it;
        it = GlobalContext.find(a);
        return it != GlobalContext.end();
    }
    int GlobalgetOffset(std::string a){
        return GlobalContext[a];
    }
    void GlobalinsertVariable(std::string a, int  b){
        std::map<std::string,int>::iterator it = GlobalContext.begin();
        GlobalContext.insert(it, std::pair<std::string, int>(a, b));
    }
    int GlobalmapSize(){
        return GlobalContext.size();
    }

};



#endif