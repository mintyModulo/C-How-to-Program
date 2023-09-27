// Write a program that uses looping to print the following table of values.
// Use the tab escape sequence, \t, in the printf statement to separte the coluns with tabs.
// N    10*N    100*N   1000*N
//
// 1    10      100     1000
// 2    20      200     2000
// 3    30      300     3000
// 4    40      400     4000
// 5    50      500     5000
// 6    60      600     6000
// 7    70      700     7000
// 8    80      800     8000
// 9    90      900     9000
// 10   100     1000    10000

#include <stdio.h>

int main(void)
{
    printf("%s", "N\t10*N\t100*N\t1000*N\n\n");

    unsigned int n = 1;

    while (n <= 10){
        printf("%u\t%u\t%u\t%u\n", n, (n * 10), (n * 100), (n * 1000));

        n++;
    }

    return 0;
}