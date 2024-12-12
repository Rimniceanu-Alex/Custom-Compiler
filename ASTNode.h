#include "SymTable.h"

class ASTNode{
    Value value;
    string type;
    string root;
    ASTNode* left;
    ASTNode* right;
public:
    ASTNode(const Value& val , const string& node_type): value(val) , type(node_type) , root("") , left(nullptr) , right(nullptr)  {};
    ASTNode(string &op, ASTNode *right_child, ASTNode *left_child);
    ~ASTNode();
};