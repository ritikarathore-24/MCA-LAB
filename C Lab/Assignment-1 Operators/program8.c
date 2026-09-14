// Program to input a student's marks and check whether the student has passed or failed

#include <stdio.h>

int main()
{
    int marks;

    printf("Enter the marks of the student: ");
    scanf("%d", &marks);

    if(marks>=45)
    {
        printf("Student is passed\n");
    }
    else{
        printf("Student is failed\n");
    }

    return 0;
}