/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_OBJ_ACSE_TAB_H_INCLUDED
# define YY_YY_OBJ_ACSE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    EOF_TOK = 258,
    LBRACE = 259,
    RBRACE = 260,
    LPAR = 261,
    RPAR = 262,
    LSQUARE = 263,
    RSQUARE = 264,
    SEMI = 265,
    PLUS = 266,
    MINUS = 267,
    MUL_OP = 268,
    DIV_OP = 269,
    AND_OP = 270,
    OR_OP = 271,
    NOT_OP = 272,
    ASSIGN = 273,
    LT = 274,
    GT = 275,
    SHL_OP = 276,
    SHR_OP = 277,
    EQ = 278,
    NOTEQ = 279,
    LTEQ = 280,
    GTEQ = 281,
    ANDAND = 282,
    OROR = 283,
    COMMA = 284,
    RETURN = 285,
    READ = 286,
    WRITE = 287,
    COUNT_ONES = 288,
    RANDOM = 289,
    RANDOMIZE = 290,
    ZIP = 291,
    DO = 292,
    WHILE = 293,
    IF = 294,
    ELSE = 295,
    TYPE = 296,
    IDENTIFIER = 297,
    NUMBER = 298
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 106 "Acse.y" /* yacc.c:1909  */
            
   int intval;
   char *svalue;
   t_axe_expression expr;
   t_axe_declaration *decl;
   t_list *list;
   t_axe_label *label;
   t_while_statement while_stmt;

#line 108 "obj/Acse.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_OBJ_ACSE_TAB_H_INCLUDED  */
