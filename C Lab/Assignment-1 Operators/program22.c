// Program to check whether a number is even or odd using bitwise AND

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if ((n & 1) == 0)
    {
        printf("%d is Even", n);
    }
    else
    {
        printf("%d is Odd", n);
    }

    return 0;
}