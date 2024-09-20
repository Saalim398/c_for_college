#include <stdio.h>

int main() {
    FILE *p;
    char ch;

    p = fopen("file.txt", "r"); 

    if (p == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Contents of the file:\n");
    while ((ch = fgetc(p)) != EOF) {
        printf("%c", ch);
    }


    return 0;
}