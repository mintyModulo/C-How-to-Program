// Write a program that reads in three integers and then determines and prints the largest and the smallest integers in the group.
// Use only the programming techniques you have learned in this chapter.

#include <stdio.h>

int main(void)
{
    int number1;
    int number2;
    int number3;

    printf("Enter in three integers: ");
    scanf("%d %d %d", &number1, &number2, &number3);

    int smallest;
    int largest;

    smallest = number1;

    if (smallest > number2) {
        smallest = number2;
    }

    if (smallest > number3) {
        smallest = number3;
    }

    largest = number1;

    if (largest < number2) {
        largest = number2;
    }

    if (largest < number3) {
        largest = number3;
    }

    printf("The smallest integer is %d\n", smallest);
    printf("The largest integer is %d\n", largest);

    return 0;
}