// Program to sort elements using Merge Sort in ascending order

#include <stdio.h>

void merge(int a[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = 0;
    int temp[100];

    while(i <= mid && j <= high)
    {
        if(a[i] < a[j])
        {
            temp[k] = a[i];
            i++;
        }
        else
        {
            temp[k] = a[j];
            j++;
        }
        k++;
    }

    while(i <= mid)
    {
        temp[k] = a[i];
        i++;
        k++;
    }

    while(j <= high)
    {
        temp[k] = a[j];
        j++;
        k++;
    }

    for(i = low, k = 0; i <= high; i++, k++)
    {
        a[i] = temp[k];
    }
}

void mergeSort(int a[], int low, int high)
{
    int mid;

    if(low < high)
    {
        mid = (low + high) / 2;

        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);

        merge(a, low, mid, high);
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

    mergeSort(a, 0, n - 1);

    printf("\nSorted list in ascending order: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}