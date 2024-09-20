#include <stdio.h>

struct Student {
    int roll_number;
    float marks_obtained;
};

int main() {
    struct Student students[100];
    int n;
    int topper = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &students[i].roll_number);

        printf("Marks Obtained: ");
        scanf("%f", &students[i].marks_obtained);
    }

    for (int i = 1; i < n; i++) {
        if (students[i].marks_obtained > students[topper].marks_obtained) {
            topper = i;
        }
    }

    printf("\nTopper of the class:\n");
    printf("%s\t %s\n", "Roll No", "Marks Obtained");
    printf("---------------------\n");
    printf("%d\t %.2f\n", students[topper].roll_number, students[topper].marks_obtained);

    return 0;
}