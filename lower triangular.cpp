#include <stdio.h>

#define SIZE 4

int main() {
    int matrix[SIZE][SIZE] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    printf("Lower Triangular Matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (j <= i) {
                printf("%d\t", matrix[i][j]);
            } else {
                printf("0\t");
            }
        }
        printf("\n");
    }

    return 0;
}
