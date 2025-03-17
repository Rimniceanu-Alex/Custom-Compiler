/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     BGIN = 258,
     END = 259,
     CBEGIN = 260,
     CEND = 261,
     REAL = 262,
     ID = 263,
     TYPE = 264,
     Class_ID = 265,
     Class_Type = 266,
     IF = 267,
     ELSE = 268,
     WHILE = 269,
     FOR = 270,
     CMP = 271,
     NR = 272,
     CONNECT = 273,
     VOID = 274,
     RETURN = 275,
     ASSIGN = 276,
     TRUTH_VALUE = 277,
     PRINT = 278,
     TYPE_FUNCTION = 279,
     STRING = 280,
     CHAR = 281
   };
#endif
/* Tokens.  */
#define BGIN 258
#define END 259
#define CBEGIN 260
#define CEND 261
#define REAL 262
#define ID 263
#define TYPE 264
#define Class_ID 265
#define Class_Type 266
#define IF 267
#define ELSE 268
#define WHILE 269
#define FOR 270
#define CMP 271
#define NR 272
#define CONNECT 273
#define VOID 274
#define RETURN 275
#define ASSIGN 276
#define TRUTH_VALUE 277
#define PRINT 278
#define TYPE_FUNCTION 279
#define STRING 280
#define CHAR 281




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 26 "maker.y"
{
     char* string;
     class ASTNode* ListOfNodes;
}
/* Line 1529 of yacc.c.  */
#line 106 "maker.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

