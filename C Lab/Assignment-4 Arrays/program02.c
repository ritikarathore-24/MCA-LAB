
#include <stdio.h>

int main()
{
    int n, i, largest, second;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    largest = second = -2147483647;

    for(i = 0; i < n; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    if(second == -2147483647)
        printf("Second largest element does not exist");
    else
        printf("Second largest element = %d", second);

    return 0;
}
