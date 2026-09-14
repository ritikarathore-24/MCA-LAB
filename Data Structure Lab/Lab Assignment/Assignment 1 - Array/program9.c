#include <stdio.h>

int main()
{
    int n, m;
    int i, j;
    int arr[50][50];
    int element;
    int count = 0;

    // Taking rows and columns from user
    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("Enter number of columns: ");
    scanf("%d", &m);

    // Taking array elements
    printf("\nEnter the elements of the array:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Displaying the 2-D array
    printf("\nThe 2-D Array is:\n\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // Taking element to search
    printf("\nEnter the element to search: ");
    scanf("%d", &element);

    // Searching the element
    printf("\nElement %d found at:\n", element);
    printf("Row\tColumn\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr[i][j] == element)
            {
                printf("%d\t%d\n", i + 1, j + 1);
                count++;
            }
        }
    }

    // Displaying total occurrences
    if (count > 0)
    {
        printf("\nTotal occurrences of %d = %d\n", element, count);
    }
    else
    {
        printf("\nElement %d is not present in the array.\n", element);
    }

    return 0;
}