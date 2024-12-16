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
    string name; //Domeniul de vizibilitate
    public:
    SymTable(const char* name) :  name(name){}
    bool existsId(const char* s);
    void addVar(const char* type, const char* name, const char* id_type );
    void printVars();
    string getValueType(string s);
    string getValue_IDType(string s);
    Value get_value(string s);
    string get_dom_name();
    std::vector<char*> get_params(string s);//TO DO continua sa faci parametrii
    void set_value(string& name , Value* new_value);
    ~SymTable();
};





