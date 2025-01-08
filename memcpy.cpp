#include <stdio.h>
#include<stdlib.h>
#include <string.h> // Include string.h for memcpy

int main()
{
    struct student {
        int age;
        char name[20];
        int roll;
    }; // Add a semicolon here to end the struct definition

    struct student s1 = {20, "Aswin", 7};
    struct student *s2; // Declare s2 as a pointer to struct student
    struct student ptr = s1; // Directly assign s1 to ptr

    s2 = (struct student *)malloc(sizeof(struct student)); // Allocate memory for s2

    memcpy(s2, &ptr, sizeof(struct student)); // Correct usage of memcpy

    printf("age: %d\nname: %s\nroll: %d\n", s2->age, s2->name, s2->roll);

    free(s2); // Free dynamically allocated memory
    return 0;
    

}

