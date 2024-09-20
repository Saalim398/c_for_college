#include <stdio.h>

void swapNumbers(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swapNumbers(num1, num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}