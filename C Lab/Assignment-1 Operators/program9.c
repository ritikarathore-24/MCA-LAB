// Program to find the largest of two numbers using relational operators

#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    if(n1 > n2)
    {
        printf("Largest Number = %d\n", n1);
    }
    else if(n2 > n1)
    {
        printf("Largest Number = %d\n", n2);
    }
    else
    {
        printf("Both numbers are equal = %d\n", n1);
    }

    return 0;
}