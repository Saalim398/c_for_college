#include <stdio.h>

int main() {
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter %d integer(s):\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i);
        scanf("%d", &array[i]);
    }

    printf("Array in reverse order:\n");
    for (int i = size - 1; i >= 0; i--) {
        printf("Element %d: %d\n", i, array[i]);
    }

    return 0;
}
