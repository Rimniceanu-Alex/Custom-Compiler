#pragma once
#include "SymTable.h"

class ASTNode
{
    Value value;
    string type;
    string root;
    ASTNode *left;
    ASTNode *right;
    SymTable *table;
    IdInfo *right_side_var;
    int nr_apeluri_functie = 0;
    int *errorCount;
    int yylineno;

public:
    ASTNode() {};
    ASTNode(const string &func_call, ASTNode *left_child, IdInfo *var_functie, int *errorCount, int yylineno, SymTable *current) : root(func_call), left(left_child), right(nullptr), right_side_var(var_functie), value(Value()), table(current), errorCount(errorCount), yylineno(yylineno) {};
    ASTNode(const string &print, ASTNode *left_child, int *errorCount, int yylineno) : root(print), left(left_child), right(nullptr), value(Value()), table(nullptr), errorCount(errorCount), yylineno(yylineno) {};                                                  // For Print
    ASTNode(const string &sequence, ASTNode *left_child, ASTNode *right_child, int *errorCount, SymTable *table) : value(Value()), root(sequence), left(left_child), right(right_child), errorCount(errorCount), table(table) {};                                     // Pt asignare statement_list
    ASTNode(const string &sequence, ASTNode *left_child, int *errorCount, int yylineno, SymTable *table) : root(sequence), left(left_child), right(nullptr), value(Value()), errorCount(errorCount), yylineno(yylineno), table(table) {};                             // Pta asignare statement
    ASTNode(const string &nume, const string &assign, ASTNode *left_child, SymTable *table, int *errorCount, int yylineno) : value(Value()), type(nume), root(assign), left(left_child), right(nullptr), table(table), errorCount(errorCount), yylineno(yylineno) {}; // Constructor pentru Asignare
    ASTNode(const Value &val, const string &node_type, int *errorCount) : value(val), type(node_type), root(""), left(nullptr), right(nullptr), errorCount(errorCount), table(nullptr) {};                                                                            // Asignare Nr , Floar , Bool a fost apelat
    ASTNode(const string &control, ASTNode *left_child, ASTNode *right_child, int *errorCount, int yylineno) : root(control), left(left_child), right(right_child), errorCount(errorCount), yylineno(yylineno), table(nullptr) {}
    ASTNode(ASTNode *left_child, ASTNode *right_child, int *errorCount) : left(left_child), right(right_child), errorCount(errorCount) {}                                                          // Imbinare pentru if_else
    ASTNode(const string &op, ASTNode *left_child, ASTNode *right_child, int *errorCount) : value(Value()), root(op), left(left_child), right(right_child), errorCount(errorCount), table(nullptr) // Operatii
    {
        if ((left_child && right_child) && (left_child->get_type() == right_child->get_type()))
        {
            type = left_child->get_type();
        }
        else if (left_child && right_child)
        {
            
            cout<<"INN CIBSTRYYCTOOOR     "<<root<<endl;
            type = "missmatch";
            //cand am multe || sa u && se fuTE si trebuie sa vad ce fac cu evaluarea
        }
        else
        {
            type = "unkown";
        }
    };
    ASTNode(IdInfo *variabila, int *errorCount, int yylineno) : left(nullptr), right(nullptr), errorCount(errorCount), yylineno(yylineno), right_side_var(variabila)
    {
        type = right_side_var->type;
        value = right_side_var->value;
    };
    const char *get_type_for_main()
    {
        return get_type().c_str();
    }
    string get_type()
    {

        if (right_side_var == nullptr)
        {
            return type;
        }
        else
        {
            return right_side_var->type;
        }
    };
    Value get_value()
    {
        return value;
    };
    void run()
    {
        if (root == "sequence")
        {
            left->run();
            right->run();
        }
        else if (root == "final_sequence")
        {
            left->run();
        }
        else if (root == "<-")
        {
            SymTable *domeniul_caruia_ii_apartine_varabila;
            IdInfo *func_core = table->get_function_core();
            domeniul_caruia_ii_apartine_varabila = table->check_existance_for_use(get_type().c_str(), *errorCount, yylineno);
            if (domeniul_caruia_ii_apartine_varabila != nullptr)
            {
                class IdInfo test = *domeniul_caruia_ii_apartine_varabila->get_that_variable(type);
                if (domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type(type.c_str()) == "bool")
                {
                    if (left->root != "")
                    {
                        if (left->type == "int")
                        {
                            bool temp;
                            if (left->evaluatei() == true)
                            {
                                temp = true;
                            }
                            else
                            {
                                temp = false;
                            }
                            class Value val(temp);
                            domeniul_caruia_ii_apartine_varabila->set_value(type.c_str(), val);
                            func_core->value = val;
                        }
                        else if (left->type == "float")
                        {
                            bool temp;
                            if (left->evaluatef() == true)
                            {
                                temp = true;
                            }
                            else
                            {
                                temp = false;
                            }
                            class Value val(temp);
                            domeniul_caruia_ii_apartine_varabila->set_value(type.c_str(), val);
                            func_core->value = val;
                        }
                        else if (left->type == "bool")
                        {
                            bool temp;
                            if (left->evaluateb() == true)
                            {
                                temp = true;
                            }
                            else
                            {
                                temp = false;
                            }
                            class Value val(temp);
                            domeniul_caruia_ii_apartine_varabila->set_value(type.c_str(), val);
                            func_core->value = val;
                        }
                        else
                        {
                            errorCount++;
                            cout << "error: " << "What are you trying to assign to this bool?? at line: " << yylineno << endl;
                        }
                    }
                    else
                    {
                        class Value val(left->evaluateb());
                        domeniul_caruia_ii_apartine_varabila->set_value(type.c_str(), val);
                    }
                }
                else if (domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type(get_type().c_str()) == "int")
                {
                    int checker = left->evaluatei();
                    if (numeric_limits<int>::min() == checker)
                    {
                        errorCount++;
                        cout << "error: " << "Arithmetic expression is inccorect at line: " << yylineno << endl;
                    }
                    else
                    {
                        class Value val(checker);
                        domeniul_caruia_ii_apartine_varabila->set_value(get_type().c_str(), val);
                        func_core->value = val;
                    }
                }
                else if (domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type(type.c_str()) == "float")
                {
                    float checker = left->evaluatef();
                    if (std::isnan(checker))
                    {
                        errorCount++;
                        cout << "error: " << "Arithmetic expression is inccorect at line: " << yylineno << endl;
                    }
                    else
                    {
                        class Value val(checker);
                        domeniul_caruia_ii_apartine_varabila->set_value(type.c_str(), val);
                        func_core->value = val;
                    }
                }
                else if (domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type(get_type().c_str()) == "string")
                {
                    string checker = left->evaluates();
                    if ("" == checker)
                    {
                        errorCount++;
                        cout << "error: " << "String expression is inccorect at line: " << yylineno << endl;
                    }
                    else
                    {
                        class Value val(checker);
                        domeniul_caruia_ii_apartine_varabila->set_value(get_type().c_str(), val);
                        func_core->value = val;
                    }
                }
                else if (domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type(type.c_str()) == "bool")
                {
                    bool checker = left->evaluateb();
                    if (std::isnan(checker))
                    {
                        errorCount++;
                        cout << "error: " << "Arithmetic expression is inccorect at line: " << yylineno << endl;
                    }
                    else
                    {
                        class Value val(checker);
                        domeniul_caruia_ii_apartine_varabila->set_value(type.c_str(), val);
                        func_core->value = val;
                    }
                }
                else if (domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type(get_type().c_str()) == "char")
                {
                    string checker = left->evaluates();
                    if ("" == checker)
                    {
                        errorCount++;
                        cout << "error: " << "Char expression is inccorect at line: " << yylineno << endl;
                    }
                    else
                    {
                        class Value val(checker);
                        domeniul_caruia_ii_apartine_varabila->set_value(get_type().c_str(), val);
                        func_core->value = val;
                    }
                }
                else
                {
                    errorCount++;
                    cout << "error: " << "Can only assing a int or a float to an int or a float at line: " << yylineno << endl;
                }
            }
            else
            {
                errorCount++;
                cout << "error: " << "This ID is not usable in an assign at line " << yylineno << endl;
            }
        }
        else if (root == "Print")
        {
            if (left->get_type() == "int")
            {
                int answer = left->evaluatei();
                cout << "Printed : " << answer << "  at line " << yylineno << endl;
            }
            else if (left->get_type() == "float")
            {
                float answer = left->evaluatef();
                cout << "Printed : " << answer << "  at line " << yylineno << endl;
            }
            else if (left->get_type() == "bool")
            {
                bool answer = left->evaluateb();
                cout << "Printed : " << std::boolalpha << answer << "  at line " << yylineno << endl;
            }
            else if (left->get_type() == "string")
            {
                string answer = left->evaluates();
                cout << "Printed : " << answer << "  at line " << yylineno << endl;
            }
            else if (left->get_type() == "char")
            {
                string answer = left->evaluates();
                cout << "Printed : " << answer << "  at line " << yylineno << endl;
            }
            else
            {
                errorCount++;
                cout << "error: " << "Unkown print parameter at line: " << yylineno << endl;
            }
        }
        else if (root == "while")
        {
            if (left->get_type() == "int")
            {
                while (left->evaluatei() == true)
                {
                    right->run();
                }
            }
            else if (left->get_type() == "float")
            {
                while ((int)left->evaluatef() == true)
                {
                    right->run();
                }
            }
            else if (left->get_type() == "bool")
            {
                while ((int)left->evaluateb() == true)
                {
                    right->run();
                }
            }
            else
            {
                errorCount++;
                cout << "error : Weird expression in comparison at line " << yylineno << endl;
            }
        }
        else if (root == "if")
        {
            if (left->get_type() == "int")
            {
                if (left->evaluatei() == true)
                {
                    right->left->run();
                }
                else
                {
                    right->right->run();
                }
            }
            else if (left->get_type() == "float")
            {
                if (left->evaluatef() == true)
                {
                    right->left->run();
                }
                else
                {
                    right->right->run();
                }
            }
            else if (left->get_type() == "bool")
            {
                if (left->evaluateb() == true)
                {
                    right->left->run();
                }
                else
                {
                    right->right->run();
                }
            }
            else
            {
                errorCount++;
                cout << "erorr: Weird expression in comparisson at line: " << yylineno << endl;
            }
        }
        else if (root == "for")
        {
            left->left->run();
            if (left->right->get_type() == "int")
            {
                while (left->right->evaluatei() == true)
                {
                    right->left->run();
                    right->right->run();
                }
            }
            else if (left->right->get_type() == "float")
            {
                while (left->right->evaluatef() == true)
                {
                    right->left->run();
                    right->right->run();
                }
            }
            else
            {
                errorCount++;
                cout << "error : Weird expression in comparison at line " << yylineno << endl;
            }
        }
        else if (root == "TypeOf")
        {
            {
                if (left->get_type() != "")
                {
                    cout << "The type is " << left->get_type() << " at line " << yylineno << endl;
                }
                else
                {
                    errorCount++;
                    cout << "error: " << "Unkown TypeOf parameter at line: " << yylineno << endl;
                }
            }
        }
        else if (root == "func_call")
        { // type=tipul functiei , value=valoarea functiei DUPA assign , left=corpul functiei , right=nullptr
            left->run();
            ++nr_apeluri_functie;
            type = right_side_var->type;
            value = right_side_var->value;
        }
    }
    int evaluatei()
    {
        if ((left == nullptr) || (right == nullptr))
        {
            if (root == "func_call")
            {
                if (nr_apeluri_functie == 0)
                {
                    this->run();
                    return right_side_var->value.get_int();
                }
                else
                {
                    return right_side_var->value.get_int();
                }
            }
            if (right_side_var != nullptr)
            {

                return right_side_var->value.get_int();
            }
            if (get_type() == "int")
            {
                return value.get_int();
            }
            else if (get_type() == "float")
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
                int b = right->evaluatei();
                if (b != 0)
                {
                int a = left->evaluatei();
                    return a / b;
                }
                else
                {
                    // errorCount++;
                    // cout<<"errorCOunt "<<++(*errorCount);
                    cout << "error: Division by Zero is forbidden" << endl;
                    return numeric_limits<int>::min();
                }
            }
            else if(root=="%"){
                return left->evaluatei()%right->evaluatei();
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
            if (root == "func_call")
            {
                if (nr_apeluri_functie == 0)
                {
                    this->run();
                    return right_side_var->value.get_float();
                }
                else
                {
                    return right_side_var->value.get_float();
                }
            }
            if (right_side_var != nullptr)
            {
                return right_side_var->value.get_float();
            }
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
             else if(root=="%"){
                errorCount++;
                cout << "%/ Can not be used for floats" << endl;
                return numeric_limits<float>::quiet_NaN();
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
            if (root == "func_call")
            {
                if (nr_apeluri_functie == 0)
                {
                    this->run();
                    return right_side_var->value.get_bool();
                }
                else
                {
                    return right_side_var->value.get_bool();
                }
            }
            if (right_side_var != nullptr)
            {
                return right_side_var->value.get_bool();
            }
            if (type == "bool")
            {
                return value.get_bool();
            }
            else
            {
                errorCount++;
                cout << "This Method is for BOOLS ONLY" << endl;
                return false;
            }
        }
        else if (root == "==")
        {
            return left->evaluateb() == right->evaluateb();
        }
        else if (root == "!=")
        {
            return left->evaluateb() != right->evaluateb();
        }
        else if (root == "||")
        {
            return left->evaluateb() || right->evaluateb();
        }
        else if (root == "&&")
        {
            return left->evaluateb() && right->evaluateb();
        }
        else
        {
            errorCount++;
            cout << "This Method is for BOOL ASSIGN ONLY are left/right??" << endl;
            return false;
        }
    };
    string evaluates()
    {
        if ((left == nullptr) || (right == nullptr))
        {
            if (root == "func_call")
            {
                if (nr_apeluri_functie == 0)
                {
                    this->run();
                    return right_side_var->value.get_string();
                }
                else
                {
                    return right_side_var->value.get_string();
                }
            }
            if (right_side_var != nullptr)
            {
                return right_side_var->value.get_string();
            }
            if (type == "string")
            {
                return value.get_string();
            }
            else if(type=="char"){
                return value.get_string();
            }
            else
            {
                errorCount++;
                cout << "This Method is for STRINGS ONLY" << endl;
                return "";
            }
        }
        if (left->get_type() == right->get_type())
        {
            if (root == "+")
            {
                return left->evaluates() + right->evaluates();
            }
            else
            {
                errorCount++;
                cout << "Unkown operation for strings" << endl;
                return "";
            }
        }
        else
        {
            errorCount++;
            cout << "Type Missmatch" << endl;
            return "";
        }
    };
    ~ASTNode()
    {
        delete left;
        delete right;
    };
};