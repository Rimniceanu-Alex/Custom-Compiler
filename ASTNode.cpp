#include "ASTNode.h"

ASTNode::ASTNode(string &op, ASTNode *right_child, ASTNode *left_child) : value(Value()), root(op), right(right_child), left(left_child)
{
    if ((left_child && right_child) && (left_child->type == right_child->type))
    {
        type = left_child->type;
    }
    else if (left_child && right_child)
    {
        type = "missmatch";
    }
    else
    {
        type = "unkown";
    }
};

ASTNode::~ASTNode()
{
    delete left;
    delete right;
}