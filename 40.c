#include <stdio.h>

int main() {
    char array[12] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!'};


    printf("Contents of the character array:\n");
    for (int i = 0; i < 12; i++) {
        printf("%c", array[i]);
    }
    printf("\n");

    return 0;
}
