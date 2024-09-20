#include <stdio.h>

int main() {
    char str[50];
    char *start, *end;
    int length = 0;

    printf("Enter the string to be checked: ");
    fgets(str, sizeof(str), stdin);

    start = str;
    while (*start != '\0') {
        if (*start == '\n') {
            *start = '\0';
            break;
        }
        start++;
    }

    start = str; 
    while (*start != '\0') {
        length++;
        start++;
    }

    start = str;                 
    end = str + length - 1;     

    while (start < end) {
        if (*start != *end) {
            printf("The string is not a palindrome\n");
            return 0;
        }
        start++;
        end--;
    }

    printf("The string is a palindrome\n");
    return 0;
}
