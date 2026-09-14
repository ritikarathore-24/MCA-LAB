// Program to input marks and print: Pass if marks are 40 0r above Fail otherwise

#include <stdio.h>

int main()
{
    int marks;

    printf("Enter the marks: ");
    scanf("%d", &marks);

    if(marks>=40)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}