// Program to find GCD of two numbers using recursion

#include <stdio.h>

// Function to find GCD using recursion
int gcd(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    int n1, n2, result;

    // Take input from the user
    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    // Find GCD
    result = gcd(n1, n2);

    // Display the result
    printf("GCD of %d and %d = %d", n1, n2, result);

    return 0;
}