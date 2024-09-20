#include <stdio.h>
#include <string.h>

struct student {
    int roll_number;
    char name[50];
    float marks;
    char grade;
};

int main() {
    struct student s;
    s.roll_number = 69;
    strcpy(s.name, "imad");
    s.marks = 100;
    s.grade = 'A';

    printf("Roll number: %d\nName: %s\nMarks: %.2f\nGrade: %c\n", s.roll_number, s.name, s.marks, s.grade);

    return 0;
}
