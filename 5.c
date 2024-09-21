#include <stdio.h>
int main()
{
    const double PI = 3.14159;

    double radius, area;
    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;

    printf("Area of a given cirsle is %lf ",area);

    return 0;
}