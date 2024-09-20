#include <stdio.h>

int searchArray(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size]; 

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int target;

    printf("Enter the value to search for: ");
    scanf("%d", &target);

    int index = searchArray(arr, size, target);

    if (index != -1) {
        printf("Value %d found at index %d.\n", target, index);
    } else {
        printf("Value %d not found in the array.\n", target);
    }

    return 0;
}
