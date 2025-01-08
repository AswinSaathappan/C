#include<stdio.h>
#include<math.h>

int main() {
    int bin=0, dec , r, i = 0;
    
    printf("Enter a decimal number:");
    scanf("%d", &dec);

    while (dec > 0) {
        r = dec % 2;
        bin = bin + r * pow(10, i);
        i = i + 1;
        dec = dec / 2;
    }

    printf("Decimal equivalent = %d", bin);

    return 0;
}

