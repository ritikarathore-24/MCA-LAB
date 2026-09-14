// 7. Post-increment and Pre-increment in expression

#include <stdio.h>

int main()
{
    int a = 5, b = 2;
    int c = a++ + ++b;

    printf("%d %d %d", a, b, c);

    return 0;
}