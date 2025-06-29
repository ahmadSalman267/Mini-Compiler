/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PROJ1_TAB_H_INCLUDED
# define YY_YY_PROJ1_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    DIGITS = 258,                  /* DIGITS  */
    ID = 259,                      /* ID  */
    PLUS = 260,                    /* PLUS  */
    MINUS = 261,                   /* MINUS  */
    MUL = 262,                     /* MUL  */
    DIVIDE = 263,                  /* DIVIDE  */
    NUM = 264,                     /* NUM  */
    STRING = 265,                  /* STRING  */
    INTEGER = 266,                 /* INTEGER  */
    SPECIAL = 267,                 /* SPECIAL  */
    NL = 268,                      /* NL  */
    SPACE = 269,                   /* SPACE  */
    KEYWORD = 270,                 /* KEYWORD  */
    SPECIAL_START = 271,           /* SPECIAL_START  */
    SPECIAL_END = 272,             /* SPECIAL_END  */
    IF = 273,                      /* IF  */
    ELSE = 274,                    /* ELSE  */
    WHILE = 275,                   /* WHILE  */
    SEP = 276,                     /* SEP  */
    END = 277,                     /* END  */
    OR = 278,                      /* OR  */
    AND = 279,                     /* AND  */
    NOT = 280,                     /* NOT  */
    IN = 281,                      /* IN  */
    NOTIN = 282,                   /* NOTIN  */
    T = 283,                       /* T  */
    F = 284,                       /* F  */
    COLON = 285,                   /* COLON  */
    SQUAREBRACKET_START = 286,     /* SQUAREBRACKET_START  */
    SQUAREBRACKET_END = 287,       /* SQUAREBRACKET_END  */
    MOD = 288,                     /* MOD  */
    EQUAL = 289,                   /* EQUAL  */
    PLUSEQUAL = 290,               /* PLUSEQUAL  */
    PRINT = 291,                   /* PRINT  */
    COMMENT = 292,                 /* COMMENT  */
    RANGE = 293,                   /* RANGE  */
    SINGLEQUOTE = 294,             /* SINGLEQUOTE  */
    DOUBLEQUOTE = 295,             /* DOUBLEQUOTE  */
    EXPONENTIAL = 296,             /* EXPONENTIAL  */
    COMMA = 297,                   /* COMMA  */
    INDENT = 298,                  /* INDENT  */
    LIST = 299,                    /* LIST  */
    DIVIDEEQUAL = 300,             /* DIVIDEEQUAL  */
    MINUSEQUAL = 301,              /* MINUSEQUAL  */
    MULEQUAL = 302,                /* MULEQUAL  */
    LESSTHAN = 303,                /* LESSTHAN  */
    LESSTHANEQUAL = 304,           /* LESSTHANEQUAL  */
    GREATERTHAN = 305,             /* GREATERTHAN  */
    GREATERTHANEQUAL = 306,        /* GREATERTHANEQUAL  */
    DOUBLEEQUAL = 307,             /* DOUBLEEQUAL  */
    NOTEQUAL = 308                 /* NOTEQUAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PROJ1_TAB_H_INCLUDED  */
