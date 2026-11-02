// Program to sort elements in ascending order using Heap Sort with Min Heap

#include <stdio.h>

void heapify(int a[], int n, int i)
{
    int smallest, left, right, temp;

    smallest = i;
    left = 2 * i + 1;
    right = 2 * i + 2;

    if(left < n && a[left] < a[smallest])
        smallest = left;

    if(right < n && a[right] < a[smallest])
        smallest = right;

    if(smallest != i)
    {
        temp = a[i];
        a[i] = a[smallest];
        a[smallest] = temp;

        heapify(a, n, smallest);
    }
}

int main()
{
    int n, i, temp;

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

    // Create Min Heap
    for(i = n / 2 - 1; i >= 0; i--)
    {
        heapify(a, n, i);
    }

    // Heap Sort
    for(i = n - 1; i > 0; i--)
    {
        temp = a[0];
        a[0] = a[i];
        a[i] = temp;

        heapify(a, i, 0);
    }

    printf("\nSorted list in ascending order: ");

    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}