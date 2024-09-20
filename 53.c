#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns of matrix 1: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the number of rows and columns of matrix 2: ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) {
        printf("Error: The number of columns in matrix 1 must be equal to the number of rows in matrix 2.\n");
        return 1;
    }

    int matrix1[rows1][cols1], matrix2[rows2][cols2], result[rows1][cols2];

    printf("Enter the elements of matrix 1:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of matrix 2:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("The product of the matrices is:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}