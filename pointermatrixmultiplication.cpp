#include <stdio.h>

void matrixMultiplication(int (*mat1)[10], int (*mat2)[10], int (*mat3)[10], int rows1, int columns1, int columns2) {
 /*if (columns1 != rows2) {
        printf("Matrix multiplication is not possible. Columns of the first matrix should be equal to rows of the second matrix.\n");
        return;
    }*/

    int i, j, k, sum;

    for (i = 0; i < rows1; i++) {
        for (j = 0; j < columns2; j++) {
            sum = 0;
            for (k = 0; k < columns1; k++) {
                sum += mat1[i][k] * mat2[k][j];
            }
            mat3[i][j] = sum;
        }
    }
}

void printMatrix(int (*mat)[10], int rows, int columns) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%5d", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows1, columns1, rows2, columns2, i, j;
    int matrix1[10][10], matrix2[10][10], resultMatrix[10][10];

    /* get the number of rows and columns for the first matrix from the user */
    printf("Enter the number of rows and columns for the first matrix (<= 10):");
    scanf("%d%d", &rows1, &columns1);

    /* get the number of rows and columns for the second matrix from the user */
    printf("Enter the number of rows and columns for the second matrix (<= 10):");
    scanf("%d%d", &rows2, &columns2);

    if (columns1 != rows2 || rows1 > 10 || columns1 > 10 || rows2 > 10 || columns2 > 10) {
        printf("Invalid input. Matrix multiplication is not possible.\n");
        return 0;
    }
  else
  {
    /* input first matrix */
    printf("Enter the input for the first matrix:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < columns1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    /* input second matrix */
    printf("Enter the input for the second matrix:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < columns2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    /* matrix multiplication */
    matrixMultiplication(matrix1, matrix2, resultMatrix, rows1, columns1,  columns2);

    /* print the matrices and the result */
    printf("\nFirst Matrix:\n");
    printMatrix(matrix1, rows1, columns1);

    printf("\nSecond Matrix:\n");
    printMatrix(matrix2, rows2, columns2);

    printf("\nResult of Matrix Multiplication:\n");
    printMatrix(resultMatrix, rows1, columns2);
}
    return 0;
}

