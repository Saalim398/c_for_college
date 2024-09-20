#include <stdio.h>

int main() {
    int start = 2;
    int end = 10;
    
    printf("     ");
    for (int i = start; i <= end; i++) {
        printf("%4d", i);
    }
    printf("\n");

    printf("    +");
    for (int i = start; i <= end; i++) {
        printf("----");
    }
    printf("\n");

    for (int i = start; i <= end; i++) {
        printf("%2d |", i);
        for (int j = start; j <= end; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}
