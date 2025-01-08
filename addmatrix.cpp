#include <stdio.h>

void matrixAddition(int mat1[][10], int mat2[][10], int mat3[][10], int rows, int columns) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void printMatrix(int mat[][10], int rows, int columns) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%5d", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, columns, i, j;
    int matrix1[10][10], matrix2[10][10], resultMatrix[10][10];

    /* get the number of rows and columns from the user */
    printf("Enter the number of rows and columns (<= 10):");
    scanf("%d%d", &rows, &columns);

    if (rows > 10 || columns > 10) {
        printf("Number of rows/columns is greater than 10\n");
        return 0;
    }

    /* input first matrix */
    printf("Enter the input for the first matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    /* input second matrix */
    printf("Enter the input for the second matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    /* matrix addition */
    matrixAddition(matrix1, matrix2, resultMatrix, rows, columns);

    /* print the matrices and the result */
    printf("\nFirst Matrix:\n");
    printMatrix(matrix1, rows, columns);

    printf("\nSecond Matrix:\n");
    printMatrix(matrix2, rows, columns);

    printf("\nResult of Matrix Addition:\n");
    printMatrix(resultMatrix, rows, columns);

    return 0;
}

