// Program to calculate the simple interest using arithmetic operators

#include <stdio.h>

int main()
{
    int p, t;
    float r, si;

    printf("Enter the principal: ");
    scanf("%d", &p);

    printf("Enter the rate: ");
    scanf("%f", &r);

    printf("Enter the time: ");
    scanf("%d", &t);

    si= (p*r*t)/100;
    printf("Simple Interest= %.2f\n",si);

    return 0;

}