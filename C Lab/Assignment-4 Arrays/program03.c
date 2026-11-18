
#include <stdio.h>

int main()
{
    int n, i, pos, value;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n + 1];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter element to insert: ");
    scanf("%d", &value);

    if(pos < 1 || pos > n + 1)
    {
        printf("Invalid position");
    }
    else
    {
        for(i = n; i >= pos; i--)
            a[i] = a[i - 1];

        a[pos - 1] = value;
        n++;

        printf("Array after insertion:\n");
        for(i = 0; i < n; i++)
            printf("%d ", a[i]);
    }

    return 0;
}
