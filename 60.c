#include <stdio.h>

#define PI 3.14159
#define AREA_OF_CIRCLE(r) (PI * (r) * (r))

int main() {
    float r, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    area = AREA_OF_CIRCLE(r);

    printf("The area of the circle = %f\n", area);

    return 0;
}
