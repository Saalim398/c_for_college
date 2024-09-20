#include <stdio.h>

int main()
{
    int num_rows = 4;

    for (int i = 1; i <= num_rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
