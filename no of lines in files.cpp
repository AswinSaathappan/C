#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;

    char ch;
    int lines;

    /* Open source files in 'r' mode */
    file = fopen("abc.txt", "r");

    /* Check if file opened successfully */
    if (file == NULL) {
        printf("\nUnable to open file.\n");
        printf("Please check if the file exists and you have read privilege.\n");

        exit(EXIT_FAILURE);
    }

    /*
     * Logic to count characters, words, and lines.
     */
     lines = 0;
    while ((ch = fgetc(file)) != EOF) {

        /* Check new line */
        if (ch == '\n')
            lines++;

       
    }
        lines++;

    /* Print file statistics */
    printf("\n");
    printf("Total lines = %d\n", lines);

    fclose(file);

    return 0;
}

