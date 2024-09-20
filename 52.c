#include <stdio.h>

int main() {
    int arr[100][100], arr2[100][100], result[100][100], rows, cols, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter the elements of 1st matrix: \n");
            printf("Elemets[%d][%d]", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter the elements of 2nd matrix: \n");
            printf("Elemets[%d][%d]", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("The first matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("The second matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = arr[i][j] + arr2[i][j];
        }
    }

    printf("The sum of matrices is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}