#include <stdio.h>
int main()
{
    int i, num, temp = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            temp++;
            break;
        }
    }
    if (temp == 0 && num != 1)
    {
        printf("%d is a Prime number", num);
    }
    else
    {
        printf("%d is not a Prime number", num);
    }
    return 0;
}