
// Program to implement Binary Search using Bubble Sort

#include <stdio.h>

int main()
{
    int n, i, j, temp, search;
    int low, high, mid, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements of the array:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Sorting the array using Bubble Sort

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted list of elements: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nEnter the element to search: ");
    scanf("%d", &search);

    // Binary Search

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == search)
        {
            printf("Element found at index %d", mid);
            found = 1;
            break;
        }
        else if(a[mid] < search)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found == 0)
    {
        printf("Element not found");
    }

    return 0;
}
