// Write a program that asks the user to enter two numbers, obtains them from the user and prints their sum, product, difference, quotient and remainder.

#include <stdio.h>

int main(void)
{
    int number1;
    int number2;

    printf("Enter in two numbers and calculations will performed on them: ");
    scanf("%d %d", &number1, &number2);

    int sum;
    int product;
    int difference;
    int quotient;
    int remainder;

    sum = number1 + number2;
    product = number1 * number2;
    difference = number1 - number2;
    quotient = number1 / number2;
    remainder = number1 % number2;

    printf("The sum of the numbers is %d\n", sum);
    printf("The product of the numbers is %d\n", product);
    printf("The difference of the numbers is %d\n", difference);
    printf("The quotient of the two numbers is %d\n", quotient);
    printf("The remainder of the two numbers is %d\n", remainder);

    return 0;
}