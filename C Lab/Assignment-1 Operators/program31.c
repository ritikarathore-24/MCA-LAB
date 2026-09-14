// Program to demonstrate important special operators in C include sizeof, comma

#include <stdio.h>

int main()
{
    int a, b, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = (a, b, a + b);

    printf("Sum = %d\n", sum);
    printf("Size of a = %d bytes", sizeof(a));

    return 0;
}