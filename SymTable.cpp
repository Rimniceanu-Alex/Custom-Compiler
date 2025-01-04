#include "ASTNode.h"
#include <cstring>
#include "SymTable.h"
using namespace std;

Value::Value(int x)
{
    IntValue = x;
}

Value::Value(float x)
{
    FloatValue = x;
}

Value::Value(bool x)
{
    BoolValue = x;
}

Value::Value(string x)
{
    StringValue = x;
}
Value::Value(const char *x)
{
    StringValue=x;
    if(StringValue[0]=='"'){
        if (StringValue.length() > 2) {
            StringValue = StringValue.substr(1, StringValue.length() - 2);
        } else {
            StringValue = "";
        }
    }
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

bool Value::get_bool() const
{
    return BoolValue;
}

string Value::get_string() const
{
    return StringValue;
}

void SymTable::addVar(const char *type, const char *name, const char *id_type)
{
    IdInfo var(type, name, id_type);
    ids[name] = var;
    add_members(name);
}

bool SymTable::existsId(const char *var)
{
    return ids.find(var) != ids.end();
}

void SymTable::printVars()
{
    for (const pair<string, IdInfo> &v : ids)
    {
        if (v.second.type == "int" && (v.second.idType == "var" || v.second.idType == "param"))
        {
            cout << "Vizibilitate: [" << this->get_dom_location() << "] name: [" << v.first << "] data_type: [" << v.second.type << "] ID_TYPE: [" << v.second.idType << "] Value:[" << v.second.value.get_int() << "]" << endl;
        }
        else if (v.second.type == "float" && (v.second.idType == "var" || v.second.idType == "param"))
        {
            cout << "Vizibilitate: [" << this->get_dom_location() << "] name: [" << v.first << "] data_type: [" << v.second.type << "] ID_TYPE: [" << v.second.idType << "] Value:[" << v.second.value.get_float() << "]" << endl;
        }
        else if (v.second.type == "bool" && (v.second.idType == "var" || v.second.idType == "param"))
        {
            cout << "Vizibilitate: [" << this->get_dom_location() << "] name: [" << v.first << "] data_type: [" << v.second.type << "] ID_TYPE: [" << v.second.idType << "] Value:[" << v.second.value.get_bool() << "]" << endl;
        }
        else if (v.second.type == "int" && v.second.idType == "func")
        {
            cout << "Vizibilitate: [" << this->get_dom_location() << "] name: [" << v.first << "] data_type: [" << v.second.type << "] ID_TYPE: [" << v.second.idType << "] Value:[" << v.second.value.get_int() << "]" << endl;
        }
        else if (v.second.type == "float" && v.second.idType == "func")
        {
            cout << "Vizibilitate: [" << this->get_dom_location() << "] name: [" << v.first << "] data_type: [" << v.second.type << "] ID_TYPE: [" << v.second.idType << "] Value:[" << v.second.value.get_float() << "]" << endl;
        }
        else if (v.second.type == "bool" && v.second.idType == "func")
        {
            cout << "Vizibilitate: [" << this->get_dom_location() << "] name: [" << v.first << "] data_type: [" << v.second.type << "] ID_TYPE: [" << v.second.idType << "] Value:[" << v.second.value.get_bool() << "]" << endl;
        }
        else
        {
            cout << "Vizibilitate: [" << this->get_dom_location() << "] name: [" << v.first << "] data_type: [" << v.second.type << "] ID_TYPE: [" << v.second.idType << "]" << endl;
        }
    }
}
void SymTable::printFunct()
{
    for (const pair<string, IdInfo> &v : ids)
    {
        if (v.second.idType == "func")
        {
            if (v.second.type == "int")
            {
                cout << "Vizibilitate: [" << this->get_dom_location() << "] Name : [" << v.first << "] Return type: [" << v.second.type << "] Value: [" << v.second.value.get_int() << "]" << endl;
            }
            else if (v.second.type == "float")
            {
                cout << "Vizibilitate: [" << this->get_dom_location() << "] Name : [" << v.first << "] Return type: [" << v.second.type << "] Value: [" << v.second.value.get_int() << "]" << endl;
            }
            else
            {
                cout << "Vizibilitate: [" << this->get_dom_location() << "] Name : [" << v.first << "] Return type: [" << v.second.type << "]" << endl;
            }
            cout << "Params:" << endl;
            auto parametrii = this->get_params(v.first);
            for (auto i : parametrii)
            {
                if ((*i).type == "int")
                {
                    cout << (*i).name << " " << (*i).type << " " << (*i).value.get_int() << endl;
                }
                else if ((*i).type == "float")
                {
                    cout << (*i).name << " " << (*i).type << " " << (*i).value.get_float() << endl;
                }
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

void SymTable::add_bellow(SymTable *new_domain)
{
    this->scopes_in_global.push(new_domain);
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
        if(c=="class_instance"){
            cout<<"This is a class instancec of class ["<<a<<"]"<<endl;
            cout<<this->get_dom_location()<<endl<<"Verificam scopeurile de deasupra"<<endl;
            std::stack<SymTable *> Copy_table1;
            SymTable* tempor;
            Copy_table1=this->above;
            while(!Copy_table1.empty()){
                if(strcmp(Copy_table1.top()->get_dom_name() , "global")==0){
                    tempor=Copy_table1.top();
                }
                Copy_table1.pop();
            }
            std::stack<SymTable *> Copy_table2; // Verificam daca a fost declarata anterior intr-un Domeniu de vizibilitate local sau nu
            Copy_table2= tempor->scopes_in_global;
            if(Copy_table2.empty()){
                cout<<"Fucker's empty"<<endl;
            }
            while(!Copy_table2.empty()){
                //cout<<endl<<Copy_table2.top()->get_dom_name()<<endl<<endl;
        //        if(strcmp(Copy_table.top()->get_dom_name() ,"global")==0){
        //             cout<<"Entered"<<endl;
        //             std::stack<SymTable *> Copy_table2;
        //             Copy_table2=Copy_table.top()->above;
        //             while(!Copy_table2.empty()){
        //                 cout<<Copy_table2.top()<<endl;
        //                 Copy_table2.pop();
        //             }
        //        }
                if(strcmp(Copy_table2.top()->get_dom_name(), a)==0){
                    cout<<"FOUND IT "<<a<<endl;
                    map<string, IdInfo>variabile;
                    variabile=Copy_table2.top()->get_map();
                    for(const pair<string , IdInfo>d : variabile){
                        string buff=b;
                        string name=buff+"."+d.first;
                        this->addVar(d.second.type.c_str() , name.c_str() , d.second.idType.c_str());
                        cout<<d.first<<" "<<d.second.idType<<" "<<d.second.type<<endl;
                    }
                }
                Copy_table2.pop();
            }
            
        }
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

void SymTable::add_params(const char *function, IdInfo *parametru)
{
    ids[function].params.push_back(parametru);
}

std::vector<IdInfo *> SymTable::get_params(string s)
{
    return this->ids[s].params;
}

IdInfo *SymTable::get_that_variable(string s)
{
    return &ids[s];
}

IdInfo SymTable::get_that_variable_copy(string s)
{
    IdInfo copie = ids[s];
    return copie;
}

void SymTable::set_value(const char *name, Value new_value)
{
    ++changes;
    this->ids[name].value = new_value;
}

void SymTable::set_body(ASTNode *body)
{
    this->body = body;
}

void SymTable::print_changes()
{
    cout << "Number of chagnes to the scope is   " << changes << endl;
}

ASTNode *SymTable::get_body()
{
    return body;
}
ASTNode *SymTable::get_body_copy()
{
    ASTNode *copiedNode = new ASTNode(*body);
    return copiedNode;
}

SymTable *SymTable::deep_copy() const
{
    SymTable *copy = new SymTable(name); // Au acelasi num fucking DUH
    copy->ids = ids;
    std::stack<SymTable *> tmp = above;
    std::stack<SymTable *> copy_stack;
    while (!tmp.empty())
    {
        SymTable *original = tmp.top();
        tmp.pop();
        if (original != nullptr)
        {
            copy_stack.push(original->deep_copy());
        }
        else
            copy_stack.push(nullptr);
    }
    while (!copy_stack.empty())
    {
        copy->above.push(copy_stack.top());
        copy_stack.pop();
    }
    copy->changes=changes;
    if(this->body){
        copy->body=this->body->deep_copy();
    } 
    return copy;
}

void SymTable::add_members(const char* s)
{
    members.push_back(s);
}

vector<const char *> SymTable::get_members()
{
    return members;
}

map<string, IdInfo> SymTable::get_map()
{
    return ids;
}

SymTable::~SymTable()
{
    ids.clear();
}