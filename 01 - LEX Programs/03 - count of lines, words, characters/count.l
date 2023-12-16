%{
    #include <stdio.h>
    int lc=0,sc=0,wc=0,cc=0;
%}

%%

[\n] { lc++; }
[ \t] { sc++; cc++; }
[^ \t\n]+ { wc++; cc+=yyleng; }

%%

int main() {
    printf("enter the input : \n");
    yylex();

    printf("\ncount values \n\n");
    printf("lines: %d\n", lc);
    printf("spaces: %d\n", sc);
    printf("words: %d\n", wc);
    printf("chars: %d\n", cc);

    return 0;
}
int yywrap() {
    return 1;
}