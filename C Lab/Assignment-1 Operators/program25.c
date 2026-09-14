// Program to find the largest of two numbers using the conditional operator

#include <stdio.h>

int main()
{
    int a, b, largest;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    largest = (a > b) ? a : b;

    printf("Largest number = %d", largest);

    return 0;
}