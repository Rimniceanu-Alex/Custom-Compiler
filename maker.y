%{
#include <iostream>
#include <cstring>
#include <vector>
#include <stack>
#include "ASTNode.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);
class SymTable* current;
class SymTable* domeniul_caruia_ii_apartine_varabila;
std::vector<SymTable*> Vector_Tabele;
std::stack<SymTable*> Stack_Table;
int errorCount = 0;
%}

%union {
     char* string;
}

%{
     void check_existance_for_declaration(SymTable*currento, const char* a , const char* b , const char* c){ //used for 
          if(!currento->existsId(b)) {
               std::stack<SymTable*> Copy_table; //Verificam daca a fost declarata anterior intr-un Domeniu de vizibilitate local sau nu
               Copy_table=Stack_Table;
               while(!Copy_table.empty()){
                    SymTable* iterator;
                    iterator=Copy_table.top();
                    Copy_table.pop();
                    if(iterator->existsId(b)){
                         errorCount++;
                         char*buff=new char[256];
                         strcpy(buff ,"Variable ");
                         strcat(buff , b);
                         strcat(buff ," already defined"); 
                         yyerror(buff);
                         delete [] buff;
                         buff=nullptr;
                         break;
                    }
               }
                    currento->addVar(a,b, c);
               } else {
                    errorCount++; 
                    char*buff=new char[256];
                    strcpy(buff ,"Variable ");
                    strcat(buff , b);
                    strcat(buff ," already defined"); 
                    yyerror(buff);
                    delete [] buff;
                    buff=nullptr;
                    }
     }

     SymTable* check_existance_for_use(SymTable*currento , const char* b){ //used for 
          if(!currento->existsId(b)) {//Nu exista in domeniul actual =>cautam daca exista mai sus
               int found=0;
               // cout<<"Nu exista in "<<currento->get_dom_name()<<endl;
               std::stack<SymTable*> Copy_table;
               Copy_table=Stack_Table;
               while(!Copy_table.empty()){
                    SymTable* iterator;
                    iterator=Copy_table.top();
                    Copy_table.pop();
                    if(iterator->existsId(b)){
                         found=1;
                         // cout<<"Exista in "<<iterator->get_dom_name()<<endl;
                         return iterator;
                         break;
                    }
               }
               if(found==0){
               errorCount++; 
               char*buff=new char[256];
               strcpy(buff ,"Variable ");
               strcat(buff , b);
               strcat(buff ," doesnt exist"); 
               yyerror(buff);
               delete [] buff;
               buff=nullptr;
               return nullptr;
               }
          } 
          else{
               return currento;
          }
          return nullptr;
     }
     //Functie care verifica daca acea variabila (ID) a fost declarat deja si da eroare daca NU;

     void check_existance_for_class_instance(SymTable* currento, const char* a ,const char* b)
     {
          SymTable* global_domain;
          global_domain=Vector_Tabele[0];
          //std::cout<<"VERIFICARE GLOBAL DOMAIN IN CHECK_EXIStANCE USER"<<endl;
          if(global_domain->existsId(a)){
               //std::cout<<"Exista clasa "<<a<<endl;
               // SymTable* not_used;
               // std::cout<<currento->get_dom_name();
               // not_used=check_existance_for_use(currento, b);
               check_existance_for_declaration(currento , a, b , "class_instance");
               //currento->addVar(a ,b, "class_instance");
               return;
          }
          else{
               errorCount++;
               char*buff=new char[256];
               strcpy(buff ,"Nu exista clasa ");
               strcat(buff , a);
               yyerror(buff);
               delete [] buff;
               buff=nullptr;
          }
     }
     %}

%token  BGIN END ASSIGN NR TRUTH_VALUE CBEGIN CEND REAL CONNECT PRINT TYPE_FUNCTION
%token<string> ID TYPE Class_ID Class_Type IF ELSE WHILE FOR CMP INC DEC
%start progr
%left '+' '-' 
%left '*' '/'
%%
progr :  declarations classes class_initialize_initial main {if (errorCount == 0) cout<< "The program is correct!" << endl;}
      |  declarations main {if (errorCount == 0) cout<< "The program is correct!" << endl;}
      ;

main : BGIN
          {SymTable* currentmain;     
           currentmain = new SymTable("main");
           Stack_Table.push(currentmain);
           current=currentmain;  
           Vector_Tabele.push_back(current);
          }
           list END
                    {Stack_Table.pop();
                     current=Stack_Table.top();
                    }
     ;
declarations: fundamental_type arrays
            | fundamental_type
            | arrays
            | /* epsilon */
            ;

fundamental_type : decl           
	            | fundamental_type decl   
	            ;

decl : TYPE ID  
                { check_existance_for_declaration(current , $1 , $2 , "func");
                  class SymTable* function_scope;
                  function_scope=new SymTable($2);
                  Stack_Table.push(function_scope);
                  current=function_scope;
                  Vector_Tabele.push_back(current);
                } 
               '(' list_param ')' CBEGIN list CEND ';' 
                                   {
                                    Stack_Table.pop();
                                    current=Stack_Table.top();
                                   }
     | TYPE ID ';'{check_existance_for_declaration(current , $1 , $2 , "var");}
     ;

arrays : arr
       | arrays arr
       ;

arr : TYPE ID arr_list ';' {check_existance_for_declaration(current , $1 , $2 , "array");}
    ;

arr_list : '[' NR ']' arr_list
         | '[' NR ']'
         ;

//Listul e folosit in MAIN si in Control functions
list :  statement ';' 
     | list statement ';'
     ;
list_for_else : list 
              | /*epsilon*/
              ;
statement: ID ASSIGN {domeniul_caruia_ii_apartine_varabila=check_existance_for_use(current , $1 );
                      if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                         {
                              if (domeniul_caruia_ii_apartine_varabila->getValueType($1)=="bool")
                              {
                                   {errorCount++; 
                                    char*buff=new char[256];
                                    strcpy(buff ,"Cannot assing arithmetic expression to ");
                                    strcat(buff , $1);
                                    strcat(buff ," which is a bool"); 
                                    yyerror(buff);
                                    delete [] buff;
                                    buff=nullptr;
                                   }
                              }
                         }
                     } 
                         e 	 
         | ID {
               domeniul_caruia_ii_apartine_varabila=check_existance_for_use(current , $1 );
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
                    }
              } 
                '(' call_list ')' //Apel de functie
         | ID ASSIGN {
                         domeniul_caruia_ii_apartine_varabila=check_existance_for_use(current , $1);
                     } 
                         TRUTH_VALUE {
                                        if(domeniul_caruia_ii_apartine_varabila!=nullptr){
                                             if (domeniul_caruia_ii_apartine_varabila->getValueType($1)!="bool")
                                                  {
                                                       errorCount++; 
                                                       char*buff=new char[256];
                                                       strcpy(buff ,"Variable ");
                                                       strcat(buff , $1);
                                                       strcat(buff ," is not a bool"); 
                                                       yyerror(buff);
                                                       delete [] buff;
                                                       buff=nullptr;
                                                  }   
                                        }
                                     }
         | WHILE '(' condition_chain ')' CBEGIN 
                                   {
                                     SymTable* currentCTRL;     
                                     currentCTRL = new SymTable($1);
                                     Stack_Table.push(currentCTRL);
                                     current=currentCTRL;
                                     Vector_Tabele.push_back(current);
                                   } 
                                             list CEND
                                                       {
                                                            Stack_Table.pop();
                                                            current=Stack_Table.top();
                                                       }
         | IF '(' condition_chain ')' CBEGIN 
                                        {
                                          SymTable* currentCTRL;     
                                          currentCTRL = new SymTable($1);
                                          Stack_Table.push(currentCTRL);
                                          current=currentCTRL;
                                          Vector_Tabele.push_back(current);
                                        } 
                                             list CEND
                                                       {
                                                         Stack_Table.pop();
                                                         current=Stack_Table.top();
                                                       }
                                             ELSE CBEGIN
                                        {
                                          SymTable* currentCTRL;     
                                          currentCTRL = new SymTable($1);
                                          Stack_Table.push(currentCTRL);
                                          current=currentCTRL;
                                          Vector_Tabele.push_back(current);
                                        }
                                                        list_for_else CEND
                                        {
                                          Stack_Table.pop();
                                          current=Stack_Table.top();
                                        }
         | FOR '(' ID ASSIGN 
               {
                 domeniul_caruia_ii_apartine_varabila=check_existance_for_use(current , $3 );
                 if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                    {
                      if (domeniul_caruia_ii_apartine_varabila->getValueType($3)=="bool")
                         {
                           errorCount++; 
                           char*buff=new char[256];
                           strcpy(buff ,"Cannot assing arithmetic expression to ");
                           strcat(buff , $3);
                           strcat(buff ," which is a bool"); 
                           yyerror(buff);
                           delete [] buff;
                           buff=nullptr;     
                         }
                    }
               } 
                                   e ';' e CMP e ';' ID 
               {
                 if(strcmp($3 , $12)!=0)
                    {
                      errorCount++;
                      char*buff=new char[256];
                      strcpy(buff ,"The variable you're trying to inc/dec ");
                      strcat(buff , $12);
                      strcat(buff ," is different from the one you assigned "); 
                      strcat(buff , $3);
                      yyerror(buff);
                      delete [] buff;
                      buff=nullptr;
                    }
               }
                                                            inc_dec ';' ')' CBEGIN 
               {
                 SymTable* currentCTRL;     
                 currentCTRL = new SymTable($1);
                 Stack_Table.push(currentCTRL);
                 current=currentCTRL;
                 Vector_Tabele.push_back(current);
               } 
                                                                                    list CEND
               {
                 Stack_Table.pop();
                 current=Stack_Table.top();
               }
         | declarations_interior //trebuiau puse ;; daca nu clonam declarations
         | PRINT '(' e ')' //Nu stiu cum s-o fac sa afisze
         | TYPE_FUNCTION  '(' e ')'
         ;

inc_dec: INC
       | DEC
       ;

declarations_interior: fundamental_type_interior
                     | arrays_interior
                     | class_initialize_interior
                     ;          

fundamental_type_interior : decl_interior         
	                     |  fundamental_type_interior decl_interior   
	                     ;

decl_interior       : TYPE ID  
                        { 
                           check_existance_for_declaration(current , $1 , $2 , "func");
                           class SymTable* function_scope;
                           function_scope=new SymTable($2);
                           Stack_Table.push(function_scope);
                           current=function_scope;
                           Vector_Tabele.push_back(current);
                        } 
                              '(' list_param ')' 
                        {
                           Stack_Table.pop();
                           current=Stack_Table.top();
                        }
                    | TYPE ID {check_existance_for_declaration(current , $1 , $2 , "var");}
                    ;

arrays_interior : arr_interior
                | arrays_interior arr_interior
                ;

arr_interior : TYPE ID arr_list {check_existance_for_declaration(current , $1 , $2 , "array");}
             ;

condition_chain:  condition 
               |  condition_chain CONNECT condition 
               |  e CMP e
               |  ID {
                         domeniul_caruia_ii_apartine_varabila=check_existance_for_use(current , $1 );
                         if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                         {
                              if (domeniul_caruia_ii_apartine_varabila->getValueType($1)!="bool")
                              {
                                   errorCount++; 
                                   char*buff=new char[256];
                                   strcpy(buff ,"Cannot use ");
                                   strcat(buff , $1);
                                   strcat(buff ," as a condition for the control statement because it's not a bool"); 
                                   yyerror(buff);
                                   delete [] buff;
                                   buff=nullptr;     
                              }
                         }
                    }
               | TRUTH_VALUE
               ;

condition: '(' e CMP e ')'
         ;

classes : class
        | classes class
        ;
                                        
class :  Class_Type Class_ID ':' CBEGIN 
          {
            check_existance_for_declaration(current , $1 , $2 , "class");
            class SymTable* class_scope;
            class_scope=new SymTable($2);
            Stack_Table.push(class_scope);
            current=class_scope;
            Vector_Tabele.push_back(current);
          }
                                        declarations CEND ';' 
          {
            Stack_Table.pop();
            current=Stack_Table.top();
          }
      ;

class_initialize_initial: class_initialize
                        | /*epsilon*/
                        ;


class_initialize: class_instance
                | class_initialize class_instance
                ;

class_initialize_interior: class_instance_interior
                | class_initialize_interior class_instance_interior
                ;

class_instance : Class_ID ID {check_existance_for_class_instance(current , $1 , $2);} ';'
               ;
class_instance_interior : Class_ID ID {check_existance_for_class_instance(current , $1 , $2);}
                        ;

list_param : param 
           | list_param ','  param 
           ;

            
param : TYPE ID {check_existance_for_declaration(current , $1 , $2 ,"var");}
      ; 
      
call_list : e
          | call_list ',' e
          | statement_for_call_list
          | call_list ',' statement_for_call_list
          ;

statement_for_call_list: ID ASSIGN      
                         {
                              domeniul_caruia_ii_apartine_varabila=check_existance_for_use(current , $1 );
                              if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                                   {
                                        if (domeniul_caruia_ii_apartine_varabila->getValueType($1)=="bool")
                                             {
                                                  {errorCount++; 
                                                  char*buff=new char[256];
                                                  strcpy(buff ,"Cannot assing arithmetic expression to ");
                                                  strcat(buff , $1);
                                                  strcat(buff ," which is a bool"); 
                                                  yyerror(buff);
                                                  delete [] buff;
                                                  buff=nullptr;
                                                  }
                                             }
                                   }
                         } 
                                        e 	 
                         | ID {
                                   domeniul_caruia_ii_apartine_varabila=check_existance_for_use(current , $1 );
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
                                        }
                              } 
                              '(' call_list ')' //Apel de functie
                         | ID ASSIGN 
                                   {domeniul_caruia_ii_apartine_varabila=check_existance_for_use(current , $1);} 
                                        TRUTH_VALUE {
                                                       if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                                                       {
                                                            if (domeniul_caruia_ii_apartine_varabila->getValueType($1)!="bool")
                                                                 {
                                                                      errorCount++; 
                                                                      char*buff=new char[256];
                                                                      strcpy(buff ,"Variable ");
                                                                      strcat(buff , $1);
                                                                      strcat(buff ," is not a bool"); 
                                                                      yyerror(buff);
                                                                      delete [] buff;
                                                                      buff=nullptr;
                                                                 }   
                                                       }
                                                  }
                         ;


e : e '+' e   {}
  | e '*' e   {}
  | e '-' e   {}
  | e '/' e   {}
  |'(' e ')'  {}
  | NR        {}
  | REAL      {}
  | ID        {domeniul_caruia_ii_apartine_varabila=check_existance_for_use(current , $1);}
  ;

        
%%
void yyerror(const char * s){
     cout << "error:" << s << " at line: " << yylineno << endl;
}

int main(int argc, char** argv){
     yyin=fopen(argv[1],"r");
     current = new SymTable("global");
     Stack_Table.push(current);
     Vector_Tabele.push_back(current);
     yyparse();
     cout << "Variables:" <<endl;
     for (auto i : Vector_Tabele){
          i->printVars();
          delete i;
     }
} 