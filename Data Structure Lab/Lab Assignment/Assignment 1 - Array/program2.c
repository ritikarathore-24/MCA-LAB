#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    float average;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("Sum = %d\n", sum);

    average = (float)sum / n;
    printf("Average = %.2f", average);

    return 0;
}
