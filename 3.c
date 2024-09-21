#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter 1st number: ");
    scanf("%d", &x);
    printf("Enter 2nd number: ");
    scanf("%d", &y);
    if (x > y)
    {
        printf("%d is greater than %d", x, y);
    }
    else
    {
        printf("%d is greatest than %d", y, x);
    }

    return 0;
}
