#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = NULL;
    char ch;

    // open the file in binary mode
    fp = fopen(__FILE__, "rb");

    if (fp == NULL) {
        printf("Error in opening the file\n");
        exit(1);
    }

    // read till EOF
    do {
        ch = fgetc(fp);
        printf("%c", ch);
    } while (ch != EOF);

    // close the open file
    fclose(fp);
    return 0;
}
