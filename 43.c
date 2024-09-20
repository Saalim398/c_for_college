#include <stdio.h>

int main() {
    char str[100]; 
    int length = 0; 

    printf("Enter a string: ");
    
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0') {
        length++;
    }

    if (length > 0 && str[length - 1] == '\n') {
        length--; 
    }

    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}
