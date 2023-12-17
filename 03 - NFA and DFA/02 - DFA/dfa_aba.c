#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("DFA to accept strings that start with aba over input alphabets (a,b)\n");
    printf("Enter string: ");
    scanf("%99s", str);

    if (strlen(str) >= 3 && str[0] == 'a' && str[1] == 'b' && str[2] == 'a') {
        printf("String accepted\n");
    } else {
        printf("String rejected\n");
    }
    
    return 0;
}