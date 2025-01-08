#include<stdio.h>
#include<math.h>

int main() {
    int bin, dec = 0, r, i = 0;
    
    printf("Enter a binary number:");
    scanf("%d", &bin);

    while (bin > 0) {
        r = bin % 10;
        dec = dec + r * pow(2, i);
        i = i + 1;
        bin = bin / 10;
    }

    printf("Decimal equivalent = %d", dec);

    return 0;
}

