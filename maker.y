%{
#include <iostream>
#include <vector>
#include <stack>
#include "SymTable.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);
class SymTable* current;
std::vector<SymTable*> Vector_Tabele;
std::stack<SymTable*> Stack_Table;
int errorCount = 0;
%}
%union {
     char* string;
}
%{
     void check_existance(SymTable*currento, char* a , char* b){
          if(!currento->existsId(b)) {
                    currento->addVar(a,b);
               } else {
                    errorCount++; 
                    yyerror("Variable already defined");
                    }
     }
     %}
%token  BGIN END ASSIGN NR TRUTH_VALUE CBEGIN CEND
%token<string> ID TYPE Class_ID Class_Type
%start progr
%left '+' '-' 
%left '*' '/'
%%
progr :  declarations classes main {if (errorCount == 0) cout<< "The program is correct!" << endl;}
      |  declarations main {if (errorCount == 0) cout<< "The program is correct!" << endl;}
      ;

declarations: fundamental_type arrays
            | fundamental_type
            | arrays
            | /* epsilon */
            ;

fundamental_type : decl           
	      |  fundamental_type decl   
	      ;

decl       : TYPE ID  '(' list_param ')' ';'{ check_existance(Stack_Table.top() , $1 , $2);
                          }
           | TYPE ID ';'{check_existance(Stack_Table.top() , $1 , $2);
                          }
           ;

arrays : arr
       | arrays arr
       ;

arr : TYPE ID arr_list ';' {check_existance(Stack_Table.top() , $1 , $2);
                           }
       ;

arr_list : '[' NR ']' arr_list
         | '[' NR ']'
         ;
classes : class
        | classes class
        ;

class :  Class_Type Class_ID ':' CBEGIN {
                                        check_existance(current , $1 , $2);
                                        class SymTable* class_scope;//TTrebuie sa vad cum propag pointeru tabelului in DECL
                                        class_scope=new SymTable($2);
                                        Stack_Table.push(class_scope);
                                        current=class_scope;
                                        Vector_Tabele.push_back(current);
                                        }
                              declarations CEND ':' {
                                                            Stack_Table.pop();
                                                       current=Stack_Table.top();
                                                    }
      ;

list_param : param
            | list_param ','  param 
            ;

            
param : TYPE ID 
      ; 
      

main : BGIN list END  
     ;
     

list :  statement ';' 
     | list statement ';'
     ;

e : e '+' e   
  | e '*' e   
  | e '-' e   
  | e '/' e
  |'(' e ')' 
  | NR 
  | ID
  ;

statement: ID ASSIGN e	     	 
         | ID '(' call_list ')'
         | ID ASSIGN TRUTH_VALUE
         ;
        
call_list : e
           | call_list ',' e
           | statement
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