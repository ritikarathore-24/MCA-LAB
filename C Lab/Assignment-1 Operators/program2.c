// Program to calculate the area and perimeter of a rectangle

#include <stdio.h>
int main()
{
    int l, b, a, p;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &l);

    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &b);

    a=l*b;
    printf("Area of the rectangle= %d\n", a);

    p=2*(l+b);
    printf("Perimeter of the rectangle= %d\n", p);
    
    return 0;

}