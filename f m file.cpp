#include <stdio.h>

int main() {
    FILE *maleFile, *femaleFile,*oddemp,*evenemp;
    int empId;
    char empName[50], gender;

    // Open files for male and female employees
    maleFile = fopen("male.txt", "w");
    femaleFile = fopen("female.txt", "w");

    if (maleFile == NULL || femaleFile == NULL) {
        printf("Error opening files for writing.\n");
        return 1; // Exit with an error code
    }

    // Write headers to the files
    fprintf(maleFile, "EmpId EmpName\n");
    fprintf(femaleFile, "EmpId EmpName\n");

    printf("Enter employee details (0 to stop):\n");

    while (1) {
        printf("Enter employee ID (or 0 to stop): ");
        scanf("%d", &empId);

        if (empId == 0) {
            break; // Stop entering data if the user enters 0
        }

        printf("Enter employee name: ");
        scanf("%s", empName);

        printf("Enter gender (M/F): ");
        scanf(" %c", &gender);

        // Write employee data to respective files
        if (gender == 'M' || gender == 'm') {
            fprintf(maleFile, "%d      %s\n", empId, empName);
        } else if (gender == 'F' || gender == 'f') {
            fprintf(femaleFile, "%d       %s\n", empId, empName);
        } else {
            printf("Invalid gender! Please enter 'M' or 'F'.\n");
        }
    }

    // Close files
    fclose(maleFile);
    fclose(femaleFile);

    printf("Employee data separated into male.txt and female.txt successfully.\n");




   return 0;
}



