#include <stdio.h>
#include<math.h>

int main() {
    int i, n;
    float x, sum = 1, t = 1;

    printf("Enter the value for x in degrees: ");
    scanf("%f", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    x = x * M_PI/ 180;

    for (i = 1; i <= n; i++) {
        t = (t * (-1) * x * x) / (2 * i * (2 * i - 1));
        sum = sum + t;
    }

    printf("The value of Cos(%.f') = %.4f\n", x * 180 / 3.14159, sum);

    return 0;
}

