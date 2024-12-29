#include "SymTable.h"

class ASTNode
{
    Value value;
    string type;
    string root;
    ASTNode *left;
    ASTNode *right;
    SymTable *table;
    int &errorCount;
    int yylineno;

public:
    ASTNode(const string &sequence, ASTNode *left_child, ASTNode *right_child, int &errorCount , int yylineno , SymTable *table) : value(Value()), root(sequence), left(left_child), right(right_child), errorCount(errorCount), table(table), yylineno(yylineno){};//Pt asignare statement_list
    ASTNode(const string &sequence , ASTNode *left_child ,int &errorCount , int yylineno , SymTable *table ):root(sequence) , left(left_child) , right(nullptr) , value(Value()) , errorCount(errorCount) , yylineno(yylineno) , table(table){};//Pta asignare statement
    ASTNode(const string &nume, const string &assign, ASTNode *left_child, SymTable *table, int &errorCount, int yylineno) : value(Value()), type(nume), root(assign), left(left_child), right(nullptr), table(table), errorCount(errorCount), yylineno(yylineno) {};//Constructor pentru Asignare
    ASTNode(const Value &val, const string &node_type, int &errorCount) : value(val), type(node_type), root(""), left(nullptr), right(nullptr), errorCount(errorCount), table(nullptr) {};
    ASTNode(const string &op, ASTNode *left_child, ASTNode *right_child, int &errorCount) : value(Value()), root(op), left(left_child), right(right_child), errorCount(errorCount), table(nullptr)
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
    const char *get_type_for_main()
    {
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
    void run()
    { // Type = numele variabilei
        // cout<<root<<endl<<type<<endl;
        if (root=="sequence"){
            left->run();
            right->run();
        }
        else if (root=="statement"){
            left->run();
        }
        else if (root == "<-")
        {
            SymTable *domeniul_caruia_ii_apartine_varabila;
            domeniul_caruia_ii_apartine_varabila = table->check_existance_for_use(type.c_str(), errorCount, yylineno);
            if (domeniul_caruia_ii_apartine_varabila != nullptr)
            {
                if (domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type(type.c_str()) == "bool")
                {
                    class Value val(left->evaluateb());
                    domeniul_caruia_ii_apartine_varabila->set_value(type.c_str(), val);
                }
                else if (domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type(type.c_str()) == "int")
                {
                    if (numeric_limits<int>::min() == (left->evaluatei()))
                    {
                        errorCount++;
                        cout << "error: " << "Arithmetic expression is inccorect at line: " << yylineno << endl;
                    }
                    else
                    {
                        class Value val(left->evaluatei());
                        domeniul_caruia_ii_apartine_varabila->set_value(type.c_str(), val);
                    }
                }
                else if (domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type(type.c_str()) == "float")
                {
                    if (std::isnan(left->evaluatef()))
                    {
                        errorCount++;
                        cout << "error: " << "Arithmetic expression is inccorect at line: " << yylineno << endl;
                    }
                    else
                    {
                        class Value val(left->evaluatef());
                        domeniul_caruia_ii_apartine_varabila->set_value(type.c_str(), val);
                    }
                }
                else
                {
                    errorCount++;
                    cout << "error: " << "Can only assing a int or a float to an int or a float at line: " << yylineno << endl;
                }
            }
        }
    }
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
                errorCount++;
                cout << "This Method is for INTEGERS" << endl;
                return numeric_limits<int>::min();
            }
            else
            {
                errorCount++;
                cout << "Unkown Node Type" << endl;
                return numeric_limits<int>::min();
            }
        }
        if (left->get_type() == right->get_type())
        {
            if (root == "<")
            {
                return left->evaluatei() < right->evaluatei();
            }
            else if (root == ">")
            {
                return left->evaluatei() > right->evaluatei();
            }
            else if (root == "==")
            {
                return left->evaluatei() == right->evaluatei();
            }
            else if (root == "!=")
            {
                return left->evaluatei() != right->evaluatei();
            }
            else if (root == "<=")
            {
                return ((left->evaluatei() < right->evaluatei()) || (left->evaluatei() == right->evaluatei()));
            }
            else if (root == ">=")
            {
                return ((left->evaluatei() > right->evaluatei()) || (left->evaluatei() == right->evaluatei()));
            }
            else if (root == "&&")
            {
                return left->evaluatei() && right->evaluatei();
            }
            else if (root == "||")
            {
                return left->evaluatei() || right->evaluatei();
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
                errorCount++;
                cout << "Unkown Sign" << endl;
                return numeric_limits<int>::min();
            }
        }
        else
        {
            errorCount++;
            cout << "Type Missmatch" << endl;
            return numeric_limits<int>::min();
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
                errorCount++;
                cout << "This Method is for FLOATS" << endl;
                return numeric_limits<float>::quiet_NaN();
            }
            else
            {
                errorCount++;
                cout << "Unkown Node Type" << endl;
                return numeric_limits<float>::quiet_NaN();
            }
        }
        if (left->get_type() == right->get_type())
        {
            if (root == "<")
            {
                return left->evaluatef() < right->evaluatef();
            }
            else if (root == ">")
            {
                return left->evaluatef() > right->evaluatef();
            }
            else if (root == "==")
            {
                return left->evaluatef() == right->evaluatef();
            }
            else if (root == "!=")
            {
                return left->evaluatef() != right->evaluatef();
            }
            else if (root == "<=")
            {
                return ((left->evaluatef() < right->evaluatef()) || (left->evaluatef() == right->evaluatef()));
            }
            else if (root == ">=")
            {
                return ((left->evaluatef() > right->evaluatef()) || (left->evaluatef() == right->evaluatef()));
            }
            else if (root == "&&")
            {
                return left->evaluatef() && right->evaluatef();
            }
            else if (root == "||")
            {
                return left->evaluatef() || right->evaluatef();
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
                errorCount++;
                cout << "Unkown Sign" << endl;
                return numeric_limits<float>::quiet_NaN();
            }
        }
        else
        {
            errorCount++;
            cout << "Type Missmatch" << endl;
            return numeric_limits<float>::quiet_NaN();
        }
    };
    bool evaluateb()
    {
        if ((left == nullptr) || (right == nullptr))
        {
            if (type == "bool")
            {
                return value.get_bool();
            }
            else{
                errorCount++;
                cout << "This Method is for BOOLS ONLY" << endl;
                return false;
            }
        }
        else{
            errorCount++;
                cout << "This Method is for BOOL ASSIGN ONLY" << endl;
                return false;
        }
    };
    ~ASTNode()
    {
        delete left;
        delete right;
    };
};