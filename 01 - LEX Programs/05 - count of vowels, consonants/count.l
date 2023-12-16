%{
    #include <stdio.h>
    int vc=0,cc=0;
%}

%%

[aeiouAEIOU] { vc++; }
[a-zA-Z] { cc++; /* excluding vowels */ }
.|\n { /* ignore */ }

%%

int main() {
    printf("enter the input : \n");
    yylex();

    //cc -= vc;
    printf("\nCount Values \n\n");
    printf("vowels: %d\n", vc);
    printf("consonants: %d\n", cc);

    return 0;
}
int yywrap() {
    return 1;
}