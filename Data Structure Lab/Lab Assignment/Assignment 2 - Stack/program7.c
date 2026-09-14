// Program to find factorial of a number using recursion

#include <stdio.h>

// Function to find factorial using recursion
int factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int n, result;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Find factorial
    result = factorial(n);

    // Display the result
    printf("Factorial of %d = %d", n, result);

    return 0;
}