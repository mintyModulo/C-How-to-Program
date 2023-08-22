// Create a BMI calculator application that reads the user's weight in pounds and height in inches, then calculates and displays the user's body mass index.
// Also, the application should display the following information from the Department of Health and Human Services/National Institutes of Health so the user can evaluate his/her BMI:
// BMI VALUES
// Underweight: less than 18.5
// Normal: between 18.5 and 24.9
// Overweight: between 25 and 29.9
// Obese: 30 or greater

#include <stdio.h>

int main(void)
{
    int weight;
    int height;

    printf("Weight in pounds: ");
    scanf("%d", &weight);

    printf("Height in inches: ");
    scanf("%d", &height);

    if (height == 0) {
        puts("Division by zero error!");

        return 1;
    }

    const int bmi = (weight * 703) / (height * height);

    printf("\nYour BMI is %d\n", bmi);

    puts("\nBMI VALUES");
    puts("Underweight: less than 18.5");
    puts("Normal:      between 18.5 and 24.9");
    puts("Overweight:  between 25 and 29.9");
    puts("Obese:       30 or greater");

    return 0;
}