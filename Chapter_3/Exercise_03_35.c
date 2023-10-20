// Input an integer (5 digits or fewer) containing only 0s and 1s (i.e., a "binary" integer) and print its decimal equivalent.
// [Hint: Use the remainder and and division operators to pick off the "binary" number's digits one at a time from right to left.
// Just as in the decimal number system, in which teh rightmost digit has a positional value of 1, and the next digit left has a positional value of 10, then 100, then 1000, and so on,
// in the binary number system the rightmost digit has a positional value of 1, the next digit left has a positional value of 2, then 4, then 8 and so on.
// Thus the decimal number 234 can be interpreted as 4 * 1 + 3 * 10 + 2 * 100.
// The decimal equivalent of binary 1101 is 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 or 1 + 0 + 4 + 8 or 13.]

#include <stdio.h>

int main(void)
{
    int binary;

    printf("%s", "Enter an integer (5 digits or fewer) containing only 0s and 1s: ");
    scanf("%d", &binary);

    int firstDigit;
    int secondDigit;
    int thirdDigit;
    int fourthDigit;
    int fifthDigit;
    int total;

    if (binary <= 1) {
        firstDigit = binary / 1;
        total = firstDigit * 1;
    }
    else if (binary <= 11 && binary > 1) {
        firstDigit = binary % 10;
        secondDigit = binary / 10;
        total = (firstDigit * 1) + (secondDigit * 2);
    }
    else if (binary <= 111 && binary > 11) {
        firstDigit = binary % 10;
        secondDigit = (binary / 10) % 10;
        thirdDigit = binary / 100;
        total = (firstDigit * 1) + (secondDigit * 2) + (thirdDigit * 4);
    }
    else if (binary <= 1111 && binary > 111) {
        firstDigit = binary % 10;
        secondDigit = (binary / 10) % 10;
        thirdDigit = (binary / 100) % 10;
        fourthDigit = binary / 1000;

        total = (firstDigit * 1) + (secondDigit * 2) + (thirdDigit * 4) + (fourthDigit * 8);
    }
    else if (binary <= 11111 && binary > 1111) {
        firstDigit = binary % 10;
        secondDigit = (binary / 10) % 10;
        thirdDigit = (binary / 100) % 10;
        fourthDigit = (binary / 1000) % 10;
        fifthDigit = binary / 10000;

        total = (firstDigit * 1) + (secondDigit * 2) + (thirdDigit * 4) + (fourthDigit * 8) + (fifthDigit * 16);
    }

    printf("%d\n", total);

    return 0;
}