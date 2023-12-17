%{
#include <stdio.h>
#include <stdlib.h>
%}

%token DIGIT ID NL
%left '-' '+'
%left '*' '/'

%%
stmt :exp NL {printf("valid expression\n");exit(0);};
exp :exp '+' exp
| exp '-' exp
| exp '*' exp
| exp '/' exp
|'(' exp ')'
| ID
| DIGIT;
%%

int yyerror(char *msg)
{
 printf("invalid string\n");
 exit(0);
}

int main()
{
 printf("enter the expression: ");
 yyparse();
 return 0;
}
