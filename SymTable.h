#pragma once
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <stack>
#include <cmath>
#include <limits>
#include <cstring>  
class ASTNode;
using namespace std;

class Value
{
    int IntValue;
    float FloatValue;
    bool BoolValue;
    string StringValue;

public:
    Value();
    Value(int x);
    Value(float x);
    Value(bool x);
    Value(string type);
    Value(char x);
    Value(const char * x);
    string tostring() const;
    int get_int() const;
    float get_float() const;
    bool get_bool() const;
    string get_string() const;
    char get_char() const;
};

class IdInfo
{
public:
    string idType;                // CLASA/FUNCTIE/VARIABILA
    string type;                  // int float char bool
    string name;                  // Numele variabilei
    Value value;                  // Valoare pe care o va avea Variabila
    std::vector<IdInfo *> params; // for functions //este * pentru ca noi vrem ca schimbarile Parametrilor sa fie reflectate.
    IdInfo() {}
    IdInfo(const char *type, const char *name, const char *idType) : type(type), name(name), idType(idType) {}
    IdInfo* deep_copy()const;
};

class SymTable
{
    map<string, IdInfo> ids; // String ii NUMELE variabilei , ids=informatii
    const char *name;        // Domeniul de vizibilitate
    std::stack<SymTable *> above;
    std::stack<SymTable *> scopes_in_global;
    std::stack<IdInfo*>function_params;
    int changes = 0;
    IdInfo function_core;
    ASTNode *body;

public:
    SymTable(const char *name) : name(name) {}
    bool existsId(const char *s);
    void addVar(const char *type, const char *name, const char *id_type);
    void printVars();
    void printFunct();
    string get_IdInfo_Type(string s);
    string getValue_IDType(string s);
    Value get_value(string s);
    const char *get_dom_name();
    string get_dom_location();
    void add_above(SymTable *new_domain);
    void add_bellow(SymTable *new_domain);
    std::stack<SymTable *> return_stack_above();
    std::stack<SymTable *> return_stack_bellow();
    void assign_stack_above(std::stack<SymTable *> stack_above);
    void remove_from_above();
    SymTable *next_domain_scope();
    void check_existance_for_declaration(const char *a, const char *b, const char *c, int &errorCount, int yylineno ,std::vector<int>array_size);
    SymTable *check_existance_for_use(const char *b, int &errorCount, int yylineno);
    void check_existance_for_class_instance(const char *a, const char *b, int &errorCount, int yylineno);
    void add_function_params(IdInfo*param);
    std::stack<IdInfo*> get_function_params();
    IdInfo *get_that_variable(string s);
    void set_value(const char *name, Value new_value);
    void set_body(ASTNode *body);
    ASTNode *get_body();
    IdInfo* get_function_core();
    map<string, IdInfo> get_map();
    SymTable* deep_copy()const;
    ~SymTable();
};