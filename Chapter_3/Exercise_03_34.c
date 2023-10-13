// A palindrome is a number or a text phrase that reads the same backwards as forward.
// For example, each of the following five-digit integers is a palindrome: 12321, 55555, 45554 and 11611.
// Write a program that reads in a five-digit integer and determines whether or not it's a palindrome.
// [Hint: Use the division and remainder operators to separate the number into its individual digits.]

#include <stdio.h>

int main(void)
{
    int palindrome;

    printf("%s", "Enter a five-digit integer: ");
    scanf("%d", &palindrome);

    int firstNumber = palindrome / 10000;
    int secondNumber = (palindrome / 1000) % 10;
    int fourthNumber = (palindrome / 10) % 10;
    int fifthNumber = palindrome % 10;

    if (firstNumber == fifthNumber && secondNumber == fourthNumber) {
        printf("%s", "You have entered a palindrome!\n");
    }
    else {
        printf("%s", "This is not a palindrome.\n");
    }

    return 0;
}