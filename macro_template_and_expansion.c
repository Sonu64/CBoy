#include <stdio.h>
#define PI 3.141
#define RECTANGLE(LENGTH, BREADTH) (LENGTH * BREADTH)
#define CIRCLE(RADIUS) (PI * RADIUS * RADIUS)

int main() {

    printf("Enter Length and Breadth of the Rectangle: ");
    float l,b,r;
    scanf("%f %f", &l, &b);
    printf("Area of the Rectangle %f sq. units.\n", RECTANGLE(l, b));

    printf("\n\n");

    printf("Enter radius of circle: ");
    scanf("%f", &r);
    printf("Area of the Circle is %f sq. units.\n", CIRCLE(r));

    return 0;
}
