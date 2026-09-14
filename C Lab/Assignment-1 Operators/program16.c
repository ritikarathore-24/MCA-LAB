// Program to demonstrate compound assignment operators

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    n += 30;
    printf("After += : %d\n", n);

    n -= 25;
    printf("After -= : %d\n", n);

    n *= 20;
    printf("After *= : %d\n", n);

    n /= 15;
    printf("After /= : %d\n", n);

    n %= 10;
    printf("After %%= : %d\n", n);

    return 0;
}