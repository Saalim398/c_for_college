#include <stdio.h>

int main()
{
    int arr[100], n;
    int *p;

    printf("Enter the size of an array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    p = &arr[n - 1];

    printf("The elements of the array are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *p);
        p--;
    }

    return 0;
}