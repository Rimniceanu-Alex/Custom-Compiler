#include "SymTable.h"

class ASTNode
{
    Value value;
    string type;
    string root;
    ASTNode *left;
    ASTNode *right;

public:
    ASTNode(const Value &val, const string &node_type) : value(val), type(node_type), root(""), left(nullptr), right(nullptr) {};
    ASTNode(const string &op, ASTNode *right_child, ASTNode *left_child) : value(Value()), root(op), right(right_child), left(left_child)
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

    string get_type()
    {
        return type;
    };
    Value get_value()
    {
        return value;
    };
    //TO DO : la evaluari FA sa returneze un NAN si sa dea un mesaj de eroare , nu sa dea terminate la tot +
    //        modifica si restul metodelor/Yacc-u cat sa detecteze si Trateze un NAN(Not A Number)
    int evaluatei()
    {
        if ((left == nullptr) || (right == nullptr))
        {
            if (type == "int")
            {
                return value.get_int();
            }
            else if (type == "float")
            {
                cout << "This Method is for INTEGERS" << endl;
                exit(EXIT_FAILURE);
            }
            else
            {
                cout << "Unkown Node Type" << endl;
                exit(EXIT_FAILURE);
            }
        }
        if (left->get_type() == right->get_type())
        {
            if (root == "+")
            {
                return left->evaluatei() + right->evaluatei();
            }
            else if (root == "-")
            {
                return left->evaluatei() - right->evaluatei();
            }
            else if (root == "*")
            {
                return left->evaluatei() * right->evaluatei();
            }
            else if (root == "/")
            {
                return left->evaluatei() / right->evaluatei();
            }
            else
            {
                cout << "Unkown Sign" << endl;
                exit(EXIT_FAILURE);
            }
        }
        else
        {
            cout << "Type Missmatch" << endl;
            exit(EXIT_FAILURE);
        }
        return 0;
    };

    float evaluatef()
    {
        if ((left == nullptr) || (right == nullptr))
        {
            if (type == "float")
            {
                return value.get_float();
            }
            else if (type == "int")
            {
                cout << "This Method is for FLOATS" << endl;
                exit(EXIT_FAILURE);
            }
            else
            {
                cout << "Unkown Node Type" << endl;
                exit(EXIT_FAILURE);
            }
        }
        if (left->get_type() == right->get_type())
        {
            if (root == "+")
            {
                return left->evaluatef() + right->evaluatef();
            }
            else if (root == "-")
            {
                return left->evaluatef() - right->evaluatef();
            }
            else if (root == "*")
            {
                return left->evaluatef() * right->evaluatef();
            }
            else if (root == "/")
            {
                return left->evaluatef() / right->evaluatef();
            }
            else
            {
                cout << "Unkown Sign" << endl;
                exit(EXIT_FAILURE);
            }
        }
        else
        {
            cout << "Type Missmatch" << endl;
            exit(EXIT_FAILURE);
        }
        return 0;
    };
    ~ASTNode()
    {
        delete left;
        delete right;
    };
};