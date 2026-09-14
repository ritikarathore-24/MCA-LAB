// Program to demonstrate pre-increment and post-increment 

#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Pre-increment = %d\n", ++a);
    printf("Post-increment = %d\n", a++);

    printf("Value after post-increment = %d", a);

    return 0;
}