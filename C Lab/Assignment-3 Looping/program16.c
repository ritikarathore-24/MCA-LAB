#include <stdio.h>

int main()
{
    char ch;

    do
    {
        printf("Hello\n");

        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &ch);

    } while(ch == 'Y' || ch == 'y');

    return 0;
}