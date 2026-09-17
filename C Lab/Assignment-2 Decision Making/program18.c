// Program to check student eligibility

#include <stdio.h>

int main()
{
    float attendance, marks;

    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter marks: ");
    scanf("%f", &marks);

    if(attendance >= 75)
    {
        if(marks >= 40)
        {
            printf("Eligible for exam and Passed");
        }
        else
        {
            printf("Eligible for exam but Failed");
        }
    }
    else
    {
        printf("Not eligible for exam");
    }

    return 0;
}