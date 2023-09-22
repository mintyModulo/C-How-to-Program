// Develop a program that will determine the gross pay for each of several employees.
// The company pays "straight time" for the first 40 hours worked by each employee and pays "time-and-a-half" for all hours worked in excess of 40 hours.
// You're given a list of the employees of the company, the number of hours each employee worked last week and the hourly rate of each employee.
// Your program should input this information for each employee and should determine and display the employee's gross pay.

#include <stdio.h>

int main(void)
{
    int hoursWorked;
    

    printf("%s", "Enter # of hours worked (-1 to end): ");
    scanf("%d", &hoursWorked);

    while (hoursWorked != -1) {
        float hourlyRate;
        
        printf("%s", "Enter hourly rate of the worker (00.00): ");
        scanf("%f", &hourlyRate);

        float straightTime = hoursWorked * hourlyRate;
        
        if (hoursWorked <= 40) {
            
            

            printf("Salary is %.2f\n", straightTime);
        }
        else {
            float overtime = hoursWorked - 40;
            float overtimePay = (hourlyRate * .5) *overtime;

            printf("Salary is %.2f\n", overtimePay + straightTime);
        }

        printf("%s", "\nEnter # of hours worked (-1 to end): ");
        scanf("%d", &hoursWorked);
    }



    return 0;
}