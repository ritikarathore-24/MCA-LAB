// Program to find the smallest of two numbers using ?: 

#include <stdio.h>

int main()
{
    int a, b, smallest;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    smallest = (a < b) ? a : b;

    printf("Smallest number = %d", smallest);

    return 0;
}