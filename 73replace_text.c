#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    fp = fopen("file.txt", "w"); 

    if (fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    fprintf(fp, "%s", str);

    fclose(fp);
    printf("String written to file successfully.\n");
    return 0;
}