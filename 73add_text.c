#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    fp = fopen("file.txt", "a"); 

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    fprintf(fp, "%s", str);

    fclose(fp);
    printf("String appended to file successfully.\n");
    return 0;
}