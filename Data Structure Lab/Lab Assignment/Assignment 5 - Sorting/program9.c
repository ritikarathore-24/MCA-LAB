// Program to sort elements using Heap Sort in descending order

#include <stdio.h>

void heapify(int a[], int n, int i)
{
    int largest, left, right, temp;

    largest = i;
    left = 2 * i + 1;
    right = 2 * i + 2;

    if(left < n && a[left] > a[largest])
        largest = left;

    if(right < n && a[right] > a[largest])
        largest = right;

    if(largest != i)
    {
        temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;

        heapify(a, n, largest);
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

    for(i = n / 2 - 1; i >= 0; i--)
    {
        heapify(a, n, i);
    }

    for(i = n - 1; i > 0; i--)
    {
        temp = a[0];
        a[0] = a[i];
        a[i] = temp;

        heapify(a, i, 0);
    }

    printf("\nSorted list in descending order: ");
    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}