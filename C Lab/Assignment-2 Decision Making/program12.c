// Program to check the number range

#include <stdio.h>
int main ()
{
    int n_range;

    printf("Enter the number: ");
    scanf("%d", &n_range);

    if(n_range>=1 && n_range<=10)
    {
        printf("Small");
    }

    else if(n_range>=11 && n_range<=50)
    {
        printf("Medium");
    }

    else if(n_range>=51 && n_range<=100)
    {
        printf("Large");
    }

    else if(n_range>100)
    {
        printf("Very Large");
    }

    else
    {
        printf("Invalid Number!!");
    }

    return 0;
}

