// Program to find the sum of all the elements of the 2D array

#include <stdio.h>
int main() 
{
    int arr[2][2]={{1,2},{3,4}};
    int i, j, sum=0;

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            sum=sum+arr[i][j];
        }
    }
    printf("Sum=%d", sum);
    return 0;
}