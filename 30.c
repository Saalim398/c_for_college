#include <stdio.h>

int main() {
    printf("Using continue and break in a loop:\n");

    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;
        }
        if (i == 8) {
            break;
        }
        printf("%d ", i);
    }

    printf("\nLoop exited.\n");

    return 0;
}
