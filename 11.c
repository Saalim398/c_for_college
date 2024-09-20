#include <stdio.h>

int main() {
    float percentage;

    
    printf("Enter the percentage: ");
    scanf("%f", &percentage);

    
    if (percentage >= 90.0) {
        printf("Grade: A\n");
    } else if (percentage >= 80.0) {
        printf("Grade: B\n");
    } else if (percentage >= 70.0) {
        printf("Grade: C\n");
    } else if (percentage >= 60.0) {
        printf("Grade: D\n");
    } else if (percentage >= 50.0) {
        printf("Grade: E\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}
