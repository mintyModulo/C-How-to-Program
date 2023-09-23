// Write a program that demonstrates the differnce between predecrementing and postdecrementing using the decrement oprator --

#include <stdio.h>

int main(void)
{
    int x = 5;

    printf("Integer = %d\n", x);
    printf("Integer predecrement = %d\n", --x);
    printf("Integer = %d\n", x);
    printf("Integer postdecrement = %d\n", x--);
    printf("Integer = %d\n", x);

    return 0;
}