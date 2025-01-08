#include<stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num && (num & (num - 1)) == 0) {
        printf("%d is a power of 2\n", num);
    } else {
        printf("The number is not a power of 2\n");
    }
    return 0;
}


