// Program to divide a number by 2 using the right shift operator

#include <stdio.h>

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = n >> 1;

    printf("Number after dividing by 2 = %d", result);

    return 0;
}