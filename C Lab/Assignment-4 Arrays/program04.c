
#include <stdio.h>

int main()
{
    int n, m, i;

    printf("Enter size of first array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter first array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &m);

    int b[m], c[n + m];

    printf("Enter second array elements:\n");
    for(i = 0; i < m; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < n; i++)
        c[i] = a[i];

    for(i = 0; i < m; i++)
        c[n + i] = b[i];

    printf("Merged array:\n");
    for(i = 0; i < n + m; i++)
        printf("%d ", c[i]);

    return 0;
}
