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
    IdInfo func_local;
    int nr_apeluri_functie = 0;
    int *errorCount;
    int yylineno;
    // AICI vom face un IdInfo unde noi vom da store la copia id-ului functiei si lucram asa FUCKTI
public:
    ASTNode(){};
    ASTNode(const string &func_call, ASTNode *left_child, IdInfo var_functie, int *errorCount, int yylineno) : root(func_call), left(left_child), right(nullptr), value(Value()), table(nullptr), func_local(var_functie), errorCount(errorCount), yylineno(yylineno)
    {
        left->right->right_side_var = &func_local;
        left->right->func_local = func_local;
        //cout<<"Numele "<<func_local->name<<"  si return type-u "<<func_local.type<<endl;
    };
    ASTNode(const string &print, ASTNode *left_child, int *errorCount, int yylineno) : root(print), left(left_child), right(nullptr), value(Value()), table(nullptr), errorCount(errorCount), yylineno(yylineno) {};                                                  // cout << global++ << ") Print a fost apelat" << endl; };                                                             // For Print
    ASTNode(const string &sequence, ASTNode *left_child, ASTNode *right_child, int *errorCount, SymTable *table) : value(Value()), root(sequence), left(left_child), right(right_child), errorCount(errorCount), table(table) {};                                     // cout << global++ << ") Asignare sequance a fost apelat" << endl; }; // Pt asignare statement_list
    ASTNode(const string &sequence, ASTNode *left_child, int *errorCount, int yylineno, SymTable *table) : root(sequence), left(left_child), right(nullptr), value(Value()), errorCount(errorCount), yylineno(yylineno), table(table) {};                             // cout << global++ << ") Asignare statement a fost apelat" << endl; };                          // Pta asignare statement
    ASTNode(const string &nume, const string &assign, ASTNode *left_child, SymTable *table, int *errorCount, int yylineno) : value(Value()), type(nume), root(assign), left(left_child), right(nullptr), table(table), errorCount(errorCount), yylineno(yylineno) {}; // cout << global++ << ") Asignare <- a fost apelat" << endl; };     // Constructor pentru Asignare
    ASTNode(const Value &val, const string &node_type, int *errorCount) : value(val), type(node_type), root(""), left(nullptr), right(nullptr), errorCount(errorCount), table(nullptr) {};                                                                            // cout << global++ << ") Asignare Nr , Floar , Bool a fost apelat" << endl; };
    ASTNode(const string &control, ASTNode *left_child, ASTNode *right_child, int *errorCount, int yylineno, SymTable *table) : root(control), left(left_child), right(right_child), errorCount(errorCount), yylineno(yylineno) {}
    ASTNode(ASTNode *left_child, ASTNode *right_child, int *errorCount) : left(left_child), right(right_child), errorCount(errorCount) {} // Imbinare pentru if_else
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
    ASTNode(const string &op, ASTNode *left_child, ASTNode *right_child, int *errorCount) : value(Value()), root(op), left(left_child), right(right_child), errorCount(errorCount), table(nullptr) // Operatii
    {
        if ((left_child && right_child) && (left_child->get_type() == right_child->get_type()))
        {
            type = left_child->get_type();
        }
        else if (left_child && right_child)
        {
            //cout << "---------------------In constructor avem Left type=" << left_child->get_type() << "     Right type=" << right_child->get_type() << endl;
            type = "missmatch";
        }
        else
        {
            type = "unkown";
        }
    };
    ASTNode(IdInfo *variabila, int *errorCount, int yylineno) : left(nullptr), right(nullptr), errorCount(errorCount), yylineno(yylineno), right_side_var(variabila)
    {
        type = variabila->type;
        value = variabila->value;
    };

    ASTNode(const ASTNode &original) : value(original.value), type(original.type), root(original.root), table(original.table), right_side_var(original.right_side_var), func_local(original.func_local), nr_apeluri_functie(original.nr_apeluri_functie), errorCount(original.errorCount), yylineno(original.yylineno), left(nullptr), right(nullptr)
    {
        if (original.left != nullptr)
        {
            left = new ASTNode(*original.left);
        }
        if (original.right != nullptr)
        {
            right = new ASTNode(*original.right);
        }
    };
    const char *get_type_for_main()
    {
        return type.c_str();
    }
    string get_type()
    {

        if (func_local.name != "")
        {
            if (right_side_var == nullptr)
            {
                //cout << "Apelat type" << endl;
                return func_local.type;
            }
            else
            {
                return func_local.name;
            }
        }
        if (right_side_var == nullptr)
        {
            // cout << "Apelat type" << endl;
            return type;
        }
        else
        {
            // cout << "Apelat right_side_type" << endl;
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
            // cout << "What do we have here    " << get_type() << endl;
            domeniul_caruia_ii_apartine_varabila = table->check_existance_for_use(get_type().c_str(), *errorCount, yylineno);
            if (domeniul_caruia_ii_apartine_varabila != nullptr)
            {
                // cout<<endl<<endl<<endl<<endl<<"La <- in stanga avem "<<type<<" la linia "<<yylineno<<" din domeniul "<<domeniul_caruia_ii_apartine_varabila->get_dom_location()<<" si are tipul "<<domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type(type)<<endl<<endl<<endl<<endl;
                class IdInfo test = *domeniul_caruia_ii_apartine_varabila->get_that_variable(type);
                // cout<<"This is the table:"<<endl<<table->get_dom_name()<<endl<<endl;
                // cout<<endl<<endl<<"Before assignemnet"<<endl;
                //     cout<<test.name<<" "<<test.type<<" "<<test.value.get_int()<<endl<<endl;
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
                        }
                        else if (left->type == "float")
                        {
                            class Value val(left->evaluatef());
                            domeniul_caruia_ii_apartine_varabila->set_value(type.c_str(), val);
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
                    // cout << "-----------------------1)Exexutam prima oara (un check)" << endl;
                    if (numeric_limits<int>::min() == checker)
                    {
                        errorCount++;
                        cout << "error: " << "Arithmetic expression is inccorect at line: " << yylineno << endl;
                    }
                    else if (func_local.name == "")
                    {
                        // cout << "-----------------------2)Exexutam a 2-a oara (assign-u)" << endl;
                        class Value val(checker);
                        // cout<<endl<<endl<<endl<<"Valoarea pe care o asignan este "<<val.get_int()<<endl<<endl<<endl;
                        domeniul_caruia_ii_apartine_varabila->set_value(get_type().c_str(), val);
                        // cout << "+++++++++++++++Am setat pentru avaribail " << get_type() << " valoarea " << val.get_int() << endl;
                        // if(right_side_var!=nullptr){
                        // right_side_var->value=val;
                        // }
                    }
                    else if (func_local.name != "")
                    {
                        // cout << "///////////////////////////2)Executam pentru un fucn_call" << endl;
                        class Value val(checker);
                        right_side_var->value = val;
                        // cout << "$$$$$$$$$$$$$$$$$$$$$CHCKER name:[" << right_side_var->name << "] type:[" << right_side_var->type << "] value:[" << right_side_var->value.get_int() << "]" << endl;
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
                    cout << "Printed : " << left->evaluatei() << "  at line " << yylineno << endl;
                }
                else if (left->get_type() == "float")
                {
                    cout << "Printed : " << left->evaluatef() << "  at line " << yylineno << endl;
                }
                else if (left->get_type() == "bool")
                {
                    cout << "Printed : " << std::boolalpha << left->evaluateb() << "  at line " << yylineno << endl;
                }
                else
                {
                    errorCount++;
                    cout << "error: " << "Unkown print parameter at line: " << yylineno << endl;
                }
            }
        }
        else if (root == "while")
        {
            //    cout<<"WHILE"<<endl<<endl<<endl<<endl;
            if (left->get_type() == "int")
            {
                while (left->evaluatei() == true)
                {
                    printf("Expression is TRUE\n");
                    right->run();
                }
                //  else{
                //       printf("Expression is FALSE\n");
                //  }
            }
            else if (left->get_type() == "float")
            {
                while ((int)left->evaluatef() == true)
                {
                    printf("Expression is TRUE\n");
                    right->run();
                }
                //  else{
                //       printf("Expression is FALSE\n");
                //  }
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
            else
            {
                errorCount++;
                cout << "erorr: Weird expression in comparisson at line: " << yylineno << endl;
            }
        }
        else if (root == "for")
        {
            // cout << "AM AJUNG IN FOR" << endl;
            left->left->run();
            if (left->right->get_type() == "int")
            {
                while (left->right->evaluatei() == true)
                {
                    printf("Expression is TRUE\n");
                    right->left->run();
                    right->right->run();
                }
            }
            else if (left->right->get_type() == "float")
            {
                while (left->right->evaluatef() == true)
                {
                    printf("Expression is TRUE\n");
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
        else if (root == "func_call") // TO DO , vezi cum o integrezi in Expresii sa poti face foo(2)+foo(3) , tre sa modifici oelaca si in <-
                                      // TO DO Vezi cum faci sa poti face apel de functie VOID
        {                             // type=tipul functiei , value=valoarea functiei DUPA assign , left=corpul functiei , right=nullptr
            cout<<"-----Inainte sa exectuam CORPUL functiei nume:[" << func_local.name << "] type:[" << func_local.type << "] value:[" << func_local.value.get_int() << "]   COrpul :["<<left<<"]" << endl;
            left->run();
            ++nr_apeluri_functie;
            // cout << endl
            //      << endl
            //      << endl
            //      << endl
            //      << func_local.type << endl
            //      << endl
            //      << endl;
            type = func_local.type;
            value = func_local.value;
            cout<<"+++++Dupa ce am executat CORPUL functiei nume:[" << func_local.name << "] type:[" << func_local.type << "] value:[" << func_local.value.get_int() << "]   COrpul :["<<left<<"]" << endl;
            // type = right_side_var->type;
            // value = right_side_var->value;
            // cout << "In right side var avem nume:[" << func_local.name << "] type:[" << func_local.type << "] value:[" << func_local.value.get_int() << "]" << endl;
            // right_side_var=left->right->table->next_domain_scope()->get_that_variable(left->right->type);
            // if (right_side_var == nullptr)
            // {
            //     cout << endl
            //          << endl
            //          << endl
            //          << endl
            //          << "NULL PTR" << endl
            //          << endl
            //          << endl
            //          << endl;
            // }
            // cout << endl
            //      << endl
            //      << "Functia " << right_side_var->name << " este de tipul " << right_side_var->type << " si are valoarea " << right_side_var->value.get_int() << " Apelata de atatea ori: " << nr_apeluri_functie << endl
            //      << endl;
            // cout<<"Apel de fucntie "<<left->right->type<<" tipul "<<left->right->table->next_domain_scope()->get_IdInfo_Type(left->right->type)<<endl<<endl;
            // cout<<endl<<endl<<"In nodul func call avem rootul:["<<root<<"] type-ul:["<<type<<"] Valoarea:["<<value.get_int()<<"]"<<endl<<endl<<endl;
            // cout<<endl<<endl<<left->table->get_dom_location()<<"   "<<left->type.c_str()<<endl;
            // SymTable *domeniul_caruia_ii_apartine_varabila;
            // domeniul_caruia_ii_apartine_varabila = left->table->next_domain_scope()->check_existance_for_use(left->type.c_str(), errorCount, yylineno);
            // cout<<endl<<endl<<endl<<"Apelul de functie are typul"<<domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type(left->type)<<endl<<endl<<endl;
        }
    }
    int evaluatei()
    {
        // cout<<"A fost apelat evaluatei"<<endl;
        if ((left == nullptr) || (right == nullptr))
        {
            // cout << "<<<<<<<<<<<<<<<<<<<<<<<<<< root [" << root << "]" << endl
            //      << endl;
            if (root == "func_call")
            {
                if (nr_apeluri_functie == 0)
                {
                    this->run();
                    // cout << "AJUNGE AICIC??" << endl;
                    // cout << endl
                    //      << endl
                    //      << endl
                    //      << "IN EVALUATE Apelat de func_call si avem variabila " << func_local.name << " cu valoarea " << func_local.value.get_int() << endl
                    //      << endl
                    //      << endl
                    //      << endl;
                    return func_local.value.get_int();
                }
                else
                {
                    return func_local.value.get_int();
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
        // cout << "Stanga are " << left->get_type() << " Dreapta are " << right->get_type() << endl;
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
                // int a;
                // int b;
                // a = left->evaluatei();
                // // cout << "a dupa eval " << a << endl;
                // b = right->evaluatei(); // PE ASTA NU-L MAI EXECUTA(Nu mai da print , FIX IT)
                // cout << "b dupa eval " << b << endl;
                // cout << "ADUNARE   a=" << a << endl
                //      << "b=" << b << endl
                //      << endl;
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
        else
        {
            errorCount++;
            cout << "This Method is for BOOL ASSIGN ONLY" << endl;
            return false;
        }
    };
    // string nume_functie(){
    //     return right_side_var->name;
    // }

    ~ASTNode()
    {
        delete left;
        delete right;
    };
};