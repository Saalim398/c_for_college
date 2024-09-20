#include <stdio.h>

int main()
{
    char str[100];
    char *p;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    p = str;
    while (*p != '\0')
    {
        p++;
    }

    p--;

    printf("String in reverse order:");
    while (p >= str)
    {
        printf("%c", *p);
        p--;
    }

    return 0;
}
