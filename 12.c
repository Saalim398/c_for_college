#include <stdio.h>

int main() {
    int option;

    
    printf("Enter a number (1, 2, or 3): ");
    scanf("%d", &option);

    
    switch (option) {
        case 1:
            printf("Salaam\n");
            break;
        case 2:
            printf("Aadaab\n");
            break;
        case 3:
            printf("Hello\n");
            break;
        default:
            printf("Incorrect Option\n");
            break;
    }

    return 0;
}
