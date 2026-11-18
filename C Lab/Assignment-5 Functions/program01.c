#include <stdio.h>

int largest(int a, int b, int c)
{
    if(a > b && a > c)
        return a;
    else if(b > c)
        return b;
    else
        return c;
}

int main()
{
    int a, b, c, result;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    result = largest(a, b, c);

    printf("Largest number = %d", result);

    return 0;
}