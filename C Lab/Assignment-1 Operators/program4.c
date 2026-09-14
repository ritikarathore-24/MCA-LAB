// Program to input a 3-digit number and find the sum of its digits

#include <stdio.h>

int main()
{
    int dig, sum;

    printf("Enter a 3-digit number: ");
    scanf("%d", &dig);

    sum=(dig/100)+((dig/10)%10)+(dig%10);

    printf("Sum of digits= %d\n", sum);

    return 0;
}