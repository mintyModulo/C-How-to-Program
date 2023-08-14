// Write a program that reads in the radius of a circle and prints the circle's diameter, circumference and area.
// Use the constant value 3.14159 for pi.
// Perform each of these calculations inside printf statement(s) and use the conversion specifier %f.

#include <stdio.h>

int main(void)
{
    int radius;

    printf("Radius of circle: ");
    scanf("%d", &radius);

    printf("Diameter: %d\n", 2 * radius);
    printf("Circumference: %f\n", 2 * 3.14159 * radius);
    printf("Area: %f\n", 3.14159 * (radius * radius));

    return 0;
}