#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, alphabets = 0, digits = 0, specialcharacters = 0;
    char alphabetArray[1000], digitArray[1000], specialArray[1000];

    printf("Enter the string: ");
    gets(s);

    for (i = 0; s[i]; i++) {
        if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)) {
            alphabetArray[alphabets] = s[i];
            alphabets++;
        } else if (s[i] >= 48 && s[i] <= 57) {
            digitArray[digits] = s[i];
            digits++;
        } else {
            specialArray[specialcharacters] = s[i];
            specialcharacters++;
        }
    }

    printf("Alphabets = %d\n", alphabets);
    printf("Alphabets: ");
    for (i = 0; i < alphabets; i++) {
        printf("%c ", alphabetArray[i]);
    }

    printf("\nDigits = %d\n", digits);
    printf("Digits: ");
    for (i = 0; i < digits; i++) {
        printf("%c ", digitArray[i]);
    }

    printf("\nSpecial characters = %d\n", specialcharacters);
    printf("Special characters: ");
    for (i = 0; i < specialcharacters; i++) {
        printf("%c ", specialArray[i]);
    }

    return 0;
}
