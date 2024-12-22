#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Value{
    public:
    Value(){};
        Value(int x);
        Value(float x);
        Value(string type);
        string tostring();
};
class ParamList {
    std::vector<int> integers;
    std::vector<float> floaters;
    std::vector<bool> boolers;
    std::vector<char*> charsers;

};

class IdInfo {
    public:
    string idType;// CLASA/FUNCTIE/VARIABILA  
    string type; //int float char bool
    string name; //Numele variabilei
    Value value; //Valoare pe care o va avea Variabila
    std::vector<char*> params; //for functions
    IdInfo() {}
    IdInfo(const char* type, const char* name, const char* idType) : type(type),name(name),idType(idType) {}
};



class SymTable {
    map<string, IdInfo> ids;//String ii NUMELE variabilei , ids=informatii
    const char* name; //Domeniul de vizibilitate
    std::stack<SymTable*> above;//TO DO : Vezi cum muti functiile in Sym_table //Este Stackul cu toate domeniile inclusiv cel actual
    public:
    SymTable(const char* name) :  name(name){}
    bool existsId(const char* s);
    void addVar(const char* type, const char* name, const char* id_type );
    void printVars();
    string getValueType(string s);
    string getValue_IDType(string s);
    Value get_value(string s);
    const char* get_dom_name();
    string get_dom_location();
    void add_above(SymTable*new_domain);
    std::stack<SymTable*> return_stack_above();
    void assign_stack_above(std::stack<SymTable*> stack_above);
    void remove_from_above();
    SymTable* next_domain_scope();
    void check_existance_for_declaration(const char* a , const char* b , const char* c , int& errorCount , int yylineno);
    SymTable* check_existance_for_use(const char* b, int& errorCount , int yylineno);
    void check_existance_for_class_instance(const char* a , const char* b ,int& errorCount , int yylineno );
    std::vector<char*> get_params(string s);//TO DO continua sa faci parametrii
    void set_value(string& name , Value* new_value);
    ~SymTable();
};


//TO DOO : vezi cum dai manage la Stack (nu ramane domeniul exact cum trebuie)


