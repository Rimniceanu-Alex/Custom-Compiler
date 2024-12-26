#include "SymTable.h"
#include <cstring>
using namespace std;

Value::Value(int x)
{
    IntValue = x;
}

Value::Value(float x)
{
    FloatValue = x;
}

Value::Value(string x)
{
    StringValue = x;
}
Value::Value()
{
}

int Value::get_int() const
{
    return IntValue;
}

float Value::get_float() const
{
    return FloatValue;
}

string Value::get_string() const
{
    return StringValue;
}

void SymTable::addVar(const char *type, const char *name, const char *id_type)
{
    IdInfo var(type, name, id_type);
    ids[name] = var;
}

bool SymTable::existsId(const char *var)
{
    return ids.find(var) != ids.end();
}

void SymTable::printVars()
{
    for (const pair<string, IdInfo> &v : ids)
    {
        if (v.second.type == "int"&&v.second.idType=="var")
        {
            cout << "Vizibilitate: [" << this->get_dom_location() << "] name: [" << v.first << "] data_type: [" << v.second.type << "] ID_TYPE: [" << v.second.idType << "] Value:[" << v.second.value.get_int() << "]" << endl;
        }
        else if(v.second.type == "float"&&v.second.idType=="var"){
            cout << "Vizibilitate: [" << this->get_dom_location() << "] name: [" << v.first << "] data_type: [" << v.second.type << "] ID_TYPE: [" << v.second.idType << "] Value:[" << v.second.value.get_float() << "]" << endl;
        }
        else if (v.second.type == "int"&&v.second.idType=="func"){
            cout << "Vizibilitate: [" << this->get_dom_location() << "] name: [" << v.first << "] data_type: [" << v.second.type << "] ID_TYPE: [" << v.second.idType << "] Value:[" << v.second.value.get_int() << "]" << endl;
        }
        else{
            cout << "Vizibilitate: [" << this->get_dom_location() << "] name: [" << v.first << "] data_type: [" << v.second.type << "] ID_TYPE: [" << v.second.idType << "]"<< endl;
        }
    }
}
void SymTable::printFunct(){
    for (const pair<string, IdInfo> &v : ids)
    {
        if(v.second.idType=="func"){
            cout<<"Vizibilitate: ["<<this->get_dom_location()<<"] Name : ["<<v.first<<"] Return type: ["<<v.second.type<<"]"<<endl;
            cout<<"Params:"<<endl;
            auto parametrii=this->get_params(v.first);
            for(auto i:parametrii){
                cout<<i.name<<" "<<i.type<<endl;
            }
        }
    }
}
string SymTable::get_IdInfo_Type(string a)
{
    return this->ids[a].type;
}

string SymTable::getValue_IDType(string a)
{
    return this->ids[a].idType;
}

Value SymTable::get_value(string a)
{
    return this->ids[a].value;
}

const char *SymTable::get_dom_name()
{
    return this->name;
}

std::string SymTable::get_dom_location()
{
    std::stack<SymTable *> Copy = this->above;
    std::stack<SymTable *> Reverse;
    while (!Copy.empty())
    {
        Reverse.push(Copy.top());
        Copy.pop();
    }
    std::string s;
    while (!Reverse.empty())
    {
        s = s + Reverse.top()->get_dom_name() + "-";
        Reverse.pop();
    }
    s = s + this->get_dom_name();
    return s;
}

void SymTable::add_above(SymTable *new_domain)
{
    this->above.push(new_domain);
}

std::stack<SymTable *> SymTable::return_stack_above()
{
    return this->above;
}

void SymTable::assign_stack_above(std::stack<SymTable *> stack_above)
{
    this->above = stack_above;
}

void SymTable::remove_from_above()
{
    this->above.pop();
}

SymTable *SymTable::next_domain_scope()
{
    return this->above.top();
}

void SymTable::check_existance_for_declaration(const char *a, const char *b, const char *c, int &errorCount, int yylineno)
{
    if (!this->existsId(b))
    {
        std::stack<SymTable *> Copy_table; // Verificam daca a fost declarata anterior intr-un Domeniu de vizibilitate local sau nu
        Copy_table = this->above;
        while (!Copy_table.empty())
        {
            SymTable *iterator;
            iterator = Copy_table.top();
            Copy_table.pop();
            if (iterator->existsId(b))
            {
                errorCount++;
                char *buff = new char[256];
                strcpy(buff, "Variable ");
                strcat(buff, b);
                strcat(buff, " already defined in the scope above ");
                strcat(buff, iterator->get_dom_name());
                cout << "error:" << buff << " at line: " << yylineno << endl;
                delete[] buff;
                buff = nullptr;
                return;
            }
        }
        this->addVar(a, b, c);
    }
    else
    {
        errorCount++;
        char *buff = new char[256];
        strcpy(buff, "Variable ");
        strcat(buff, b);
        strcat(buff, " already defined in the same scope");
        cout << "error:" << buff << " at line: " << yylineno << endl;
        delete[] buff;
        buff = nullptr;
    }
}

SymTable *SymTable::check_existance_for_use(const char *b, int &errorCount, int yylineno)
{
    if (!this->existsId(b))
    { // Nu exista in domeniul actual =>cautam daca exista mai sus
        int found = 0;
        std::stack<SymTable *> Copy_table;
        Copy_table = this->above;
        while (!Copy_table.empty())
        {
            SymTable *iterator;
            iterator = Copy_table.top();
            Copy_table.pop();
            if (iterator->existsId(b))
            {
                found = 1;
                return iterator;
                break;
            }
        }
        if (found == 0)
        {
            errorCount++;
            char *buff = new char[256];
            strcpy(buff, "Variable ");
            strcat(buff, b);
            strcat(buff, " doesnt exist");
            cout << "error:" << buff << " at line: " << yylineno << endl;
            delete[] buff;
            buff = nullptr;
            return nullptr;
        }
    }
    else
    {
        return this;
    }
    return nullptr;
}

void SymTable::check_existance_for_class_instance(const char *a, const char *b, int &errorCount, int yylineno)
{
    SymTable *temp;
    if (strcmp(this->get_dom_name(), "global") != 0)
    {
        std::stack<SymTable *> Copy_table;
        Copy_table = this->above;
        int i = 0;
        while (!Copy_table.empty())
        {
            temp = Copy_table.top();
            Copy_table.pop();
        }
    }
    else
    {
        temp = this;
    }
    if (temp->existsId(a))
    {
        this->check_existance_for_declaration(a, b, "class_instance", errorCount, yylineno);
        return;
    }
    else
    {
        errorCount++;
        char *buff = new char[256];
        strcpy(buff, "Nu exista clasa ");
        strcat(buff, a);
        cout << "error:" << buff << " at line: " << yylineno << endl;
        delete[] buff;
        buff = nullptr;
    }
}

void SymTable::add_params(const char* function ,const char* type , const char* name , const char* id_type)
{
    IdInfo var(type, name, id_type);
    ids[function].params.push_back(var);
}

std::vector<IdInfo> SymTable::get_params(string s)
{
    return this->ids[s].params;
}

void SymTable::set_value(const char *name, Value new_value)
{
    this->ids[name].value = new_value;
}

SymTable::~SymTable()
{
    ids.clear();
}