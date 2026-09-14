// Program to input a number and print "Divisible by 5" if it is divisible by 5.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    if(n%5==0)
    {
        printf("Divisible by 5");
    }

    return 0;
}