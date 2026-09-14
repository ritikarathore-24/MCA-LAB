// Program to calculate the final value of a variable after applying +=, -=, *=, and /=

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    n+= 20;
    n-= 15;
    n*= 10;
    n/= 5;

    printf("Final Value of a variable: %d\n", n);
    
    return 0;
}