#include <stdio.h>
int main()
{
    int n;
    unsigned long long int fact = 1;
    printf("Enter the value of n:");

    scanf("%d", &n);
for(int i=1;i<=n;i++)

{
fact*=i;
}
printf("factorial of a number is %llu",fact);
    return 0;
}