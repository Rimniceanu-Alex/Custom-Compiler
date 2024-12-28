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

%token  BGIN END ASSIGN TRUTH_VALUE CBEGIN CEND REAL PRINT TYPE_FUNCTION
%token<string> ID TYPE Class_ID Class_Type IF ELSE WHILE FOR CMP INC DEC NR CONNECT VOID RETURN
%type<ListOfNodes> e x y boolean_expression
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
           list END
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
               '(' list_param ')' CBEGIN list RETURN e ';' {
                                                            if(strcmp($1, $10->get_type_for_main())==0){
                                                                 if(strcmp($10->get_type_for_main() , "int")==0){
                                                                      class Value val($10->evaluatei());
                                                                      current->next_domain_scope()->set_value($2 , val );  
                                                                 }
                                                                 else if(strcmp($10->get_type_for_main() , "float")==0){
                                                                      class Value val($10->evaluatef());
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
list :  statement ';' 
     | list statement ';'
     ;
list_for_else : list 
              | /*epsilon*/
              ;
statement: ID ASSIGN {domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use($1 , errorCount , yylineno);
                      if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                         {
                              if (domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type($1)=="bool")
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
                         x    {
                              if(domeniul_caruia_ii_apartine_varabila!=nullptr){
                                   if(domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type($1)=="int"){
                                        if(numeric_limits<int>::min()==($4->evaluatei())){
                                             errorCount++;
                                             yyerror("Arithmetic expression is inccorect");
                                        }
                                        else{
                                             class Value val($4->evaluatei());
                                             domeniul_caruia_ii_apartine_varabila->set_value($1 , val);
                                        }
                                   }
                                   else if(domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type($1)=="float"){
                                        if(std::isnan($4->evaluatef())){
                                             errorCount++;
                                             yyerror("Arithmetic expression is inccorect");
                                        }
                                        else{
                                             class Value val($4->evaluatef());
                                             domeniul_caruia_ii_apartine_varabila->set_value($1 , val);
                                        }
                                   }else{
                                        errorCount++;
                                        yyerror("Can only assing a int or a float to an int or a float");
                                        
                                   }
                              }//NO IDEA why it's the 4-th one , Trial and error ;P
                         }
         | ID {
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
                                 } //Apel de functie
         | ID ASSIGN {
                         domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use($1 , errorCount , yylineno);
                     } 
                         TRUTH_VALUE {
                                        if(domeniul_caruia_ii_apartine_varabila!=nullptr){
                                             if (domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type($1)!="bool")
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
               //To DO : Implementeaza loopuril din if , while , for 
         | WHILE '(' boolean_expression  ')' 
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
               }CBEGIN 
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
         | FOR '(' ID ASSIGN 
               {
                 domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use($3 , errorCount , yylineno);
                 if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                    {
                      if (domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type($3)=="bool")
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
                                   x{
                              if(domeniul_caruia_ii_apartine_varabila!=nullptr){
                                   if(domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type($3)=="int"){
                                        if(numeric_limits<int>::min()==($6->evaluatei())){
                                             errorCount++;
                                             yyerror("Arithmetic expression is inccorect");
                                        }
                                        else{
                                             class Value val($6->evaluatei());
                                             domeniul_caruia_ii_apartine_varabila->set_value($3 , val);
                                        }
                                   }
                                   else if(domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type($3)=="float"){
                                        if(std::isnan($6->evaluatef())){
                                             errorCount++;
                                             yyerror("Arithmetic expression is inccorect");
                                        }
                                        else{
                                             class Value val($6->evaluatef());
                                             domeniul_caruia_ii_apartine_varabila->set_value($3 , val);
                                        }
                                   }else{
                                        errorCount++;
                                        yyerror("Can only assing a int or a float to an int or a float");
                                        
                                   }
                              }//NO IDEA why it's the 4-th one , Trial and error ;P
                         } ';' boolean_expression ';'
                              {//cout<<$9->get_type_for_main()<<endl;
                                   if(strcmp($9->get_type_for_main(),"int")==0){
                         if($9->evaluatei()==true){
                              //printf("Expression is TRUE\n");
                         }
                         else{
                              //printf("Expression is FALSE\n");
                         }
                    }
                    else if(strcmp($9->get_type_for_main(),"float")==0){
                         if((int)$9->evaluatef()==true){
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
         | PRINT '(' e ')'{
                              if($3->get_type()=="int"){
                                   cout<<$3->evaluatei()<<endl;
                              }
                              else if($3->get_type()=="float"){
                                   cout<<$3->evaluatef()<<endl;
                              }
                              else{
                                   errorCount++;
                                   yyerror("Unkown prin parameter");
                              }
                          }
         | TYPE_FUNCTION  '(' e ')'
         ;

inc_dec: INC
       | DEC
       ;

declarations_interior: variables_interior
                     | class_initialize_interior
                     ;          

boolean_expression: '(' boolean_expression ')' {$$=$2;}
               |  '('boolean_expression')' CONNECT '('boolean_expression')' {$$=new ASTNode($4 , $2 , $6);}
               |  y {$$=$1;}
               ;
y : e CMP e {$$=new ASTNode($2 , $1 , $3);}  
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
call_list : x 
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
          | call_list ',' x{
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
               //TO DO: VEzi cum acesezi astea , si maybe fa o metoda care sa verifice ce se intampla aici
               //Vezi cum acceseszi Domeniul functiilor ca sa le dai assign la parametrii (Domeniu_careia... ii GLOBAL)
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

x : e {$$=$1;}
  ;
e : e '+' e   {$$=new ASTNode("+" , $1 , $3);}
  | e '*' e   {$$=new ASTNode("*" , $1 , $3);}
  | e '-' e   {$$=new ASTNode("-" , $1 , $3);}
  | e '/' e   {$$=new ASTNode("/" , $1 , $3);}
  |'(' e ')'  {$$=$2;}
  | NR        {Value val(atoi(yytext));
               $$=new ASTNode(val , "int");}//MERGE
  | REAL      {Value val((float)atof(yytext));
               $$=new ASTNode(val , "float");}
  | ID        {domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use($1 , errorCount , yylineno);
               if(domeniul_caruia_ii_apartine_varabila!=nullptr){
                    $$=new ASTNode(domeniul_caruia_ii_apartine_varabila->get_value($1) ,domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type($1));
               }
              }
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
     cout << "Variables:" <<endl<<endl;
     for (auto i : Vector_Tabele){
          i->printVars();
     }
     cout<<endl<<endl<<endl<<endl<<endl<<endl;
     cout<<"Functions and their interior:"<<endl<<endl;
     for (auto i : Vector_Tabele){
          i->printFunct();
          delete i;
     }
} 

//TO DO : Am facut AST numa pt Assign din Statement 
// FA SI PENTRU RESTU , mayb pt bool?