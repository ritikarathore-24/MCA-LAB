// Program to check whether a number is positive and even

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number to check: ");
    scanf("%d", &n);

    if(n>0 && n%2==0)
    {
        printf("Number is positive and even");
    }
    else
    {
        printf("Number is not positive and even");
    }

    return 0;
}