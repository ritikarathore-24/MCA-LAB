// Program to calculate temperature

#include <stdio.h>

int main()
{
    int temp;

    printf("Enter the temperature: ");
    scanf("%d", &temp);

    if (temp>40)
    {
        printf("Very Hot");
    }

    else if (temp>=30 && temp<=40)
    {
        printf("Hot");
    }

    else if (temp>=20 && temp<=29)
    {
        printf("Normal");
    }

    else if (temp>=10 && temp<=19)
    {
        printf("Cold");
    }

    else 
    {
        printf("Very Cold");
    }

    return 0;
}