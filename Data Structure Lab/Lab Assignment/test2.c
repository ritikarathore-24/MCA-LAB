#include <stdio.h>

int main()
{
    int arr[3][5];
    int i, j, smallest;

    printf("Enter the elements in the array: \n");

    for (i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i=0; i<3; i++)
    {
        smallest = arr[i][0];

        for (j=1; j<5; j++)
        {
            if (arr[i][j] < smallest)
            {
                smallest = arr[i][j];
            }
        }

         printf("Smallest Element: %d\n", smallest);
    }

    return 0;

}