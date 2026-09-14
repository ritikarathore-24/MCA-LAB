// Program to check whether a number is divisible by both 3 and 5

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number to check: ");
    scanf("%d", &n);

    if(n%3==0 && n%5==0)
    {
        printf("Number is divisible by both 3 and 5\n");
    }
    else
    {
        printf("Number is not divisible by both 3 and 5\n");
    }

    return 0;
}