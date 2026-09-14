// Program to find the result of bitwise AND of two numbers

#include <stdio.h>

int main()
{
    int n1, n2, result;

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    result=n1&n2;

    printf("Result of bitwise AND of two numbers= %d\n", result);

    return 0;

}