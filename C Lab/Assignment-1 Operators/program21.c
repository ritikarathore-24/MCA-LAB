// Program to demonstrate AND, OR, and XOR operators.

#include <stdio.h>

int main()
{
    int n1, n2, and, or, xor;

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    and=n1&n2;
    printf("AND of %d and %d= %d\n", n1, n2, and);

    or=n1|n2;
    printf("OR of %d and %d= %d\n", n1, n2, or);

    xor=n1^n2;
    printf("XOR of %d and %d= %d\n", n1, n2, xor);

    return 0;

}