#include <stdio.h>

void sort(int *, int);

int main() {
    int a[5] = {5, 3, 2, 9, 1};
    int n = 5;
    int *p = a; 

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    sort(p, n);

    printf("After sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

void sort(int *q, int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(q + j) > *(q + j + 1)) {
                temp = *(q + j);
                *(q + j) = *(q + j + 1);
                *(q + j + 1) = temp;
            }
        }
    }
}
