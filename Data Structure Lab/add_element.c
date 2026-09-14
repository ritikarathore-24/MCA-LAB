// Program to add the random element of the array

#include <stdio.h>
int main ()
{
    int a[5] = {1,1,1,1,1};
    int i;
    for (i=1; i<5; i++)
    {
        a[i] = a[i] + a[i-1];
    }
    for (i=0; i<5; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}