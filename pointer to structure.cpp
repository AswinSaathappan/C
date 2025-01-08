#include <stdio.h>
struct person
{
   int age;
   float weight;
}person1;

int main()
{
    struct person *personPtr;
    personPtr = &person1;   

    printf("Enter age: ");
    scanf("%d", &personPtr->age);//&personPtr->age

    printf("Enter weight: ");//&personPtr->weight
    scanf("%f", &person1.weight);

    printf("Displaying:\n");
    printf("Age: %d\n", personPtr->age);
    printf("weight: %f", personPtr->weight);

    return 0;
}
