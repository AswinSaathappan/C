#include <stdio.h>

int main() {
    char str1[] = "";
    char str2[] = "hello";
    int i = 0, equal = 1;

    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            equal = 0;
            break;
        }
        i++;
    }

    if (equal) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    return 0;
}
