#include <stdio.h>
#include <math.h>

int main() {
    int num, n1, i = 0, originalNum, remainder, result = 0;
    printf("Enter number:");
    scanf("%d", &num);

    originalNum = num;  // Store the original value before modification

    while (num != 0) {
        n1 = num % 10;
        i++;
        num /= 10;
    }

    printf("Number of digit is %d\n", i);

    num = originalNum;  // Restore the original value for further calculations

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, i);
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
