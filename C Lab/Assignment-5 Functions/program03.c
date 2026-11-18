#include <stdio.h>

int leapyear(int year)
{
    if(year % 400 == 0)
        return 1;
    else if(year % 100 == 0)
        return 0;
    else if(year % 4 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int year, result;

    printf("Enter a year: ");
    scanf("%d", &year);

    result = leapyear(year);

    if(result == 1)
        printf("Leap Year");
    else
        printf("Not a Leap Year");

    return 0;
}