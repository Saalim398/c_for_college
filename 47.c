#include <stdio.h>

int linearSearch(int arr[], int search)
{
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == search)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int search = 3;

    int index = linearSearch(array, search);

    if (index != -1)
    {
        printf("Element %d found at index %d.\n", search, index);
    }
    else
    {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}
