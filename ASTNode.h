#include "SymTable.h"

int global = 0;
int global2=0;
class ASTNode
{
    Value value;
    string type;
    string root;
    ASTNode *left;
    ASTNode *right;
    SymTable *table;
    IdInfo *right_side_var;
    int &errorCount;
    int yylineno;

public:
    ASTNode(const string &print, ASTNode *left_child, int& errorCount, int yylineno) : root(print), left(left_child), right(nullptr), value(Value()), table(nullptr), errorCount(errorCount), yylineno(yylineno) {};// cout << global++ << ") Print a fost apelat" << endl; };                                                             // For Print
    ASTNode(const string &sequence, ASTNode *left_child, ASTNode *right_child, int &errorCount, SymTable *table) : value(Value()), root(sequence), left(left_child), right(right_child), errorCount(errorCount), table(table){};// cout << global++ << ") Asignare sequance a fost apelat" << endl; }; // Pt asignare statement_list
    ASTNode(const string &sequence, ASTNode *left_child, int &errorCount, int yylineno, SymTable *table) : root(sequence), left(left_child), right(nullptr), value(Value()), errorCount(errorCount), yylineno(yylineno), table(table) {};// cout << global++ << ") Asignare statement a fost apelat" << endl; };                          // Pta asignare statement
    ASTNode(const string &nume, const string &assign, ASTNode *left_child, SymTable *table, int &errorCount, int yylineno) : value(Value()), type(nume), root(assign), left(left_child), right(nullptr), table(table), errorCount(errorCount), yylineno(yylineno) {};// cout << global++ << ") Asignare <- a fost apelat" << endl; };     // Constructor pentru Asignare
    ASTNode(const Value &val, const string &node_type, int &errorCount) : value(val), type(node_type), root(""), left(nullptr), right(nullptr), errorCount(errorCount), table(nullptr) {};// cout << global++ << ") Asignare Nr , Floar , Bool a fost apelat" << endl; };
    ASTNode(const string &control , ASTNode*left_child , ASTNode* right_child , int &errorCount, int yylineno, SymTable *table ):root(control) , left(left_child) , right(right_child) , errorCount(errorCount) , yylineno(yylineno){}
    // ASTNode(const string &name_var, SymTable *current, int &errorCount, int yylineno) : root(name_var), left(nullptr), right(nullptr), table(current), errorCount(errorCount), yylineno(yylineno) // PT varaibile in AST pt expresii , Also ROOT=Numele varibailei aici // NU MERGE PENRU CA ASTEA SE EXECUTA LA INCEPUT INAINTE DE INTIALIZARI
    // {//AICI PPUNEM VALOAREA LUI A si o pastreaza pe asta
    //     cout << global++ << ") Utilizare ID in partea dreapta" << endl;//AICI E BUBA
    //     SymTable *domeniul_caruia_ii_apartine_varabila;
    //     domeniul_caruia_ii_apartine_varabila = table->check_existance_for_use(root.c_str(), errorCount, yylineno);
    //     if (domeniul_caruia_ii_apartine_varabila != nullptr)
    //     {   cout<<endl<<endl<<endl<<"Constructorul"<<endl;
    //         cout<<"Domeniul in care se afla varibaila este "<<domeniul_caruia_ii_apartine_varabila->get_dom_name()<<endl;
    //         cout<<"Variabila are valaorea "<<domeniul_caruia_ii_apartine_varabila->get_value(root).get_int()<<endl<<endl;
    //         class Value val(0);
    //         value=val;
    //         //value = domeniul_caruia_ii_apartine_varabila->get_value(val);
    //         type = domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type(root);
    //     }
    //     else
    //     {
    //         errorCount++;
    //         cout << "error : Nu este declarata aceasta varaibila" << endl;
    //     }
    // };
    ASTNode(const string &op, ASTNode *left_child, ASTNode *right_child, int &errorCount) : value(Value()), root(op), left(left_child), right(right_child), errorCount(errorCount), table(nullptr) // Operatii
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
    ASTNode(IdInfo*variabila , int &errorCount , int yylineno ):left(nullptr) , right(nullptr) , errorCount(errorCount) , yylineno(yylineno) , right_side_var(variabila){
    type=variabila->type;
    value=variabila->value;
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
            domeniul_caruia_ii_apartine_varabila = table->check_existance_for_use(type.c_str(), errorCount, yylineno);
            if (domeniul_caruia_ii_apartine_varabila != nullptr)
            {class IdInfo test=*domeniul_caruia_ii_apartine_varabila->get_that_variable(type);
            // cout<<"This is the table:"<<endl<<table->get_dom_name()<<endl<<endl;
            // cout<<endl<<endl<<"Before assignemnet"<<endl;
            //     cout<<test.name<<" "<<test.type<<" "<<test.value.get_int()<<endl<<endl;
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
                        // cout<<endl<<endl<<endl<<"Valoarea pe care o asignan este "<<val.get_int()<<endl<<endl<<endl;
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
        else if (root == "Print")
        {
            {
                if (left->get_type() == "int")
                {
                    cout <<"Printed : "<< left->evaluatei() <<"  at line "<<yylineno<< endl;
                }
                else if (left->get_type() == "float")
                {
                    cout << left->evaluatef() << endl;
                }
                else
                {
                    errorCount++;
                    cout << "error: " << "Unkown print parameter at line: " << yylineno << endl;
                }
            }
        }
        else if(root=="while"){ 
            //    cout<<"WHILE"<<endl<<endl<<endl<<endl;
                    if(left->get_type()=="int"){
                         while(left->evaluatei()==true){
                              printf("Expression is TRUE\n");
                              right->run();
                         }
                        //  else{
                        //       printf("Expression is FALSE\n");
                        //  }
                    }
                    else if(left->get_type()=="float"){
                         while((int)left->evaluatef()==true){
                              printf("Expression is TRUE\n");
                              right->run();
                         }
                        //  else{
                        //       printf("Expression is FALSE\n");
                        //  }
                    }
                    else{
                         errorCount++;
                         cout<<"error : Weird expression in comparison at line "<<yylineno<<endl;
                    }
               }
    }
    int evaluatei()
    {
        if ((left == nullptr) || (right == nullptr))
        {
            if(right_side_var!=nullptr){
                return right_side_var->value.get_int();
            }
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
            if(right_side_var!=nullptr){
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
            if(right_side_var!=nullptr){
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
        else
        {
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