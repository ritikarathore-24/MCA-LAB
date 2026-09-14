// Program to find the maximum element of the 2D Array

#include <stdio.h>
int main()
{
    int arr[2][2] = {{5,8}, {2,10}};
    int i, j, max = arr[0][0];
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    printf("Maximum Element = %d", max);
    return 0;
}