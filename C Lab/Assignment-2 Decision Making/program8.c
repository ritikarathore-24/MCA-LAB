// Profit or Loss - Input cost price and selling price. Print whether there is a profit or loss.

#include <stdio.h>

int main()
{
    int cp, sp;

    printf("Enter the cost price: ");
    scanf("%d", &cp);

    printf("Enter the selling price: ");
    scanf("%d", &sp);

    if(sp>cp)
    {
        printf("There is a profit");
    }
    else
    {
        printf("There is a loss");
    }

    return 0;
}