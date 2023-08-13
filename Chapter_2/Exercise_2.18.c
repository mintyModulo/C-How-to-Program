// Write a program that asks the user to enter two integers, obtains the numbers from the user, then prints the larger number followed by the words "is larger."
// If the numbers are equal, print the message "These numbers are equal."
// Use only the single-selection form of the if statement you learned in this chapter.

#include <stdio.h>

int main(void)
{
    int number1;
    int number2;

    printf("Enter two numbers:");
    scanf("%d %d", &number1, &number2);

    if (number1 > number2) {
        printf("%d is larger.\n", number1);
    }

    if (number2 > number1) {
        printf("%d is larger.\n", number2);
    }

    if (number1 == number2) {
        printf("These numbers are equal.\n");
    }

    return 0;
}