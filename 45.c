#include <stdio.h>
#include <string.h>

void reverse_string(char *str) {
    int length = strlen(str);
    int i;
    char temp;
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[200]; 

    int length = strlen(str1);
    printf("Length of str1: %d\n", length);

    strcpy(str3, str1);
    printf("After strcpy, str3: %s\n", str3);

    strcat(str3, str2);
    printf("After strcat, str3: %s\n", str3);

    int cmp_result = strcmp(str1, str2);
    if (cmp_result < 0) {
        printf("str1 is less than str2\n");
    } else if (cmp_result > 0) {
        printf("str1 is greater than str2\n");
    } else {
        printf("str1 is equal to str2\n");
    }

    reverse_string(str1);
    printf("After reverse_string, str1: %s\n", str1);

    return 0;
}
