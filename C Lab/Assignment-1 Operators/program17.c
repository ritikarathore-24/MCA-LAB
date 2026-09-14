// Program that increases a number by 10 using +=

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    n+= 10;

    printf("Number after using += = %d\n", n);

    return 0;

}