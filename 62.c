#include <stdio.h>

struct Student
{
    int roll_number;
    float marks_obtained;
    float total_marks;
};

int main()
{
    struct Student s[100];
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll_number);

        printf("Marks Obtained: ");
        scanf("%f", &s[i].marks_obtained);

        printf("Total Marks: ");
        scanf("%f", &s[i].total_marks);
    }

    printf("\nStudent Information:\n");
    printf("%s\t %s\t %s\n", "Roll No", "Marks Obtained", "Total Marks");
    printf("-------------------------------------\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t %.2f\t %.2f\n", s[i].roll_number, s[i].marks_obtained, s[i].total_marks);
    }

    return 0;
}