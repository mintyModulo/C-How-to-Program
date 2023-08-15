// Write a program that reads an integer and determines and prints whether it's odd or even.
// [Hint: Use the remainder operator. An even number is a multiple of two. Any multiple of two leaves a remainder of zero when deivded by 2.]

#include <stdio.h>

int main(void)
{
    int number1;

    printf("Enter an integer to determine if it is odd or even: ");
    scanf("%d", &number1);

    if (number1 % 2 == 0) {
        printf("%d is even.\n", number1);
    }

    if (number1 % 2 != 0) {
        printf("%d is odd.\n", number1);
    }

    return 0;
}