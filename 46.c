#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 0;
    for (int i = 0; i <= 4; i++)
    {
        n += arr[i];
        
    }
    printf("The sum of elements: %d ",n);
    return 0;
}