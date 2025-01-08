#include <stdio.h>

#define MIN(a, b) ((a < b) ? a : b)

int main() {
    int num1 = 10;
    int num2 = 5;

    int minVal = MIN(num1, num2);

    printf("The minimum value is: %d\n", minVal);

    return 0;
}

