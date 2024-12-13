#include "SymTable.h"
using namespace std;

void SymTable::addVar(const char* type, const char*name ,const char* id_type) {
    IdInfo var(type, name, id_type);
    ids[name] = var; 
}


bool SymTable::existsId(const char* var) {
    return ids.find(var)!= ids.end();  
}

void SymTable::printVars() {
    for (const pair<string, IdInfo>& v : ids) {
        cout <<"Vizibilitate: [" << this->name << "] name: [" << v.first << "] data_type: [" << v.second.type << "] ID_TYPE: [" << v.second.idType <<"]" << endl; 
     }
}
string SymTable::getValueType(string a ){
    return this->ids[a].type;
}

Value SymTable::get_value(string a ){
    return this->ids[a].value;
}

void SymTable::set_value(std::string &name, Value *new_value){
    this->ids[name].value=*new_value;
}

SymTable::~SymTable() {
    ids.clear();
}










