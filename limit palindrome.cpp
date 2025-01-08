#include <stdio.h>

int main() {
    int lowerLimit, upperLimit;

    // Input the range
    printf("Enter the lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter the upper limit: ");
    scanf("%d", &upperLimit);

    printf("Palindrome numbers between %d and %d are:\n", lowerLimit, upperLimit);

    // Check and print palindrome numbers in the given range
    for (int i = lowerLimit; i <= upperLimit; i++) {
        int num = i;
        int reversed = 0, original = num;

        // Reverse the number
        while (num != 0) {
            reversed = reversed * 10 + num % 10;
            num /= 10;
        }

        // Check if the number is palindrome
        if (original == reversed) {
            printf("%d\n", original);
        }
    }

    return 0;
}
