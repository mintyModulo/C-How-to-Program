// Write a program that inputs three different integers from the keyboard, then prints the sum, the average, the product, the smallest and the largest of these numbers.
// Use only the single-selection form of the if statement you learned in this chapter.
// The screen diaglogue should appear as follows:
// Enter three different integers: 13 27 14
// Sum is 54
// Average is 18
// Product is 4914
// Smallest is 13
// Largest is 27

#include <stdio.h>

int main(void)
{
    int number1;
    int number2;
    int number3;

    printf("Enter three different integers: ");
    scanf("%d %d %d", &number1, &number2, &number3);

    int sum;
    int average;
    int product;
    int largest;
    int smallest;

    smallest = number1;
    largest = number1;

    sum = number1 + number2 + number3;
    average = (number1 + number2 + number3) / 3;
    product = number1 * number2 * number3;

    if (number2 < smallest) {
        smallest = number2;
    }

    if (number3 < smallest) {
        smallest = number3;
    }

    if (largest < number2) {
        largest = number2;
    }

    if (largest < number3) {
        largest = number3;
    }

    printf("Sum is %d\n", sum);
    printf("Average is %d\n", average);
    printf("Product is %d\n", product);
    printf("Smallest is %d\n", smallest);
    printf("Largest is %d\n", largest);

    return 0;
}