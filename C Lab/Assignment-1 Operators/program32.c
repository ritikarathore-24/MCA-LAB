// Program to find the size of int, float, char, and double using sizeof

#include <stdio.h>

int main()
{
    printf("Size of int = %d bytes\n", sizeof(int));
    printf("Size of float = %d bytes\n", sizeof(float));
    printf("Size of char = %d byte\n", sizeof(char));
    printf("Size of double = %d bytes", sizeof(double));

    return 0;
}