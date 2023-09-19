// One large chemical company pays its salespeople on a commision basis. The salespeople receive $200 per week plus 9% of their gross sales for that week.
// For example, a salesperson who sells $5000 worth of chemicals in a week receives $200 plus 9% of $5000, or a total of $650.
// Develop a program that will input each salesperson's gross sales for last week and will calculate and display that salesperson's earnings.
// Process one salesperson's figures at a time.

#include <stdio.h>

int main(void)
{
    float sales;
    float setPay = 200.00;

    printf("%s", "Enter sales in dollars (-1 to end): ");
    scanf("%f", &sales);
    
    // loop until user ends
    while (sales != -1) {
        float totalPay = (sales * .09) + setPay;

        printf("Salary is: $%.2f\n", totalPay);

        printf("%s", "\nEnter sales in dollars (-1 to end): ");
        scanf("%f", &sales);
    } // end while

    return 0;
}