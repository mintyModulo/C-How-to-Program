// Write a program that utilizes looping to print the numbers from 1 to 10 side by side on the same line with three spaces between numbers.

#include <stdio.h>

int main(void)
{
    unsigned int lineLoop = 1;

    while (lineLoop <= 10) {
        printf("%u   ", lineLoop);

        lineLoop++;
    }

    puts("");

    return 0;
}