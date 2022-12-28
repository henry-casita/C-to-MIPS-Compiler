#ifndef ast_list_hpp
#define ast_list_hpp

#include "ast/ast_node.hpp"
#include <vector>

typedef std::vector <NodePtr> List;
typedef List *LPtr;

inline LPtr form_list(NodePtr node)
{
    LPtr newlist = new List();
    newlist->push_back(node);
    return newlist;
}
inline LPtr add_to_list(NodePtr node, LPtr old_list)
{
    old_list->push_back(node);
    return old_list;
}

#endif