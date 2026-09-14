#include <stdio.h>

int main()
{
    int n, i, pos, element;

    // taking input from user the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n + 1];

    // inserting elements in the array by the user
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // taking position and element from the user
    printf("Enter the position to insert: ");
    scanf("%d", &pos);

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // shifting elements to the right
    for(i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // inserting the new element
    arr[pos - 1] = element;

    // displaying the updated array
    printf("Array after insertion: ");
    for(i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
