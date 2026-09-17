// Program for the grade description

#include <stdio.h>

int main()
{
    char grade;

    printf("Enter the grade: ");
    scanf(" %c", &grade);

    switch(grade)
    {
        case 'A':
        case 'a':
            printf("Excellent");
            break;

        case 'B':
        case 'b':
            printf("Very Good");
            break;

        case 'C':
        case 'c':
            printf("Good");
            break;

        case 'D':
        case 'd':
            printf("Average");
            break;

        case 'F':
        case 'f':
            printf("Fail");
            break;

        default:
            printf("Invalid grade");
    }

    return 0;
}