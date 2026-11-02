// Program to sort elements using Quick Sort in ascending order

#include <stdio.h>

void quickSort(int a[], int low, int high)
{
    int i, j, pivot, temp;

    if(low < high)
    {
        pivot = a[low];
        i = low;
        j = high;

        while(i < j)
        {
            while(a[i] <= pivot && i < high)
                i++;

            while(a[j] > pivot)
                j--;

            if(i < j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        temp = a[low];
        a[low] = a[j];
        a[j] = temp;

        quickSort(a, low, j - 1);
        quickSort(a, j + 1, high);
    }
}

int main()
{
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nOriginal list: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    quickSort(a, 0, n - 1);

    printf("\nSorted list in ascending order: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}