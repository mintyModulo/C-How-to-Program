// Using an approach similar to Exercise 3.23, find the two largest values of the 10 numbers.
// [Note: You may input each number only once.]

#include <stdio.h>

int main(void)
{
    unsigned int counter;
    unsigned int number;
    unsigned int largest;
    unsigned int secondLargest;
    unsigned int nextNumber;

    counter = 1;
    secondLargest = 0;
    largest = 0;

    printf("%s", "Enter a non-negative integer: ");
    scanf("%u", &number);

    largest = number;

    while (counter < 10) {
        printf("%s", "Enter a non-negative integer: ");
        scanf("%u", &nextNumber);

        if (nextNumber > largest) {
            secondLargest = largest;
            largest = nextNumber;
        }

        else if (nextNumber > secondLargest) {
            secondLargest = nextNumber;
        }
        
        counter++;
    }

    printf("The largest integer is %u\n", largest);
    printf("The second largest integer is %u\n", secondLargest);

    return 0;
}