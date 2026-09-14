// Program to demonstrate pre-decrement and post-decrement

#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Pre-decrement = %d\n", --a);
    printf("Post-decrement = %d\n", a--);

    printf("Value after post-decrement = %d", a);

    return 0;
}