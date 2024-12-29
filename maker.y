%{
#include <iostream>
#include <cstring>
#include <vector>
#include <stack>
#include <stdbool.h>
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
%}

%union {
     char* string;
     class ASTNode* ListOfNodes;
}

%{
     %}

%token  BGIN END CBEGIN CEND REAL TYPE_FUNCTION
%token<string> ID TYPE Class_ID Class_Type IF ELSE WHILE FOR CMP INC DEC NR CONNECT VOID RETURN ASSIGN TRUTH_VALUE PRINT
%type<ListOfNodes> e y boolean_expression assign_node list statement function_call_node while_node print_node list_main statement_main
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
           //current->add_above(currentmain);
           currentmain->assign_stack_above(current->return_stack_above());
           currentmain->add_above(current);
           current=currentmain;  
           Vector_Tabele.push_back(current);
          }
           list_main{current->set_body($3);
               //$3->run();
               } END
                    {
                     //current->remove_from_above();//Scoatem din currentmain
                     current=current->next_domain_scope();
                     //current->remove_from_above();//Scoatem din current
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
                  //current->add_above(function_scope);
                  function_scope->assign_stack_above(current->return_stack_above());
                  function_scope->add_above(current);
                  current=function_scope;
                  Vector_Tabele.push_back(current);
                } 
               '(' list_param ')' CBEGIN list{    current->set_body($8);
                                                  // $8->run();
                                                       } RETURN e ';' {
                                                            if(strcmp($1, $11->get_type_for_main())==0){
                                                                 if(strcmp($11->get_type_for_main() , "int")==0){
                                                                      class Value val($11->evaluatei());
                                                                      current->next_domain_scope()->set_value($2 , val );  
                                                                 }
                                                                 else if(strcmp($11->get_type_for_main() , "float")==0){
                                                                      class Value val($11->evaluatef());
                                                                      current->next_domain_scope()->set_value($2 , val ); 
                                                                 }
                                                                 else{
                                                                      errorCount++;
                                                                      yyerror("Unkown Type of Function");
                                                                 }
                                                            }
                                                            else{
                                                                 errorCount++;
                                                                 yyerror("The Return type and the function type DON'T MATCH");
                                                            }
                                                       } CEND ';' 
                                                                           {
                                                                           current=current->next_domain_scope();
                                                                           }
          | VOID ID  
                { current->check_existance_for_declaration($1, $2 , "func" , errorCount , yylineno);
                  class SymTable* function_scope;
                  function_scope=new SymTable($2);
                  function_scope->assign_stack_above(current->return_stack_above());
                  function_scope->add_above(current);
                  current=function_scope;
                  Vector_Tabele.push_back(current);
                } 
               '(' list_param ')' CBEGIN list CEND ';' 
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
list_main :  statement_main ';' {$$=new ASTNode("final_sequence" , $1 , errorCount , yylineno, current);}
          |  statement_main ';' list_main {$$=new ASTNode("sequence" , $1 ,$3 , errorCount , current);}
          ;
list :  statement ';' {$$=new ASTNode("final_sequence" , $1 , errorCount , yylineno, current);}
     |  statement ';' list {$$=new ASTNode("sequence" , $1 ,$3 , errorCount , current);}
     ;
list_for_else : list 
              | /*epsilon*/
              ;
statement: assign_node {$$=$1;
                      
                         }
         |function_call_node //Apel de functie
               //To DO : Implementeaza loopuril din if , while , for 
               //TO DO URGENT : VEzi cum faci sa ruleze toate CAND LE DAI RUN nu cum le declari
         |while_node{$$=$1;
                         }
         | IF '(' boolean_expression ')'
               {    //cout<<$3->get_type_for_main()<<endl;
                   if(strcmp($3->get_type_for_main(),"int")==0){
                         if($3->evaluatei()==true){
                              //printf("Expression is TRUE\n");
                         }
                         else{
                              //printf("Expression is FALSE\n");
                         }
                    }
                    else if(strcmp($3->get_type_for_main(),"float")==0){
                         if((int)$3->evaluatef()==true){
                              //printf("Expression is TRUE\n");
                         }
                         else{
                              //printf("Expression is FALSE\n");
                         }
                    }
                    else{
                         errorCount++;
                         yyerror("Weird expressions in condition");
                    }
               } CBEGIN 
                    {
                         SymTable* currentCTRL;     
                         currentCTRL = new SymTable($1);
                         currentCTRL->assign_stack_above(current->return_stack_above());
                         currentCTRL->add_above(current);
                         current=currentCTRL;
                         Vector_Tabele.push_back(current);
                    } 
                         list CEND
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
                                                  list_for_else CEND
                              {
                                   current=current->next_domain_scope();
                              }
         | FOR '(' assign_node ';' boolean_expression ';'
                              {//cout<<$9->get_type_for_main()<<endl;
                                   if(strcmp($5->get_type_for_main(),"int")==0){
                         if($5->evaluatei()==true){
                              //printf("Expression is TRUE\n");
                         }
                         else{
                              //printf("Expression is FALSE\n");
                         }
                    }
                    else if(strcmp($5->get_type_for_main(),"float")==0){
                         if((int)$5->evaluatef()==true){
                              //printf("Expression is TRUE\n");
                         }
                         else{
                              //printf("Expression is FALSE\n");
                         }
                    }
                    else{
                         errorCount++;
                         yyerror("Weird expressions in condition");
                    }
                              } 
                                                       ID 
               {
                 if(strcmp($3->get_type_for_main() , $8)!=0)
                    {
                      errorCount++;
                      char*buff=new char[256];
                      strcpy(buff ,"The variable you're trying to inc/dec ");
                      strcat(buff , $8);
                      strcat(buff ," is different from the one you assigned "); 
                      strcat(buff , $3->get_type_for_main());
                      yyerror(buff);
                      delete [] buff;
                      buff=nullptr;
                    }
               }
                                                            inc_dec ';' ')' CBEGIN 
               {
                 SymTable* currentCTRL;     
                 currentCTRL = new SymTable($1);
                 currentCTRL->assign_stack_above(current->return_stack_above());
                 currentCTRL->add_above(current);
                 current=currentCTRL;
                 Vector_Tabele.push_back(current);
               } 
                                                                                    list CEND
               {
                 current=current->next_domain_scope();
               }
         | declarations_interior
         | print_node{$$=$1;
         
         }
         | TYPE_FUNCTION  '(' e ')'
         ;

statement_main: assign_node {$$=$1;
                         $$->run();
                         }
         |function_call_node //Apel de functie
               //To DO : Implementeaza loopuril din if , while , for 
               //TO DO URGENT : VEzi cum faci sa ruleze toate CAND LE DAI RUN nu cum le declari
         |while_node{$$=$1;
                     $$->run();
                         }
         | IF '(' boolean_expression ')'
               {    //cout<<$3->get_type_for_main()<<endl;
                   if(strcmp($3->get_type_for_main(),"int")==0){
                         if($3->evaluatei()==true){
                              //printf("Expression is TRUE\n");
                         }
                         else{
                              //printf("Expression is FALSE\n");
                         }
                    }
                    else if(strcmp($3->get_type_for_main(),"float")==0){
                         if((int)$3->evaluatef()==true){
                              //printf("Expression is TRUE\n");
                         }
                         else{
                              //printf("Expression is FALSE\n");
                         }
                    }
                    else{
                         errorCount++;
                         yyerror("Weird expressions in condition");
                    }
               } CBEGIN 
                    {
                         SymTable* currentCTRL;     
                         currentCTRL = new SymTable($1);
                         currentCTRL->assign_stack_above(current->return_stack_above());
                         currentCTRL->add_above(current);
                         current=currentCTRL;
                         Vector_Tabele.push_back(current);
                    } 
                         list CEND
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
                                                  list_for_else CEND
                              {
                                   current=current->next_domain_scope();
                              }
         | FOR '(' assign_node ';' boolean_expression ';'
                              {//cout<<$9->get_type_for_main()<<endl;
                                   if(strcmp($5->get_type_for_main(),"int")==0){
                         if($5->evaluatei()==true){
                              //printf("Expression is TRUE\n");
                         }
                         else{
                              //printf("Expression is FALSE\n");
                         }
                    }
                    else if(strcmp($5->get_type_for_main(),"float")==0){
                         if((int)$5->evaluatef()==true){
                              //printf("Expression is TRUE\n");
                         }
                         else{
                              //printf("Expression is FALSE\n");
                         }
                    }
                    else{
                         errorCount++;
                         yyerror("Weird expressions in condition");
                    }
                              } 
                                                       ID 
               {
                 if(strcmp($3->get_type_for_main() , $8)!=0)
                    {
                      errorCount++;
                      char*buff=new char[256];
                      strcpy(buff ,"The variable you're trying to inc/dec ");
                      strcat(buff , $8);
                      strcat(buff ," is different from the one you assigned "); 
                      strcat(buff , $3->get_type_for_main());
                      yyerror(buff);
                      delete [] buff;
                      buff=nullptr;
                    }
               }
                                                            inc_dec ';' ')' CBEGIN 
               {
                 SymTable* currentCTRL;     
                 currentCTRL = new SymTable($1);
                 currentCTRL->assign_stack_above(current->return_stack_above());
                 currentCTRL->add_above(current);
                 current=currentCTRL;
                 Vector_Tabele.push_back(current);
               } 
                                                                                    list CEND
               {
                 current=current->next_domain_scope();
               }
         | declarations_interior
         | print_node{$$=$1;
         $$->run();
         }
         | TYPE_FUNCTION  '(' e ')'
         ;


assign_node:ID ASSIGN e {
                         $$=new ASTNode($1 , "<-" , $3 ,current, errorCount, yylineno);
                         }
           ;
function_call_node:ID 
               {
               domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use($1 , errorCount , yylineno);
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
                              // $8->run();
                              }
                              CEND
                                   {
                                        $$=new ASTNode("while" , $3 , $7 , errorCount , yylineno , current);
                                        current=current->next_domain_scope();
                                   }
          ;
print_node: PRINT '(' e ')'{$$=new ASTNode($1 , $3 , errorCount , yylineno);}//Vezi ca NU da print bine la variabile , s-ar putea sa trebuaisca sa folosesti SYMTable
          ;
inc_dec: INC
       | DEC
       ;

declarations_interior: variables_interior
                     | class_initialize_interior
                     ;          

boolean_expression: '(' boolean_expression ')' {$$=$2;}
               |  '('boolean_expression')' CONNECT '('boolean_expression')' {$$=new ASTNode($4 , $2 , $6 , errorCount);}
               |  y {$$=$1;}
               ;
y : e CMP e {$$=new ASTNode($2 , $1 , $3 , errorCount);}  
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
      //Cand adaugam parametrii in declaratia functiei o facem refursiv la DREAPTA , si cand ii apelam o facem recursiv la stanga
     //TO DO: Apel de functie in apel de functie
call_list : e 
               {
               if(param_checker.empty()){
                    errorCount++;
                    yyerror("The number of parameters in the call doesnt match the number of params in the fucntion");
               }
               else{
               class IdInfo* temp;
               temp=*(param_checker.begin());
                    //cout<<"Ma execut DUPA "<<(*temp).name<<endl;
                    if(strcmp($1->get_type_for_main() , "int")==0){
                         //cout<<Denumire_apelant<<"    "<<$1->get_type_for_main()<<" "<<(*temp).name<<"    "<<param_checker.size()<<"  New Value="<<$1->evaluatei()<<endl;
                         class Value val($1->evaluatei());
                         //cout<<(*temp).name<<" "<<domeniul_caruia_ii_apartine_varabila->get_value((*temp).name).get_int()<<endl;
                         domeniul_caruia_ii_apartine_varabila->set_value((*temp).name.c_str() , val);
                         //cout<<(*temp).name<<" "<<domeniul_caruia_ii_apartine_varabila->get_value((*temp).name).get_int()<<endl;
                         param_checker.erase(param_checker.begin());
                    }
                    else if(strcmp($1->get_type_for_main() , "float")==0){
                         //cout<<Denumire_apelant<<"    "<<$1->get_type_for_main()<<" "<<(*temp).name<<"    "<<param_checker.size()<<"  New Value="<<$1->evaluatef()<<endl;
                         class Value val($1->evaluatef());
                         //cout<<(*temp).name<<" "<<domeniul_caruia_ii_apartine_varabila->get_value((*temp).name).get_float()<<endl;
                         domeniul_caruia_ii_apartine_varabila->set_value((*temp).name.c_str() , val);
                         //cout<<(*temp).name<<" "<<domeniul_caruia_ii_apartine_varabila->get_value((*temp).name).get_float()<<endl;
                         param_checker.erase(param_checker.begin());
                    }
                    else{
                         errorCount++;
                         yyerror("Unkown Parameter type");
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
               //cout<<"Ma execut PRIMUL "<<(*temp).name<<endl;
               if(strcmp($3->get_type_for_main() , "int")==0){
                    //cout<<Denumire_apelant<<"    "<<$3->get_type_for_main()<<" "<<(*temp).name<<"    "<<param_checker.size()<<"  New Value="<<$3->evaluatei()<<endl;
                    class Value val($3->evaluatei());
                    //cout<<domeniul_caruia_ii_apartine_varabila->get_dom_name()<<endl;
                    //cout<<(*temp).name<<" "<<domeniul_caruia_ii_apartine_varabila->get_value((*temp).name).get_int()<<endl;
                    domeniul_caruia_ii_apartine_varabila->set_value((*temp).name.c_str() , val);
                    //cout<<(*temp).name<<" "<<domeniul_caruia_ii_apartine_varabila->get_value((*temp).name).get_int()<<endl;
                    param_checker.erase(param_checker.begin());
                    }
               else if (strcmp($3->get_type_for_main() , "float")==0){
                    //cout<<Denumire_apelant<<"    "<<$3->get_type_for_main()<<" "<<(*temp).name<<"    "<<param_checker.size()<<"  New Value="<<$3->evaluatef()<<endl;
                    class Value val($3->evaluatef());
                    //cout<<domeniul_caruia_ii_apartine_varabila->get_dom_name()<<endl;
                    //cout<<(*temp).name<<" "<<domeniul_caruia_ii_apartine_varabila->get_value((*temp).name).get_float()<<endl;
                    domeniul_caruia_ii_apartine_varabila->set_value((*temp).name.c_str() , val);
                    //cout<<(*temp).name<<" "<<domeniul_caruia_ii_apartine_varabila->get_value((*temp).name).get_float()<<endl;
                    param_checker.erase(param_checker.begin());
               }
               else{
                         errorCount++;
                         yyerror("Unkown Parameter type");
                    }
               }
               }
          ;
/////////////////////////////Le folosim pe alea de mai jos daca vrem sa facem foo(a<-2) Care NU ARE fuckin sens , si pentru foo(goo(2) , 2) asta are sens , dar vedem
// call_list : e
//           | call_list ',' e
//           | statement_for_call_list
//           | call_list ',' statement_for_call_list
//           ;

// statement_for_call_list: ID ASSIGN      
//                          {
//                               domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use($1 , errorCount , yylineno);
//                               if(domeniul_caruia_ii_apartine_varabila!=nullptr)
//                                    {
//                                         if (domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type($1)=="bool")
//                                              {
//                                                   {errorCount++; 
//                                                   char*buff=new char[256];
//                                                   strcpy(buff ,"Cannot assing arithmetic expression to ");
//                                                   strcat(buff , $1);
//                                                   strcat(buff ," which is a bool"); 
//                                                   yyerror(buff);
//                                                   delete [] buff;
//                                                   buff=nullptr;
//                                                   }
//                                              }
//                                    }
//                          } 
//                                         x    {//cout<<$4->evaluatei()<<endl<<$4->get_type()<<endl;
//                                                   if(domeniul_caruia_ii_apartine_varabila!=nullptr){
//                                                        if(domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type($1)=="int"){
//                                                             if(numeric_limits<int>::min()==($4->evaluatei())){
//                                                                  errorCount++;
//                                                                  yyerror("Arithmetic expression is inccorect");
//                                                             }
//                                                             else{
//                                                                  class Value val($4->evaluatei());
//                                                                  domeniul_caruia_ii_apartine_varabila->set_value($1 , val);
//                                                             }
//                                                        }
//                                                        else if(domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type($1)=="float"){
//                                                             if(std::isnan($4->evaluatef())){
//                                                                  errorCount++;
//                                                                  yyerror("Arithmetic expression is inccorect");
//                                                             }
//                                                             else{
//                                                                  class Value val($4->evaluatef());
//                                                                  //cout<<$4->evaluatef()<<endl<<$4->get_type()<<endl;
//                                                                  domeniul_caruia_ii_apartine_varabila->set_value($1 , val);
//                                                             }
//                                                        }else{
//                                                             errorCount++;
//                                                             yyerror("Can only assing a int or a float to an int or a float");
                                                            
//                                                        }
//                                                   }//NO IDEA why it's the 4-th one , Trial and error ;P
//                                              } 
//                          | ID {
//                                    domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use($1 , errorCount , yylineno);
//                                    if(domeniul_caruia_ii_apartine_varabila!=nullptr)
//                                         {
//                                              if(domeniul_caruia_ii_apartine_varabila->getValue_IDType($1)!="func")
//                                                   {
//                                                        errorCount++; 
//                                                        char*buff=new char[256];
//                                                        strcpy(buff ,"ID ");
//                                                        strcat(buff , $1);
//                                                        strcat(buff ," exists but is NOT a funciton"); 
//                                                        yyerror(buff);
//                                                        delete [] buff;
//                                                        buff=nullptr;
//                                                   }
//                                         }
//                               } 
//                               '(' call_list ')' //Apel de functie
//                          | ID ASSIGN 
//                                    {domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use($1 , errorCount , yylineno);} 
//                                         TRUTH_VALUE {
//                                                        if(domeniul_caruia_ii_apartine_varabila!=nullptr)
//                                                        {
//                                                             if (domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type($1)!="bool")
//                                                                  {
//                                                                       errorCount++; 
//                                                                       char*buff=new char[256];
//                                                                       strcpy(buff ,"Variable ");
//                                                                       strcat(buff , $1);
//                                                                       strcat(buff ," is not a bool"); 
//                                                                       yyerror(buff);
//                                                                       delete [] buff;
//                                                                       buff=nullptr;
//                                                                  }   
//                                                        }
//                                                   }
//                          ;

e : e '+' e   {$$=new ASTNode("+" , $1 , $3 , errorCount);}
  | e '*' e   {$$=new ASTNode("*" , $1 , $3 , errorCount);}
  | e '-' e   {$$=new ASTNode("-" , $1 , $3 , errorCount);}
  | e '/' e   {$$=new ASTNode("/" , $1 , $3 , errorCount);}
  |'(' e ')'  {$$=$2;}
  | TRUTH_VALUE{    
                    //cout<<"Compieltrul vede  "<<$1<<endl<<endl<<endl;
                    if(strcmp($1 ,"TRUE")==0){
                         Value val(true);     
                         // cout<<"True"<<endl; 
                         // cout<<"In VAlue avem "<<val.get_bool()<<endl;   
                         $$=new ASTNode(val , "bool", errorCount);
                    }
                    else{
                         Value val(false);
                         // cout<<"False"<<endl;
                         // cout<<"In VAlue avem "<<val.get_bool()<<endl;      
                         $$=new ASTNode(val , "bool", errorCount);
                    }
               }
  | NR        {Value val(atoi(yytext));
               $$=new ASTNode(val , "int" , errorCount);}//MERGE
  | REAL      {Value val((float)atof(yytext));
               $$=new ASTNode(val , "float" , errorCount);}
  | ID        
          //      {domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use($1 , errorCount , yylineno);
          //      if(domeniul_caruia_ii_apartine_varabila!=nullptr){
          //           cout<<$1<<" are valoarea : "<<domeniul_caruia_ii_apartine_varabila->get_value($1).get_int()<<endl;
          //           $$=new ASTNode(domeniul_caruia_ii_apartine_varabila->get_value($1) ,domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type($1) , errorCount);
          //      }
          //     }
              {
               domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use($1 , errorCount , yylineno);
               $$=new ASTNode( domeniul_caruia_ii_apartine_varabila->get_that_variable($1), errorCount , yylineno);//??? MAybe it will work like this?
               //$$=new ASTNode($1 , current , errorCount , yylineno); FUCK THIS LINE IN PARTICULAR (AM TRECUT PRIN MUSCIAL DE 3 ORI LA ASTA)
              }
  ;
//Modificam , dam SymTable* si acolo luam valoarea
        
%%
void yyerror(const char * s){
     cout << "error:" << s << " at line: " << yylineno << endl;
}
     
int main(int argc, char** argv){
     yyin=fopen(argv[1],"r");
     current = new SymTable("global");
     Vector_Tabele.push_back(current);
     yyparse();
     cout << "Variables:" <<endl<<endl;
     for (auto i : Vector_Tabele){
          i->printVars();
     }
     // for (auto i : Vector_Tabele){
     //      if(i->get_body()!=nullptr && strcmp(i->get_dom_name() ,"main")!=0){
     //           i->get_body()->run();
     //      }
     // }



     //      cout<<endl<<endl;
     // for (auto i : Vector_Tabele){
     //      if(i->get_body()!=nullptr && strcmp(i->get_dom_name() ,"main")==0){
     //      cout<<i->get_dom_name()<<endl;
     //      for(auto j=0 ; j<10 ; ++j){
     //      i->get_body()->run();
     //      }
     //           }
     //      }
     //      cout<<endl<<endl;
     //      cout << "Variables:" <<endl<<endl;
     //      for (auto i : Vector_Tabele){
     //      i->printVars();
     // }
     cout<<endl<<endl<<endl<<endl<<endl<<endl;
     cout<<"Functions and their interior:"<<endl<<endl;
     for (auto i : Vector_Tabele){
          i->printFunct();
          delete i;
     }
} 
//TO DO : Baga apelul de functie in AST
//1TO DO: TRANZITIE AST ;(
//2TO DO: Fa sa poti accesa Membrii unei clase , si dupa fiecare instanta sa aiba o copie independenta a acelor Membrii