// 6. Modulus and division operators

#include <stdio.h>

int main()
{
    int a = 10, b = 3;
    int c = a % b + a / b;

    printf("%d", c);

    return 0;
}