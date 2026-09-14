// Program to check whether a number is zero or non-zero

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    if(n==0)
    {
        printf("Number is zero");
    }
    else
    {
        printf("Number is non-zero");
    }

    return 0;
}