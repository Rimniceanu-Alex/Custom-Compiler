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
    StringValue = x;
    if (StringValue[0] == '"')
    {
        if (StringValue.length() > 2)
        {
            StringValue = StringValue.substr(1, StringValue.length() - 2);
        }
        else
        {
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
    IdInfo *var = this->get_function_core();
    if (var->name!= "")
    {
        if (var->type == "int")
        {
            cout << "Vizibilitate: [" << get_dom_location() << "] Name : [" << get_dom_name() << "] Return type: [" << var->type << "] Value: [" << var->value.get_int() << "]" << endl;
        }
        else if (var->type == "float")
        {
            cout << "Vizibilitate: [" << get_dom_location() << "] Name : [" << get_dom_name() << "] Return type: [" << var->type << "] Value: [" << var->value.get_float() << "]" << endl;
        }
        else
        {
            cout << "Vizibilitate: [" << get_dom_location() << "] Name : [" << get_dom_name() << "] Return type: [" << var->type << "]" << endl;
        }
        cout << "Params:" << endl;
        auto reverse=get_function_params();
        stack<IdInfo*> parametrii ;
        while(!reverse.empty()){
            parametrii.push(reverse.top());
            reverse.pop();
        }
        while (!parametrii.empty())
        {
            if (parametrii.top()->type == "int")
            {
                cout << parametrii.top()->name << " " << parametrii.top()->type << " " << parametrii.top()->value.get_int() << endl;
            }
            else if (parametrii.top()->type == "float")
            {
                cout << parametrii.top()->name << " " << parametrii.top()->type << " " << parametrii.top()->value.get_float() << endl;
            }
            parametrii.pop();
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

std::stack<SymTable *> SymTable::return_stack_bellow()
{
    return scopes_in_global;
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
        if (c == "class_instance")
        {
            std::stack<SymTable *> Copy_table1;
            SymTable *tempor;
            Copy_table1 = this->above;
            while (!Copy_table1.empty())
            {
                if (strcmp(Copy_table1.top()->get_dom_name(), "global") == 0)
                {
                    tempor = Copy_table1.top();
                }
                Copy_table1.pop();
            }
            std::stack<SymTable *> Copy_table2; // Verificam daca a fost declarata anterior intr-un Domeniu de vizibilitate local sau nu
            Copy_table2 = tempor->scopes_in_global;
            if (Copy_table2.empty())
            {
                cout << "Scope is empty" << endl;
            }
            while (!Copy_table2.empty())
            {
                if (strcmp(Copy_table2.top()->get_dom_name(), a) == 0)
                {
                    //cout << "FOUND IT " << a << endl;
                    map<string, IdInfo> variabile;
                    variabile = Copy_table2.top()->get_map();
                    for (const pair<string, IdInfo> d : variabile)
                    {
                        string buff = b;
                        string name = buff + "." + d.first;
                        this->addVar(d.second.type.c_str(), name.c_str(), d.second.idType.c_str());
                        //cout << d.first << " " << d.second.idType << " " << d.second.type << endl;
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

void SymTable::add_function_params(IdInfo *param)
{
    function_params.push(param);
}

std::stack<IdInfo *> SymTable::get_function_params()
{
    return function_params;
}

IdInfo *SymTable::get_that_variable(string s)
{
    return &ids[s];
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

ASTNode *SymTable::get_body()
{
    return body;
}
IdInfo *SymTable::get_function_core()
{

    return &function_core;
}


map<string, IdInfo> SymTable::get_map()
{
    return ids;
}

SymTable *SymTable::deep_copy() const
{
    //Modificam sa nu fie copii deep la Stackuri/!!!!!!!!!!!!!!!!!!!!!1
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
    std::stack<SymTable *> tmp2 = scopes_in_global;
    std::stack<SymTable *> copy_stack2;
    while (!tmp2.empty())
    {
        SymTable *original = tmp2.top();
        tmp2.pop();
        if (original != nullptr)
        {
            copy_stack2.push(original);//Nu Stiu cum FACI DAR fa-l sa fie DEPP_COPY() tu pe asta vrei sa-l schimbi muie ca de aici acceseaza global0u
        }
        else
            copy_stack2.push(nullptr);
    }
    while (!copy_stack2.empty())
    {
        copy->scopes_in_global.push(copy_stack2.top());
        copy_stack2.pop();
    }
    std::stack<IdInfo *> tmp3 = function_params;
    std::stack<IdInfo *> copy_stack3;
    while (!tmp3.empty())
    {
        IdInfo *original = tmp3.top();
        tmp3.pop();
        if (original != nullptr)
        {
            copy_stack3.push(original->deep_copy());
        }
        else
            copy_stack3.push(nullptr);
    }
    while (!copy_stack3.empty())
    {
        copy->function_params.push(copy_stack3.top());
        copy_stack3.pop();
    }
    copy->changes=changes;
    copy->function_core=function_core;
    if(this->body){
        copy->body=this->body;
    } 
    // cout<<"&&&&&&&&&&&&&&&&&&&&&&&&   AJunge, aici in deep_Copy9)?"<<endl;//Not usable , ii circulara
    return copy;
}

SymTable::~SymTable()
{
    ids.clear();
}

IdInfo *IdInfo::deep_copy() const
{
    IdInfo *copy = new IdInfo();
    copy->idType = idType;
    copy->type = type;
    copy->name = name;
    copy->value = value;
    for (const IdInfo *param : params)
    {
        if (param)
        {
            copy->params.push_back(param->deep_copy());
        }
        else
        {
            copy->params.push_back(nullptr);
        }
    }
    return copy;
}
