#include <stdio.h>

void bubbleSort(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    bubbleSort(array, size);

    printf("Sorted array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
