#include <stdio.h>
#include <stdbool.h> 

bool isPalindrome(char str[]) {
    int start = 0; 
    int end = 0;   
    while (str[end] != '\0') {
        end++;
    }
    end--; 

    while (start < end) {
        if (str[start] != str[end]) {
            return false; 
        }
        start++;
        end--;
    }
    return true; 
}

int main() {
    char str[100]; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0'; 
    }

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
