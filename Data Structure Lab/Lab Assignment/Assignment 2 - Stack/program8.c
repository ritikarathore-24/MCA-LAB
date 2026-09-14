// Program to find the sum of Fibonacci series using recursion

#include <stdio.h>

// Function to find Fibonacci term using recursion
int fibonacci(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n, i, sum = 0;

    // Take the number of terms from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Find Fibonacci series and calculate its sum
    for(i = 0; i < n; i++)
    {
        sum = sum + fibonacci(i);
    }

    // Display the result
    printf("Sum of Fibonacci series = %d", sum);

    return 0;
}