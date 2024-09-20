#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The series is:\n");
    for (i = 0; i < n; i++)
    {
        int exponent = (int)pow(2, i);
        unsigned long long term = (unsigned long long)pow(2, exponent);
        printf("%llu ", term);
    }
       return 0;
}
