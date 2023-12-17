#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("DFA to accept strings that start with aa or bb over input alphabets (a, b)\n");
    printf("Enter string: ");
    // Use %(size-1)s to prevent buffer overflow
    scanf("%99s", str);

    if (str[0] == 'a' && str[1] == 'a') {
        printf("String accepted\n");
    } else if (str[0] == 'b' && str[1] == 'b') {
        printf("String accepted\n");
    } else {
        printf("String rejected\n");
    }
    
    return 0;
}