// Program to find the minimum element of the 2D Array

#include <stdio.h>
int main() 
{
    int arr[2][2] = {{90,3}, {45,87}};
    int i, j, min = arr[0][0];
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    printf("Minimum Element = %d", min);
    return 0;
}