// Program to find positive even, positive odd and negative 

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    if(n > 0)
    {
        if(n % 2 == 0)
        {
            printf("Positive Even");
        }
        else
        {
            printf("Positive Odd");
        }
    }
    else if(n < 0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }

    return 0;
}