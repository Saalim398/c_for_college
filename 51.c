#include <stdio.h>

#define MAX 100  

int main() {
    int matrix[MAX][MAX];
    int rows, cols;
    int i, j;
    int diagonalSum = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows != cols) {
        printf("Diagonal elements can only be summed for a square matrix.\n");
        return 1;  
    }

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element[%d][%d]",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows; i++) {
        diagonalSum += matrix[i][i];  
    }

    printf("Sum of the diagonal elements: %d\n", diagonalSum);

    return 0;
}
