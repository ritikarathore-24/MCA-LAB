// Program that decreases a number by 5 using -=

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    n-= 5;

    printf("Number after using -= = %d\n", n);

    return 0;
}