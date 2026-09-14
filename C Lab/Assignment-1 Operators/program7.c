// Program to check whether a number is equal to zero, positive, or negative

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    if(n==0)
    {
        printf("Number is equal to zero\n");
    }
    else if(n>0)
    {
        printf("Number is positive\n");
    }
    else
    {
        printf("Number is negative\n");
    }

    return 0;
}