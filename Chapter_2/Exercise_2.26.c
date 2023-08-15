// Write a program that reads in two integers and determines and prints whether the first is a multiple of the second.
// [Hint: Use the remainder operator.]

#include <stdio.h>

int main(void)
{
    int number1;
    int number2;

    printf("Enter two numbers to determine if the first is a multiple of the second: ");
    scanf("%d %d", &number1, &number2);

    if (number2 == 0) {
        printf("Division by zero error!\n");

        return 1;
    }

    if (number1 % number2 == 0) {
        printf("%d is a mulitple of %d!\n", number1, number2);
    }

    if (number1 % number2 != 0) {
        printf("%d is not a multiple of %d.\n", number1, number2);
    }

    return 0;
}