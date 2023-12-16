%{
    #include <stdio.h>
%}

%%

abc { printf("ABC"); }
.|\n { printf("%s", yytext); }

%%

int main() {
    printf("enter the string : \n");
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}