// Program to check whether a number is divisible by 3 or not.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    if(n%3==0)
    {
        printf("Divisible by 3");
    }
    else 
    {
        printf("Not divisible by 3");
    }

    return 0;
}