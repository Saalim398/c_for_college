#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, sentences = 0, vowels = 0, consonants = 0, punctuation = 0;

    fp = fopen("file.txt", "r"); 

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (strchr("aeiouAEIOU", ch)) {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isspace(ch)) {
            if (words == 0 || isspace(ch) && !isspace(ch - 1)) {
                words++;
            }
            if (ch == '.' || ch == '?' || ch == '!') {
                sentences++;
            }
        } else {
            punctuation++;
        }
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Sentences: %d\n", sentences);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Punctuation marks: %d\n", punctuation);

    return 0;
}