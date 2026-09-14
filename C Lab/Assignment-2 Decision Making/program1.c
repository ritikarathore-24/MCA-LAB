// Program to input a number and print "Positive" if the number is greater than 0

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    if (n>0)
    {
        printf("Positive");
    }

    return 0;
}