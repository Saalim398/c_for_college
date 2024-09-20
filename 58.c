#include <stdio.h>

int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    }
    if (m > 0 && n == 0) {
        return ackermann(m - 1, 1);
    }
    if (m > 0 && n > 0) {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
    return -1; 
}

int main() {
    int m, n;

    printf("Enter non-negative integers m and n:\n");
    printf("m: ");
    scanf("%d", &m);
    printf("n: ");
    scanf("%d", &n);

    if (m < 0 || n < 0) {
        printf("Both m and n must be non-negative integers.\n");
    } else {
        printf("Ackermann(%d, %d) = %d\n", m, n, ackermann(m, n));
    }

    return 0;
}
