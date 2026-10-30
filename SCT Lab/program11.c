// Program to generate 10 random numbers using Mid-Square Method

#include <stdio.h>

int main()
{
    int x, square, next;
    int i;

    printf("Enter a 4-digit number: ");
    scanf("%d", &x);

    printf("\nRandom Numbers using Mid-Square Method:\n");
    printf("No.\tSeed\tSquare\t\tRandom Number\n");

    for(i = 1; i <= 10; i++)
    {
        square = x * x;

        // Extract middle 4 digits
        next = (square / 100) % 10000;

        printf("%d\t%d\t%08d\t%d\n", i, x, square, next);

        x = next;
    }

    return 0;
}