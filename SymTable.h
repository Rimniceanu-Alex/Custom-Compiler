#pragma once
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <stack>
#include <cmath>
#include <limits>
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
    Value(const char * x);
    string tostring() const;
    int get_int() const;
    float get_float() const;
    bool get_bool() const;
    string get_string() const;
};
// class ParamList {
//     std::vector<int> integers;
//     std::vector<float> floaters;
//     std::vector<bool> boolers;
//     std::vector<char*> charsers;

// };

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
    // IdInfo(const IdInfo &other)
    //     : idType(other.idType), type(other.type), name(other.name), value(other.value)
    // {
    //     for (auto *param : other.params)
    //     {
    //         params.push_back(new IdInfo(*param));
    //     }
    // }
    // ~IdInfo()
    // {
    //     for (auto *param : params)
    //     {
    //         delete param;
    //     }
    // }
};

class SymTable
{
    map<string, IdInfo> ids; // String ii NUMELE variabilei , ids=informatii
    const char *name;        // Domeniul de vizibilitate
    std::stack<SymTable *> above;
    std::stack<SymTable *> scopes_in_global;
    vector<const char *>members;
    int changes = 0;
    ASTNode *body;

public:
    SymTable(const char *name) : name(name) {}
    bool existsId(const char *s);
    void addVar(const char *type, const char *name, const char *id_type);
    void printVars();
    void printFunct();
    string get_IdInfo_Type(string s); // REDENUMESTE
    string getValue_IDType(string s); // REDENUMESTE
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
    void check_existance_for_declaration(const char *a, const char *b, const char *c, int &errorCount, int yylineno);
    SymTable *check_existance_for_use(const char *b, int &errorCount, int yylineno);
    void check_existance_for_class_instance(const char *a, const char *b, int &errorCount, int yylineno);
    void add_params(const char *function, IdInfo *parametru);
    std::vector<IdInfo *> get_params(string s);
    IdInfo *get_that_variable(string s);
    IdInfo get_that_variable_copy(string s);
    void set_value(const char *name, Value new_value);
    void set_body(ASTNode *body);
    void print_changes();
    ASTNode *get_body();
    ASTNode *get_body_copy();
    SymTable* deep_copy()const;
    void add_members(const char* s);
    vector<const char*> get_members();
    map<string, IdInfo> get_map();
    ~SymTable();
};
