// Modify the program you wrote in Exercise 3.32 so that it prints a hollow square.
// For example, if your program reads a size 5, it should print
//      *****
//      *   *
//      *   *
//      *****

#include <stdio.h>

int main(void)
{
    unsigned int squareSideSize;
    unsigned int count = 0;
    
    printf("%s", "Enter the size of the side of a square (1-20): ");
    scanf("%u", &squareSideSize);

    while (count < squareSideSize) {   
        unsigned int column = 0;
        
        while (column < squareSideSize) {

            if (count == 0 || count == squareSideSize - 1 || column == 0 || column == squareSideSize - 1) {
                printf("%s", "*");
            }
            else {
                printf("%s", " ");
            }

            column++;
        }
        
        puts("");

        count++;
    }

    return 0;
}