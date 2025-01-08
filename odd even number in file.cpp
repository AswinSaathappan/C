#include <stdio.h>

int main() {
    FILE *numbersFile, *evenFile, *oddFile;
    int number, i;

    // Open the file for writing numbers
    numbersFile = fopen("numbers.txt", "w");

    if (numbersFile == NULL) {
        printf("Error opening file for writing numbers.\n");
        return 1; // Exit with an error code
    }

    printf("Enter 10 numbers:\n");

    // Input numbers and write them to the file
    for (i = 0; i < 10; i++) {
        scanf("%d", &number);
        fprintf(numbersFile, "%d\n", number);
    }

    fclose(numbersFile); // Close the numbers file

    // Open the numbers file for reading
    numbersFile = fopen("numbers.txt", "r");

    if (numbersFile == NULL) {
        printf("Error opening file for reading numbers.\n");
        return 1; // Exit with an error code
    }

    // Open files for even and odd numbers
    evenFile = fopen("even.txt", "w");
    oddFile = fopen("odd.txt", "w");

    if (evenFile == NULL || oddFile == NULL) {
        printf("Error opening files for writing even and odd numbers.\n");
        return 1; // Exit with an error code
    }

    // Read numbers from the file and separate them into even and odd files
    while (fscanf(numbersFile, "%d", &number) != EOF) {
        if (number % 2 == 0)
            fprintf(evenFile, "%d\n", number);
        else
            fprintf(oddFile, "%d\n", number);
    }

    // Close all files
    fclose(numbersFile);
    fclose(evenFile);
    fclose(oddFile);

    printf("Numbers separated into even.txt and odd.txt successfully.\n");
    
    evenFile = fopen("even.txt", "r");
    oddFile = fopen("odd.txt", "r");
    printf("Content in even.txt is \n");
    while(fscanf(evenFile,"%d",&number)!=EOF)
    {
    	printf("%d\n",number);
	}
	printf("Content in odd.txt is \n");
    while(fscanf(oddFile,"%d",&number)!=EOF)
    {
    	printf("%d\n",number);
	}
	fclose(evenFile);
	fclose(oddFile);

    return 0;
}

