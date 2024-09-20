#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("a + b = %d\n", add(num1, num2));
    printf("a - b = %d\n", subtract(num1, num2));
    printf("b - a = %d\n", subtract(num2, num1));

    return 0;
}