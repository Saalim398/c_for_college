#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of times to repeat the series: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}