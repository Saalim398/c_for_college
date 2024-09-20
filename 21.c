#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The series is:\n");
    int term = 2;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", term);
        term *= 2;
    }
    return 0;
}
