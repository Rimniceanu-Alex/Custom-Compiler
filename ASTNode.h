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
    ASTNode(const string &op, ASTNode *left_child, ASTNode *right_child) : value(Value()), root(op),left(left_child), right(right_child)
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
    const char* get_type_for_main(){
        return type.c_str();
    }
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

        // if((std::isnan(left->evaluatei()))||(std::isnan(right->evaluatei()))){
        //     return numeric_limits<int>::quiet_NaN();
        // }
        if ((left == nullptr) || (right == nullptr))
        {
            if (type == "int")
            {
                return value.get_int();
            }
            else if (type == "float")
            {
                cout << "This Method is for INTEGERS" << endl;
                return numeric_limits<int>::min();
            }
            else
            {
                cout << "Unkown Node Type" << endl;
                return numeric_limits<int>::min();
            }
        }
        if (left->get_type() == right->get_type())
        {
            if(root=="<"){
                return left->evaluatei()<right->evaluatei();
            }
            else if(root==">"){
                return left->evaluatei()>right->evaluatei();
            }
            else if(root=="=="){
                return left->evaluatei()==right->evaluatei();
            }
            else if(root=="!="){
                return left->evaluatei()!=right->evaluatei();
            }
            else if(root=="<="){
                return ((left->evaluatei()<right->evaluatei())||(left->evaluatei()==right->evaluatei()));
            }
            else if(root==">="){
                return ((left->evaluatei()>right->evaluatei())||(left->evaluatei()==right->evaluatei()));
            }
            else if (root=="&&"){
                return left->evaluatei()&&right->evaluatei();
            }
            else if (root=="||"){
                return left->evaluatei()||right->evaluatei();
            }
            else if (root == "+")
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
                return numeric_limits<int>::min();
            }
        }
        else
        {
            cout << "Type Missmatch" << endl;
            return numeric_limits<int>::min();
        }
        return 0;
    };

    float evaluatef()
    {
        // if((std::isnan(left->evaluatef()))||(std::isnan(right->evaluatef()))){
        //     return numeric_limits<float>::quiet_NaN();
        // }
        if ((left == nullptr) || (right == nullptr))
        {
            if (type == "float")
            {
                return value.get_float();
            }
            else if (type == "int")
            {
                cout << "This Method is for FLOATS" << endl;
                return numeric_limits<float>::quiet_NaN();
            }
            else
            {
                cout << "Unkown Node Type" << endl;
                return numeric_limits<float>::quiet_NaN();
            }
        }
        if (left->get_type() == right->get_type())
        {   
            if(root=="<"){
                return left->evaluatef()<right->evaluatef();
            }
            else if(root==">"){
                return left->evaluatef()>right->evaluatef();
            }
            else if(root=="=="){
                return left->evaluatef()==right->evaluatef();
            }
            else if(root=="!="){
                return left->evaluatef()!=right->evaluatef();
            }
            else if(root=="<="){
                return ((left->evaluatef()<right->evaluatef())||(left->evaluatef()==right->evaluatef()));
            }
            else if(root==">="){
                return ((left->evaluatef()>right->evaluatef())||(left->evaluatef()==right->evaluatef()));
            }
            else if (root=="&&"){
                return left->evaluatef()&&right->evaluatef();
            }
            else if (root=="||"){
                return left->evaluatef()||right->evaluatef();
            }
            else if (root == "+")
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
                return numeric_limits<float>::quiet_NaN();
            }
        }
        else
        {
            cout << "Type Missmatch" << endl;
            return numeric_limits<float>::quiet_NaN();
        }
    };
    ~ASTNode()
    {
        delete left;
        delete right;
    };
};

//TO DO :: Modifica gramatica cat sa poti bag && si || in AST