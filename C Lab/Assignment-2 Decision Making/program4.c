//Program to check whether a number is positive and even using if.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    if(n>0 && n%2==0)
    {
        printf("Positive and Even");
    }

    return 0;
}