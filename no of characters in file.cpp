#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;

    char ch;
    int characters;

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
    characters=0;
    while ((ch = fgetc(file)) != EOF) 
	{
    	if(ch!=' ' && ch!='\n')
        characters++;
    }
    printf("\n");
    printf("Total characters = %d\n", characters);
    /* Close the file to release resources */
    fclose(file);

    return 0;
}

