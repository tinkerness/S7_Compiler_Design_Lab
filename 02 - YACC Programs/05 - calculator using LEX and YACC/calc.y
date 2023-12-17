%{
    #include<stdio.h>
    int flag=0;
%}

%token NUMBER
%left '+' '-'
%left '*' '/' '%'
%left '(' ')'

%%

ArithmeticExpression: E{
    printf("\nResult=%d\n",$$);
    return 0;
};
E: E'+'E {$$=$1+$3;}
    |E'-'E {$$=$1-$3;}
    |E'*'E {$$=$1*$3;}
    |E'/'E {$$=$1/$3;}
    |E'%'E {$$=$1%$3;}
    |'('E')' {$$=$2;}
    | NUMBER {$$=$1;}
    ;

%%

int main() {
    printf("\nEnter an Arithmetic Expression:\n");
    yyparse();
    if(flag==0)
    printf("\n\n");
    return 0;
}

int yyerror() {
    printf("\nInvalid\n\n");
    flag=1;
    return 0;
}