// Write a program that prints 100 asterisks, one at a time.
// After every tenth asterisk, your program should print a newline character.
// [Hint: Count from 1 to 100. Use the remainder operator to recognize each time the counter reaches a multiple of 10.]
#include <stdio.h>

int main(void)
{
    int count = 1;

    while (count <= 100) {
        printf("%s", "*");

        if (count % 10 == 0) {
            puts("");
        }

        count++;
    }

    return 0;
}