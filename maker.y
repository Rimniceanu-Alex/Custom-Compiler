%{
#include <iostream>
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
                         yyerror("Variable already defined");
                         break;
                    }
               }
                    currento->addVar(a,b, c);
               } else {
                    errorCount++; 
                    yyerror("Variable already defined");
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
               yyerror("Variable noot defined in scope");
               return nullptr;
               }
          } 
          else{
               return currento;
          }
          return nullptr;
     }
     //Functie care verifica daca acea variabila (ID) a fost declarat deja si da eroare daca NU;
     %}

%token  BGIN END ASSIGN NR TRUTH_VALUE CBEGIN CEND REAL CONNECT CMP
%token<string> ID TYPE Class_ID Class_Type CTRL
%start progr
%left '+' '-' 
%left '*' '/'
%%
progr :  declarations classes main {if (errorCount == 0) cout<< "The program is correct!" << endl;}
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
               '(' list_param ')' ';'
                                   {
                                    Stack_Table.pop();
                                    current=Stack_Table.top();
                                   }
     | TYPE ID ';'{check_existance_for_declaration(current , $1 , $2 , "var");}
     ;

arrays : arr
       | arrays arr
       ;

arr : TYPE ID arr_list ';' {check_existance_for_declaration(current , $1 , $2 , "pointer");}
    ;

arr_list : '[' NR ']' arr_list
         | '[' NR ']'
         ;

//Listul e ffolosie in MAIN si in Control functions
list :  statement ';' 
     | list statement ';'
     ;
//Trebuie sa fac si PENTRU membrii de clase ,PLUUS sa fac si pentur apeluri de functie din clase; FUCK
statement: ID ASSIGN {domeniul_caruia_ii_apartine_varabila=check_existance_for_use(current , $1 );} e {cout<<domeniul_caruia_ii_apartine_varabila->getValue_IDType($1)<<"   "<<$1<<"   "<<domeniul_caruia_ii_apartine_varabila->get_dom_name()<<endl;}  	 
         | ID {domeniul_caruia_ii_apartine_varabila=check_existance_for_use(current , $1 );
               if(domeniul_caruia_ii_apartine_varabila->getValue_IDType($1)!="func")
                    {errorCount++; 
                     yyerror("ID exists but is NOT a function");
                    }
              } 
                '(' call_list ')' //Apel de functie
         | ID ASSIGN {domeniul_caruia_ii_apartine_varabila=check_existance_for_use(current , $1);} TRUTH_VALUE {if (domeniul_caruia_ii_apartine_varabila->getValueType($1)!="bool")
                                    {
                                        errorCount++; 
                                        yyerror("Variable is not bool");
                                    }   
                                 }
         | CTRL  condition_chain  CBEGIN 
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
         ;
         
declarations_interior: fundamental_type_interior arrays_interior
                     | fundamental_type_interior
                     | arrays_interior
                     ;

fundamental_type_interior : decl_interior         
	                     |  fundamental_type_interior decl_interior   
	                     ;

decl_interior       : TYPE ID  
                        { check_existance_for_declaration(current , $1 , $2 , "func");
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

arr_interior : TYPE ID arr_list {check_existance_for_declaration(current , $1 , $2 , "pointer");
                           }
             ;

condition_chain: '(' condition ')'
               | '(' condition_chain CONNECT condition ')'
               ;

condition: e CMP e
         ;

classes : class
        | classes class
        ;
                                        
class :  Class_Type Class_ID ':' CBEGIN {
                                        check_existance_for_declaration(current , $1 , $2 , "class");
                                        class SymTable* class_scope;//TTrebuie sa vad cum propag pointeru tabelului in DECL
                                        class_scope=new SymTable($2);
                                        Stack_Table.push(class_scope);
                                        current=class_scope;
                                        Vector_Tabele.push_back(current);
                                        }
                              declarations CEND ';' {
                                                            Stack_Table.pop();
                                                       current=Stack_Table.top();
                                                    }
      ;

list_param : param 
           | list_param ','  param 
           ;

            
param : TYPE ID {check_existance_for_declaration(current , $1 , $2 ,"var");}
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

        
call_list : e
           | call_list ',' e
           | ID '(' call_list ')' //Apel de functie
           | call_list ',' ID '(' call_list ')' //Apel de functie
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
     Stack_Table.push(current);
     cout << "Variables:" <<endl;
     for (auto i : Vector_Tabele){
          i->printVars();
          delete i;
     }
} 