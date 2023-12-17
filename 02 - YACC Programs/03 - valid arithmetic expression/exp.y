%{
    #include <stdio.h>
    #include <stdlib.h>
    int valid = 1;
%}

%token num id op;

%%

start : id '=' s ';'
s : id x 
 | num x 
 | '-' num x 
 | '(' s ')' x 
 ;
x : op s 
 | '-' s 
 | 
 ;

%%

int yyerror() {
    valid = 0;
    printf("invalid expression!\n");
    exit(0);
}

int main() {
    printf("enter the expression: ");
    yyparse();
    if (valid) {
        printf("\nvalid expression!\n");
    }
    return 0;
}