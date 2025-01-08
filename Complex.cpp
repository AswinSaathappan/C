#include <stdio.h>
//Defing a structure
struct Complex {
    float real;
    float imag;
};

int main() {
    struct Complex num1, num2, sum;//Declaring struct variable
    //First part of the complex
    printf("Enter real and imaginary parts for the first complex number:\n");
    printf("Real part: ");
    scanf("%f", &num1.real);
    printf("Imaginary part: ");
    scanf("%f", &num1.imag);
    //Second part of the complex
    printf("\nEnter real and imaginary parts for the second complex number:\n");
    printf("Real part: ");
    scanf("%f", &num2.real);
    printf("Imaginary part: ");
    scanf("%f", &num2.imag);
    //Adding the complex parts
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;
    //Print the result
    printf("\nSum: %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}

