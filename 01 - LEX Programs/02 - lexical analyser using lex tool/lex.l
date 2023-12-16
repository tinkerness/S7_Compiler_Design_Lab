%{
    #include <stdio.h>
    int COMMENT = 0;
%}

id [a-zA-Z][a-zA-Z0-9]*
num [0-9]+

%%

#.* { printf("preprocessor directive : %s\n", yytext);}
"/*" { COMMENT = 1; printf("comment "); }

int|char|float|double|struct|typedef|for|while|if|else|goto|continue|break|return|void|do|switch|case|default { printf("kywd "); }

{id} { if (!COMMENT) printf("id "); }
{num} { if (!COMMENT) printf("num "); }

\+ { if (!COMMENT) printf("add-op "); }
\- { if (!COMMENT) printf("sub-op "); }
\* { if (!COMMENT) printf("mul-op "); }
\/ { if (!COMMENT) printf("div-op "); }
\= { if (!COMMENT) printf("eq-op "); }

>|>=|<|<=|== { if (!COMMENT) printf("rel-op "); }

\".*\" { if (!COMMENT) printf("str "); }

\{ { if (!COMMENT) printf("block begins "); }
\} { if (!COMMENT) printf("block ends "); }

\( { ECHO; COMMENT = 0; } 
\)(:)? { if (!COMMENT) ECHO; printf("\n");} 

%%

int main(int argc, char **argv) {
    FILE *file = fopen("input.c", "r");
    if (!file) {
        printf("could not open the file");
        exit(0);
    }
    yyin = file;
    yylex();
    fclose(file);

    printf("\n");
    return 0;
}
int yywrap() {
    return 1;
}