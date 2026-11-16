
// Program to implement Linear Search

#include <stdio.h>

int main()
{
    int n, i, search, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements of the array:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(a[i] == search)
        {
            printf("Element found at index %d", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element not found");
    }

    return 0;
}
