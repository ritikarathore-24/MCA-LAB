// Program to calculate one period ahead forecast using 3-period Moving Average Method

#include <stdio.h>

int main()
{
    int n, i;

    // Input number of months
    printf("Enter the number of months: ");
    scanf("%d", &n);

    char month[n][20];
    float sale[n];
    float forecast[n];

    // Input month names and sales
    printf("\nEnter the month name and sale:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEnter month %d: ", i + 1);
        scanf("%s", month[i]);

        printf("Enter sale for %s: ", month[i]);
        scanf("%f", &sale[i]);
    }

    // First forecast is 0
    forecast[0] = 0;

    // Calculate 3-period moving average
    for(i = 1; i < n - 1; i++)
    {
        forecast[i] = (sale[i - 1] + sale[i] + sale[i + 1]) / 3;
    }

    // Last forecast is 0
    forecast[n - 1] = 0;

    // Display result
    printf("\n\nMonth\t\tSale\tForecast Using Moving Average Method (3 period ahead)\n");
    
    for(i = 0; i < n; i++)
    {
        if(i == 0 || i == n - 1)
        {
            printf("%-12s\t%.0f\t0\n", month[i], sale[i]);
        }
        else
        {
            printf("%-12s\t%.0f\t(%.0f + %.0f + %.0f) / 3 = %.2f\n",
                   month[i],
                   sale[i],
                   sale[i - 1],
                   sale[i],
                   sale[i + 1],
                   forecast[i]);
        }
    }

    return 0;
}