#include <stdio.h>
#include <ctype.h>

int main() {
    char str[50];

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("Digits in the string: ");

    for (int i = 0; str[i] != '\0'; ++i) {
        if (isdigit(str[i])) {
            printf("%c", str[i]);
        }
    }

    printf("\n");

    return 0;
}
