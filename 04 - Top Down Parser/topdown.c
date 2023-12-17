#include<stdio.h>
#include<string.h>

char input[10];
int i=0,error=0;

void E();
void T();
void Eprime();
void Tprime();
void F();

void main() {
    printf("Recursive Descend parser\n\n");
    
    printf("Enter an arithmetic expression : ");
    scanf("%s",input);

    E();

    if(strlen(input)==i && error==0)
        printf("\nAccepted..!!!\n");
    else
        printf("\nRejected..!!!\n");
}

// E -> T E'
void E() {
    T();
    Eprime();
}

// E' -> + T E'
void Eprime() {
    if(input[i]=='+') {
        i++;
        T();
        Eprime();
    }
}

// T -> F T'
void T() {
    F();
    Tprime();
}

// T' -> * F T'
void Tprime() {
    if(input[i]=='*') {
        i++;
        F();
        Tprime();
    }
}

// F -> (E) | a
void F() {
    if(input[i]=='a')
        i++;
    else if(input[i]=='(') {
        i++;
        E();
        if(input[i]==')')
            i++;
        else
            error=1;
    }
    else
    error=1;
}