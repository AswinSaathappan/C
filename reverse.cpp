#include <stdio.h>

int reverse(int n) {
    int s = 0;
    int r;
    while (n != 0) {
    	r= n % 10;
        s = s * 10 + r;
        n /= 10;
    }
    return s;
}

int main() {
    int number, Reverse;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    Reverse = reverse(number);
    printf("The reverse of %d is: %d", number, Reverse);
    return 0;
}
