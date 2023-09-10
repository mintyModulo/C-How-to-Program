// Develop a C program that will determine whether a department store customer has exceeded the credit limit on a charge account.
// For each customer, the following facts are available:
//      a) Account number
//      b) Balance at the beginning of the month
//      c) Total of all items charged by this customer this month
//      d) Total of all credits applied to this customer's account this month
//      e) Allowed credit limit
//  The program should input each fact, calculate the new balance (= beginning balance + charges - credits), and determine whether the new balance exceeds the customer's credit limit.
// For those customers whose credit limit is exceeded, the program should display the customer's account number, credit limit, new balance and the message "Credit limit exceeded."

#include <stdio.h>

int main(void)
{
    int accountNumber;
    float beginningBalance;
    float totalCharges;
    float totalCredits;
    float creditLimit;

    // obtain value from user
    printf("%s", "Enter account number (-1 to end): ");
    scanf("%d", &accountNumber);

    // loop until user quits (obtain beginning balance, total charges, total credits, credit limiit)
    while (accountNumber != -1) {
        float endingBalance = 0;
        
        printf("%s", "Enter beginning balance: ");
        scanf("%f", &beginningBalance);

        printf("%s", "Enter total charges: ");
        scanf("%f", &totalCharges);

        printf("%s", "Enter total credits: ");
        scanf("%f", &totalCredits);

        printf("%s", "Enter credit limit: ");
        scanf("%f", &creditLimit);

        endingBalance = beginningBalance - totalCredits + totalCharges;

        // display information for being over the credit limit
        if (endingBalance > creditLimit){
            printf("Account:%9d\n", accountNumber);
            printf("Credit limit:%8.2f\n", creditLimit);
            printf("Balance:%13.2f\n", endingBalance);
            puts("Credit Limit Exceeded.");
        } // end if

        printf("%s", "\nEnter account number (-1 to end): ");
        scanf("%d", &accountNumber);
    } // end while

    return 0;
}
