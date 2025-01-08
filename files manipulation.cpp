#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;

    char ch;
    int characters, words, lines;

    /* Open source files in 'r' mode */
    file = fopen("new.txt", "r");

    /* Check if file opened successfully */
    if (file == NULL) {
        printf("\nUnable to open file.\n");
        printf("Please check if the file exists and you have read privilege.\n");

        exit(EXIT_FAILURE);
    }

    /*
     * Logic to count characters, words, and lines.
     */
    characters = words = lines = 0;
    while ((ch = fgetc(file)) != EOF) {
    	if(ch!=' ' && ch!='\n')
        characters++;

        /* Check new line */
        if (ch == '\n')
            lines++;

        /* Check words */
        if (ch == ' ' || ch == '\t' || ch == '\n') {
            words++;
        }
    }

    /* Increment words and lines for the last word */
    if (characters > 0) {
        words++;
        lines++;
    }

    /* Print file statistics */
    printf("\n");
    printf("Total characters = %d\n", characters);
    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);

    /* Close the file to release resources */
    fclose(file);

    return 0;
}

