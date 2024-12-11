%{
#include <stdio.h>
#include "maker.tab.h"
%}
%option noyywrap
%%
"int"|"float"|"char"|"string"|"bool" {yylval.string = strdup(yytext);return TYPE;}
"class" {yylval.string = strdup(yytext);return Class_Type;}
"aloo_buna_dimineata" {return BGIN;}
"aloo_buna_seara" {return END;}
"TRUE"|"FALSE" {yylval.string=strdup(yytext); return TRUTH_VALUE;}
"\{" {return CBEGIN;}
"\}" {return CEND;}
[A-Z][a-z]* {yylval.string = strdup(yytext); return Class_ID;}
[a-zA-Z][a-zA-Z0-9]* {yylval.string = strdup(yytext); return ID;}
"<-" {return ASSIGN;}
[0-9]+ {return NR;}
[0-9]+\.[0-9]+ {return REAL;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}

 