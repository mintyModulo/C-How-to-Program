// Write a program that inputs one five-digit number, seperates the number into its individual digits and prints the digits separated from one another by three spaces each.
// [Hint: Use combinations of integer division and the remainder operation.]
// For example, if the user types in 42139, the program should print
// 4   2   1   3   9

#include <stdio.h>

int main(void)
{
    int fiveDigitNumber;

    printf("Enter in a five-digit number: ");
    scanf("%d", &fiveDigitNumber);

    int firstDigit = fiveDigitNumber / 10000;
    int secondDigit = (fiveDigitNumber / 1000) % 10;
    int thirdDigit = (fiveDigitNumber / 100) % 10;
    int fourthDigit = (fiveDigitNumber / 10) % 10;
    int fifthDigit = (fiveDigitNumber % 10);

    printf("%d   %d   %d   %d   %d\n", firstDigit, secondDigit, thirdDigit, fourthDigit, fifthDigit);
    
    return 0;
}