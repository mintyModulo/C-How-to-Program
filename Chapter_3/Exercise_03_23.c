// Write a program that inputs a series of 10 non-negative numbers and determines and prints the larges of the numbers.
// [Hint: Your program should use three variables as shown below.]
//      counter:    A counter to count ot 10 (i.e., to keep track of how many numbers have been input and to determine when all 10 numbers have been processed)
//      number:     The current number input to the program
//      largest:    The largest number found so far

#include <stdio.h>

int main(void)
{
    unsigned int counter = 1;
    unsigned int number;
    unsigned int largest;

    printf("%s", "Enter in a non-negative number: ");
    scanf("%u", &number);

    largest = number;

    while (counter < 10) {
        printf("%s", "Enter in a non-negative number: ");
        scanf("%u", &number);

        if (number > largest) {
            largest = number;
        }

        counter++;
    }

    printf("Largest number is %u\n", largest);


    return 0;
}