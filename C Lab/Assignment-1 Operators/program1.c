// Program to input two numbers and print their sum, difference, product, quotient, and remainder

#include <stdio.h>
int main()
{
    int a, b, sum, difference, product, quotient, remainder;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    sum=a+b;
    printf("Sum= %d\n", sum);

    difference=a-b;
    printf("Difference= %d\n", difference);

    product=a*b;
    printf("Product= %d\n", product);

    quotient=a/b;
    printf("Quotient= %d\n", quotient);

    remainder=a%b;
    printf("Remainder= %d\n", remainder);

    return 0;
}
