#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("DFA to accept strings that start with ab over input alphabets (a, b)\n");
    printf("Enter string: ");
    scanf("%s", str);
    if (strlen(str) >= 2 && str[0] == 'a' && str[1] == 'b') {
        printf("String accepted\n");
    } else {
        printf("String rejected\n");
    }
    return 0;
}