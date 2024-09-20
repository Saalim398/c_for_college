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
    p = &arr[0];
    for (int i = 0; i < n; i++)
    {
        printf("%d", *p);
        p = p + 1;
    }
}