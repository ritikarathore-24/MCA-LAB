// Program to input salary and print "High Salary" if salary is greater than ₹50,000.

#include <stdio.h>

int main()
{
    int salary;

    printf("Enter the salary: ");
    scanf("%d", &salary);

    if(salary>50000)
    {
        printf("High Salary");
    }

    return 0;
}