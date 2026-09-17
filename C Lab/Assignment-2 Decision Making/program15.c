// Program to calculate electricity bill

#include <stdio.h>

int main()
{
    int units;

    printf("Enter the units: ");
    scanf("%d", &units);

    if(units >= 0 && units <= 100)
    {
        printf("Low usage");
    }
    else if(units >= 101 && units <= 200)
    {
        printf("Medium usage");
    }
    else if(units >= 201 && units <= 300)
    {
        printf("High usage");
    }
    else if(units > 300)
    {
        printf("Very high usage");
    }
    else
    {
        printf("Invalid units");
    }

    return 0;
}