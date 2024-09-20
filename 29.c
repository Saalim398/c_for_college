#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, sum = 0, digits = 0;
    int temp, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    temp = number;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = number;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    if (sum == originalNumber) {
        printf("%d is an Armstrong number.\n", originalNumber);
    } else {
        printf("%d is not an Armstrong number.\n", originalNumber);
    }

    return 0;
}
