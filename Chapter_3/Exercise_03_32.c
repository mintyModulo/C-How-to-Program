// Write a program that reads in the side of a square and then prints that square out of asterisks.
// Your program should work for squares of all side sizes between 1 and 20.
// For example, if your program reads a size of 4, it should print
//      ****
//      ****
//      ****
//      ****

#include <stdio.h>

int main(void)
{
    unsigned int squareSideSize;
    unsigned int count = 0;
    
    printf("%s", "Enter the size of the side of a square (1-20): ");
    scanf("%u", &squareSideSize);

    while (count < squareSideSize) {
        
        unsigned int row = 0;
        
        while (row < squareSideSize) {
            printf("%s", "*");

            row++;
        }

        puts("");

        count++;
    }

    return 0;
}