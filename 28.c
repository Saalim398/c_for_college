#include <stdio.h>

int main() {
    int number;

    printf("Enter a natural number: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a natural number greater than 0.\n");
        return 1; 
    }

    printf("Digits in reverse order: ");
    while (number > 0) {
        int digit = number % 10; 
        printf("%d", digit);    
        number /= 10;            
    }
    printf("\n");

    return 0;
}
