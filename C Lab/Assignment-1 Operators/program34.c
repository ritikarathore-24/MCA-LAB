// Program to check whether a number is even or odd using ?: operator

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    (n % 2 == 0) ? printf("%d is Even", n) : printf("%d is Odd", n);

    return 0;
}