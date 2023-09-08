// Drivers are concerned with the mieage obtained by their automobiles. One driver has kept track of several tankfuls of gasoline by recording miles driven and gallons used for each tankful.
// Develop a program that will input the miles driven and gallons used for each tankful.
// The program should calculate and display the miles per gallon obtained for each tankful.
// After processing all input information, the program should calculate and print the combined miles per gallon obtained for all tankfuls.

#include <stdio.h>

int main(void)
{
    float gallonsUsed;
    float milesDriven;
    float overallGallonsUsed = 0;
    float overallMilesDriven = 0;

    printf("%s", "Enter the gallons used (-1 to end): ");
    scanf("%f", &gallonsUsed);

    while (gallonsUsed != -1) {
        printf("%s", "Enter the miles driven: ");
        scanf("%f", &milesDriven);

        float totalMilesDriven = milesDriven / gallonsUsed;

        overallGallonsUsed = overallGallonsUsed + gallonsUsed;
        overallMilesDriven = overallMilesDriven + milesDriven;        

        printf("The miles/gallon for this tank was %f\n", totalMilesDriven);

        printf("%s", "Enter the gallons used (-1 to end): ");
        scanf("%f", &gallonsUsed);
    } // end while
    
    printf("The overall average miles/gallon was %f\n", overallMilesDriven / overallGallonsUsed);

    return 0;
}