// Drivers are concerned with the mieage obtained by their automobiles. One driver has kept track of several tankfuls of gasoline by recording miles driven and gallons used for each tankful.
// Develop a program that will input the miles driven and gallons used for each tankful.
// The program should calculate and display the miles per gallon obtained for each tankful.
// After processing all input information, the program should calculate and print the combined miles per gallon obtained for all tankfuls.

#include <stdio.h>

int main(void)
{
    int gallonsUsed;
    unsigned int milesDriven;

    printf("%s", "Enter the gallons used (-1 to end): ");
    scanf("%d", &gallonsUsed);

    while (gallonsUsed != -1) {
        printf("%s", "Enter the miles driven: ");
        scanf("%u", &milesDriven);

    } // end while
    
    // printf("The miles/gallon for this tank was %f\n", someVariable);


    return 0;
}