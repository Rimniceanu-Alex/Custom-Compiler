%{
#include <stdio.h>
#include "maker.tab.h"
%}
%option noyywrap
%%
"int"|"float"|"char"|"string"|"bool" {yylval.string = strdup(yytext);return TYPE;}
"void" {yylval.string = strdup(yytext);return VOID;}
"return" {yylval.string = strdup(yytext);return RETURN;}
"class" {yylval.string = strdup(yytext);return Class_Type;}
"begin" {return BGIN;}
"end" {return END;}
"TRUE"|"FALSE" {yylval.string=strdup(yytext); return TRUTH_VALUE;}
"if" {yylval.string=strdup(yytext); return IF;}
"else" {yylval.string=strdup(yytext); return ELSE;}
"while" {yylval.string=strdup(yytext); return WHILE;}
"for" {yylval.string=strdup(yytext); return FOR;}
"&&"|"||" {yylval.string=strdup(yytext); return CONNECT;}
"=="|"!="|">"|"<"|"<="|">=" {yylval.string=strdup(yytext); return CMP;}
"\{" {return CBEGIN;}
"\}" {return CEND;}
"Print" {yylval.string=strdup(yytext); return PRINT; }
"TypeOf" {yylval.string=strdup(yytext); return TYPE_FUNCTION; }
[A-Z][a-z]* {yylval.string = strdup(yytext); return Class_ID;}
[a-z][a-zA-Z0-9]* {yylval.string = strdup(yytext); return ID;}
"<-" {return ASSIGN;}
0|[1-9][0-9]* {return NR;}
0\.[0-9]+|[1-9][0-9]*\.[0-9]+ {return REAL;}
\'[a-zA-Z0-9]\' { yylval.string = strdup(yytext);return CHAR; }
\"[a-zA-Z0-9 \s ]*\" { yylval.string = strdup(yytext);return STRING; }
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}

 