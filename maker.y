%{
#include <iostream>
#include <cstring>
#include <vector>
#include <stack>
#include <stdbool.h>
#include <fstream>
#include "ASTNode.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);
class SymTable* current;
class SymTable* domeniul_caruia_ii_apartine_varabila;
std::vector<SymTable*> Vector_Tabele;
int errorCount = 0;
char* Denumire_apelant=nullptr;
std::vector<IdInfo*> param_checker;
int hard_copy_counter=0;
%}

%union {
     char* string;
     class ASTNode* ListOfNodes;
}

%{
     %}

%token  BGIN END CBEGIN CEND REAL
%token<string> ID TYPE Class_ID Class_Type IF ELSE WHILE FOR CMP NR CONNECT VOID RETURN ASSIGN TRUTH_VALUE PRINT TYPE_FUNCTION STRING
%type<ListOfNodes> e y boolean_expression assign_node list statement function_call_node while_node print_node list_main statement_main if_node for_node expression_for type_fucntion_node
%start progr
%left '+' '-' 
%left '*' '/'
%%
progr :  classes global_classes_declaration class_initialize_initial main {if (errorCount == 0) cout<< "The program is correct!" << endl;}
      |  global_classes_declaration main {if (errorCount == 0) cout<< "The program is correct!" << endl;}
      ;

main : BGIN
          {SymTable* currentmain;     
           currentmain = new SymTable("main");
           currentmain->assign_stack_above(current->return_stack_above());
           currentmain->add_above(current);
           current=currentmain;  
           Vector_Tabele.push_back(current);
          }
           list_main{current->set_body($3);
               } END
                    {
                     current=current->next_domain_scope();
                    }
     ;
global_classes_declaration: variables_generator functions_generator
                          | variables_generator
                          | functions_generator
                          | /*epsilon*/
                          ;

functions_generator : functions_generator functions
                    | functions
                    ;
functions : TYPE ID  
                { current->check_existance_for_declaration($1, $2 , "func" , errorCount , yylineno);
                  class SymTable* function_scope;
                  function_scope=new SymTable($2);
                  function_scope->assign_stack_above(current->return_stack_above());
                  function_scope->add_above(current);
                  current->add_bellow(function_scope);
                  current=function_scope;
                  Vector_Tabele.push_back(current);
                  //cout<<endl<<"Scope-ul functiei "<<current->get_dom_name()<<endl;
                } 
               '(' list_param ')' CBEGIN list{    
                                                       } RETURN e ';' {
                                                            // if(strcmp($1, $11->get_type_for_main())==0){
                                                            //      if(strcmp($11->get_type_for_main() , "int")==0){
                                                            //           class Value val($11->evaluatei());
                                                            //           current->next_domain_scope()->set_value($2 , val );  
                                                            //      }
                                                            //      else if(strcmp($11->get_type_for_main() , "float")==0){
                                                            //           class Value val($11->evaluatef());
                                                            //           current->next_domain_scope()->set_value($2 , val ); 
                                                            //      }
                                                            //      else{
                                                            //           errorCount++;
                                                            //           yyerror("Unkown Type of Function");
                                                            //      }
                                                            // }
                                                            // else{
                                                            //      errorCount++;
                                                            //      yyerror("The Return type and the function type DON'T MATCH");
                                                            // }
                                                       } CEND ';' 
                                                                           {
                                                                           class ASTNode* func_return;
                                                                           func_return=new ASTNode($2 , "<-" , $11 ,current, &errorCount, yylineno);
                                                                           class ASTNode* list_return;
                                                                           list_return=new ASTNode("sequence" , $8 , func_return , &errorCount , current);
                                                                           current->set_body(list_return);
                                                                           current=current->next_domain_scope();
                                                                           }
          | VOID ID  
                { current->check_existance_for_declaration($1, $2 , "func" , errorCount , yylineno);
                  class SymTable* function_scope;
                  function_scope=new SymTable($2);
                  function_scope->assign_stack_above(current->return_stack_above());
                  function_scope->add_above(current);
                  current->add_bellow(function_scope);
                  current=function_scope;
                  Vector_Tabele.push_back(current);
                } 
               '(' list_param ')' CBEGIN list{    current->set_body($8);} CEND ';' 
                                   {
                                    current=current->next_domain_scope();
                                   }
          ;

variables_generator : variables_generator variables
                    | variables
                    ;
variables: fundamentals
         | arr
         ;

fundamentals : TYPE ID ';'{current->check_existance_for_declaration($1, $2 , "var" , errorCount , yylineno);}
     ;

arr : TYPE ID arr_list ';' {current->check_existance_for_declaration($1, $2 , "array" , errorCount , yylineno);}
    ;

arr_list : '[' NR ']' arr_list
         | '[' NR ']'
         ;
variables_interior: fundamentals_interior
         | arr_interior
         ;

fundamentals_interior : TYPE ID {current->check_existance_for_declaration($1, $2 , "var" , errorCount , yylineno);}
     ;

arr_interior : TYPE ID arr_list  {current->check_existance_for_declaration($1, $2 , "array" , errorCount , yylineno);}
    ;
//Listul e folosit in MAIN , Control functions , definitii de functii
list_main :  statement_main ';' {$$=new ASTNode("final_sequence" , $1 , &errorCount , yylineno, current);}
          |  statement_main ';' list_main {$$=new ASTNode("sequence" , $1 ,$3 , &errorCount , current);}
          ;
list :  statement ';' {$$=new ASTNode("final_sequence" , $1 , &errorCount , yylineno, current);}
     |  statement ';' list {$$=new ASTNode("sequence" , $1 ,$3 , &errorCount , current);}
     ;
statement: assign_node {$$=$1;}
         |function_call_node{$$=$1;} 
         |while_node{$$=$1;}
         |if_node{$$=$1;}
         |for_node{$$=$1;}
         | declarations_interior
         | print_node{$$=$1;}
         | type_fucntion_node{$$=$1;}
         ;

statement_main: assign_node {$$=$1;$$->run();}
         |function_call_node{$$=$1;$$->run();} 
         |while_node{$$=$1;$$->run();}
         |if_node{$$=$1;$$->run();}
         |for_node{$$=$1;$$->run();}
         | declarations_interior
         | print_node{$$=$1;$$->run();}
         | type_fucntion_node{$$=$1;$$->run();}
         ;


assign_node:ID ASSIGN e {
                         $$=new ASTNode($1 , "<-" , $3 ,current, &errorCount, yylineno);
                         }
           |ID ASSIGN boolean_expression {
                         $$=new ASTNode($1 , "<-" , $3 ,current, &errorCount, yylineno);
                         }
           |ID'.'ID ASSIGN e {
                         string buff1=$1;
                         string buff3=$3;
                         string class_mem=buff1+'.'+buff3;
                         $$=new ASTNode(class_mem , "<-" , $5 ,current, &errorCount, yylineno);
                         }
           |ID'.'ID ASSIGN boolean_expression {
                         string buff1=$1;
                         string buff3=$3;
                         string class_mem=buff1+'.'+buff3;
                         $$=new ASTNode(class_mem , "<-" , $5 ,current, &errorCount, yylineno);
                         }
           ;
function_call_node:ID // NU folosesti SymTable-u functiei , ce variabila care reprezinta fucntia
                    //TO DO TO DO TO DO FIX THISSS Plus ii fucked cand apelam o metoda.
               {
                    SymTable* hard_copy=current->deep_copy();
                    ++hard_copy_counter;
               domeniul_caruia_ii_apartine_varabila=hard_copy->check_existance_for_use($1 , errorCount , yylineno);
               if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                    {
                      if(domeniul_caruia_ii_apartine_varabila->getValue_IDType($1)!="func")
                           {
                             errorCount++; 
                             char*buff=new char[256];
                             strcpy(buff ,"ID ");
                             strcat(buff , $1);
                             strcat(buff ," exists but is NOT a funciton"); 
                             yyerror(buff);
                             delete [] buff;
                             buff=nullptr;
                           }
                       else{
                         Denumire_apelant=new char[256];
                         strcpy(Denumire_apelant , $1);
                         param_checker=domeniul_caruia_ii_apartine_varabila->get_params($1);
                         for(auto i: param_checker){
                              //cout<<i->name<<i->type<<endl;
                         }
                         for (auto i : Vector_Tabele){
                              if(strcmp(i->get_dom_name(), $1)==0){
                              domeniul_caruia_ii_apartine_varabila=i;
                              }
                         }    
                       }
                    }
              } 
                '(' call_list ')'{delete[] Denumire_apelant;
                                  Denumire_apelant=nullptr;
                                  if(!param_checker.empty()){
                                   errorCount++;
                                   yyerror("Not enough parameters in function call");
                                  }
                                  $$=new ASTNode("func_call" , domeniul_caruia_ii_apartine_varabila->get_body_copy() , domeniul_caruia_ii_apartine_varabila->next_domain_scope()->get_that_variable($1) , &errorCount , yylineno , current);//S-ar putea s- schimb sa semene cu o expresie    //COPIE??
                                 }
                                 //Pentru call list m nodul din stanga trebuie sa VERIFICE faptul ca parametrii sunt buni si sa le dea noua valoare , nodul din dreapta tre sa execute corpul functiei
                  | ID'.'ID
               {
                    string buff1=$1;
                    string buff3=$3;
                    string class_mem=buff1+'.'+buff3;
                    SymTable* hard_copy=current->deep_copy();
                    ++hard_copy_counter;
               domeniul_caruia_ii_apartine_varabila=hard_copy->check_existance_for_use(class_mem.c_str() , errorCount , yylineno);
               if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                    {
                      if(domeniul_caruia_ii_apartine_varabila->getValue_IDType(class_mem.c_str())!="func")
                           {
                             errorCount++; 
                             char*buff=new char[256];
                             strcpy(buff ,"ID ");
                             strcat(buff , class_mem.c_str());
                             strcat(buff ," exists but is NOT a funciton"); 
                             yyerror(buff);
                             delete [] buff;
                             buff=nullptr;
                           }
                       else{
                         SymTable* tmp;
                         tmp=Vector_Tabele[0];
                         stack<SymTable*>copy_stack=tmp->return_stack_bellow();
                         //cout<<"++++++++++++++"<<current->get_IdInfo_Type($1)<<endl;
                         while(!copy_stack.empty()){
                              if(strcmp(copy_stack.top()->get_dom_name(),(current->get_IdInfo_Type($1)).c_str())==0){
                                   tmp=copy_stack.top();
                                   domeniul_caruia_ii_apartine_varabila=tmp;
                              }
                              copy_stack.pop();
                         }
                         Denumire_apelant=new char[256];
                         strcpy(Denumire_apelant , class_mem.c_str());
                         //Tre as verificam Scopeurile pana ajungem la SCopeul fucntiei DIN clasa
                         //cout<<"++++++++++++"<<tmp->get_dom_name()<<endl;
                         // cout<<"---------"<<domeniul_caruia_ii_apartine_varabila->get_dom_name()<<endl;
                         param_checker=domeniul_caruia_ii_apartine_varabila->get_params($3);
                         if(param_checker.empty()){
                              cout<<"Fucker's empty from the start"<<endl;
                         }
                         for(auto i: param_checker){
                              // cout<<"!!!!!!!!!!!!!!!!!!!!!"<<i->name<<i->type<<endl;
                         }
                         for (auto i : Vector_Tabele){
                              if(strcmp(i->get_dom_name(), $3)==0){
                              domeniul_caruia_ii_apartine_varabila=i;
                              }
                         }    
                       }
                    }
              } 
                '(' call_list ')'{
                                   string buff1=$1;
                                   string buff3=$3;
                                   string class_mem=buff1+'.'+buff3;
                                  delete[] Denumire_apelant;
                                  Denumire_apelant=nullptr;
                                  if(!param_checker.empty()){
                                   errorCount++;
                                   yyerror("Not enough parameters in function call");
                                  }
                                  $$=new ASTNode("func_call" , domeniul_caruia_ii_apartine_varabila->get_body_copy() , domeniul_caruia_ii_apartine_varabila->next_domain_scope()->get_that_variable(class_mem.c_str()) , &errorCount , yylineno , current);//S-ar putea s- schimb sa semene cu o expresie    //COPIE??
                                 }
                                 //Pentru call list m nodul din stanga trebuie sa VERIFICE faptul ca parametrii sunt buni si sa le dea noua valoare , nodul din dreapta tre sa execute corpul functiei
                  ;
while_node: WHILE '(' boolean_expression  ')' CBEGIN 
               {
                    SymTable* currentCTRL;     
                    currentCTRL = new SymTable($1);
                    currentCTRL->assign_stack_above(current->return_stack_above());
                    currentCTRL->add_above(current);
                    current=currentCTRL;
                    Vector_Tabele.push_back(current);
               } 
                         list{
                              
                              current->set_body($7);
                              }
                              CEND
                                   {
                                        $$=new ASTNode("while" , $3 , $7 , &errorCount , yylineno , current);
                                        current=current->next_domain_scope();
                                   }
          ;
if_node: IF '(' boolean_expression ')'CBEGIN 
                    {
                         SymTable* currentCTRL;     
                         currentCTRL = new SymTable($1);
                         currentCTRL->assign_stack_above(current->return_stack_above());
                         currentCTRL->add_above(current);
                         current=currentCTRL;
                         Vector_Tabele.push_back(current);
                    } 
                         list{
                              current->set_body($7);
                         } CEND
                                   {
                                        current=current->next_domain_scope();
                                   }
                                   ELSE CBEGIN
                              {
                                   SymTable* currentCTRL;     
                                   currentCTRL = new SymTable($1);
                                   currentCTRL->assign_stack_above(current->return_stack_above());
                                   currentCTRL->add_above(current);
                                   current=currentCTRL;
                                   Vector_Tabele.push_back(current);
                              }
                                                  list{
                                                       current->set_body($14);
                                                  } CEND
                              {
                                   class ASTNode* combine;
                                   combine=new ASTNode($7 , $14 , &errorCount);
                                   $$=new ASTNode("if" , $3 , combine , &errorCount , yylineno , current);
                                   current=current->next_domain_scope();
                              }
       ;
for_node: FOR '(' assign_node ';' boolean_expression ';' expression_for ';' ')' CBEGIN 
               {
                 SymTable* currentCTRL;     
                 currentCTRL = new SymTable($1);
                 currentCTRL->assign_stack_above(current->return_stack_above());
                 currentCTRL->add_above(current);
                 current=currentCTRL;
                 Vector_Tabele.push_back(current);
               } 
                                                                                    list{current->set_body($12);} CEND
               {
                 class ASTNode* combination1;
                 combination1=new ASTNode($3 , $5 , &errorCount);
                 class ASTNode* combination2;
                 combination2=new ASTNode($12 , $7 , &errorCount);
                 $$=new ASTNode("for", combination1 , combination2 , &errorCount , yylineno , current);
                 current=current->next_domain_scope();
               }
          ;
print_node: PRINT '(' e ')'{$$=new ASTNode($1 , $3 , &errorCount , yylineno);}//Vezi ca NU da print bine la variabile , s-ar putea sa trebuaisca sa folosesti SYMTable
          ;
type_fucntion_node:TYPE_FUNCTION  '(' e ')' {$$=new ASTNode($1 , $3 , &errorCount , yylineno);}
expression_for:assign_node{$$=$1;}
              |e {$$=$1;}
              ;

declarations_interior: variables_interior
                     | class_initialize_interior
                     ;          

boolean_expression: '(' boolean_expression ')' {$$=$2;}
               |  '('boolean_expression')' CONNECT '('boolean_expression')' {$$=new ASTNode($4 , $2 , $6 , &errorCount);}
               |  y {$$=$1;}
               ;
y : e CMP e {$$=new ASTNode($2 , $1 , $3 , &errorCount);}  
  ;
classes : class
        | classes class
        ;
                                        
class :  Class_Type Class_ID ':' CBEGIN 
          {
            current->check_existance_for_declaration($1, $2 , "class" , errorCount , yylineno);
            SymTable* class_scope;
            class_scope=new SymTable($2);
            class_scope->assign_stack_above(current->return_stack_above());
            class_scope->add_above(current);
            current->add_bellow(class_scope);
            current=class_scope;
            Vector_Tabele.push_back(current);
          }
                                        global_classes_declaration CEND ';' 
          {
            current=current->next_domain_scope();
          }
      ;

class_initialize_initial: class_initialize
                        | /*epsilon*/
                        ;


class_initialize: class_instance
                | class_initialize class_instance
                ;

class_initialize_interior: class_instance_interior
                         ;

class_instance : Class_ID ID {current->check_existance_for_class_instance($1 , $2, errorCount , yylineno);}     ';'
               ;
class_instance_interior : Class_ID ID {current->check_existance_for_class_instance($1 , $2, errorCount , yylineno);}
                        ;

list_param : param 
           | list_param ','  param 
           ;

            
param : TYPE ID {current->check_existance_for_declaration($1, $2 , "param" , errorCount , yylineno);
                 current->next_domain_scope()->add_params(current->get_dom_name(), current->get_that_variable($2));//adaugam in parametrii varaibilei ID FUNC care e declarata in domeniu de deasupra
                }
      ; 
     //TO DO: Apel de functie in apel de functie Small issue
call_list : e 
               {
                    if(param_checker.empty()){
                         errorCount++;
                         yyerror("The number of parameters in the call doesnt match the number of params in the fucntion");
                    }
                    else{
                    class IdInfo* temp;
                    temp=*(param_checker.begin());
                         if(temp->type==$1->get_type()){
                              if(strcmp($1->get_type_for_main() , "int")==0){
                                   class Value val($1->evaluatei());
                                   domeniul_caruia_ii_apartine_varabila->set_value((*temp).name.c_str() , val);
                                   param_checker.erase(param_checker.begin());
                              }
                              else if(strcmp($1->get_type_for_main() , "float")==0){
                                   class Value val($1->evaluatef());
                                   domeniul_caruia_ii_apartine_varabila->set_value((*temp).name.c_str() , val);
                                   param_checker.erase(param_checker.begin());
                              }
                              else{
                                   errorCount++;
                                   yyerror("Unkown Parameter type");
                              }
                         }
                         else{
                              errorCount++;
                              yyerror("Parameter missmatch");
                              param_checker.erase(param_checker.begin());
                         }
                    }
               }
          | call_list ',' e{
               if(param_checker.empty()){
                    errorCount++;
                    yyerror("The number of parameters in the call doesnt match the number of params in the fucntion");
               }
               else{
                    class IdInfo* temp;
                    temp=*(param_checker.begin());
                    if(temp->type==$3->get_type()){
                         if(strcmp($3->get_type_for_main() , "int")==0){
                              class Value val($3->evaluatei());
                              domeniul_caruia_ii_apartine_varabila->set_value((*temp).name.c_str() , val);
                              param_checker.erase(param_checker.begin());
                              }
                         else if (strcmp($3->get_type_for_main() , "float")==0){
                              class Value val($3->evaluatef());
                              domeniul_caruia_ii_apartine_varabila->set_value((*temp).name.c_str() , val);
                              param_checker.erase(param_checker.begin());
                         }
                         else{
                                   errorCount++;
                                   yyerror("Unkown Parameter type");
                              }
                    }
                    else{
                              errorCount++;
                              yyerror("Parameter missmatch");
                              param_checker.erase(param_checker.begin());
                         }
                    }
               }
          ;

e : e '+' e   {$$=new ASTNode("+" , $1 , $3 , &errorCount);}
  | e '*' e   {$$=new ASTNode("*" , $1 , $3 , &errorCount);}
  | e '-' e   {$$=new ASTNode("-" , $1 , $3 , &errorCount);}
  | e '/' e   {$$=new ASTNode("/" , $1 , $3 , &errorCount);}
  |'(' e ')'  {$$=$2;}
  | TRUTH_VALUE{    
                    if(strcmp($1 ,"TRUE")==0){
                         Value val(true);     
                         $$=new ASTNode(val , "bool", &errorCount);
                    }
                    else{
                         Value val(false);   
                         $$=new ASTNode(val , "bool", &errorCount);
                    }
               }
  | NR        {Value val(atoi(yytext));
               $$=new ASTNode(val , "int" , &errorCount);}//MERGE
  | REAL      {Value val((float)atof(yytext));
               $$=new ASTNode(val , "float" , &errorCount);}
  | ID        {
               domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use($1 , errorCount , yylineno);
               $$=new ASTNode( domeniul_caruia_ii_apartine_varabila->get_that_variable($1), &errorCount , yylineno);//??? MAybe it will work like this?
               //$$=new ASTNode($1 , current , errorCount , yylineno); FUCK THIS LINE IN PARTICULAR (AM TRECUT PRIN MUSCIAL DE 3 ORI LA ASTA)
              }
  | ID'.'ID {
               string buff1=$1;
               string buff3=$3;
               string class_mem=buff1+'.'+buff3;
               domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use(class_mem.c_str() , errorCount , yylineno);
               $$=new ASTNode( domeniul_caruia_ii_apartine_varabila->get_that_variable(class_mem.c_str()), &errorCount , yylineno);
               }
  |function_call_node{$$=$1;};
  |STRING      {Value val($1);     
               $$=new ASTNode(val , "string" , &errorCount);}
  ;
        
%%
void yyerror(const char * s){
     cout << "error:" << s << " at line: " << yylineno << endl;
}
     
int main(int argc, char** argv){
     yyin=fopen(argv[1],"r");
     current = new SymTable("global");
     Vector_Tabele.push_back(current);
     yyparse();
     streambuf* StandardOutput = std::cout.rdbuf();
     ofstream file("global.txt");
     if (!file.is_open()) {
          cout<< "Error opening file" << endl;
          return 1;
     }
     cout.rdbuf(file.rdbuf());
     for (auto i : Vector_Tabele){
          if(i->get_dom_name()=="global"){
          i->printVars();
          }
     }
     file.close();
     cout.rdbuf(StandardOutput);
     file.open("Other_scope.txt");
     if (!file.is_open()) {
          cout<< "Error opening file" << endl;
          return 1;
     }
     cout.rdbuf(file.rdbuf());
     for (auto i : Vector_Tabele){
          if(i->get_dom_name()!="global"){
          i->printVars();
          }
     }
     file.close();
     cout.rdbuf(StandardOutput);
     file.open("fucntions.txt");
     if (!file.is_open()) {
          cout<< "Error opening file" << endl;
          return 1;
     }
     cout.rdbuf(file.rdbuf());
     for (auto i : Vector_Tabele){
          i->printFunct();
          delete i;
     }
     file.close();
     cout.rdbuf(StandardOutput);
} 
//TO DO : Baga apelul de functie in AST
//1TO DO: TRANZITIE AST ;(
//2TO DO: Fa sa poti accesa Membrii unei clase , si dupa fiecare instanta sa aiba o copie independenta a acelor Membrii